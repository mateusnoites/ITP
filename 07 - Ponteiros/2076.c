#include <stdio.h>

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

long long multi_sum(long long min, long long max, long long mult) {
    long long n2 = max / mult;
    long long n1 = (min - 1) / mult;

    long long sum1 = mult * ((n2 * (n2 + 1)) / 2);
    long long sum2 = mult * ((n1 * (n1 + 1)) / 2);
    return sum1 - sum2;
}

long long inclusion_exclusion(int index, int n, int *apps, int count, long long curr_lcm, long long min, long long max) {
    if (index == n) {
        if (count == 0) return 0;
        long long sum = multi_sum(min, max, curr_lcm);
        return (count % 2 == 1) ? sum : -sum;
    }

    long long include = inclusion_exclusion(index + 1, n, apps, count + 1, lcm(curr_lcm, apps[index]), min, max);
    long long exclude = inclusion_exclusion(index + 1, n, apps, count, curr_lcm, min, max);

    return include + exclude;
}

int main() {
    int instancies, initial_value, final_value, application_ammount;
    scanf(" %d", &instancies);

    for (int current_instance = 0; current_instance < instancies; current_instance++) {
        scanf(" %d %d %d", &initial_value, &final_value, &application_ammount);

        int applications[application_ammount];
        for (int i = 0; i < application_ammount; i++)
            scanf(" %d", &applications[i]);

        long long sum = inclusion_exclusion(0, application_ammount, applications, 0, 1, initial_value, final_value);
        printf("%lld\n", sum % 1300031);
    }

    return 0;
}