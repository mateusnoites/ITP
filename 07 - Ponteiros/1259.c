#include <stdio.h>
#include <stdlib.h>

// Usa quick sort

int compare_even_qsort(const void *a, const void *b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    return (arg1 - arg2);
}

int compare_odd_qsort(const void *a, const void *b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
    return (arg2 - arg1);
}

void sort_even(int *even_list, int size) {
    qsort(even_list, size, sizeof(int), compare_even_qsort);
}

void sort_odd(int *odd_list, int size) {
    qsort(odd_list, size, sizeof(int), compare_odd_qsort);
}

int main() {
    int n;
    scanf("%d", &n);
    int numbers[n];

    int even_count = 0, odd_count;

    for (int i = 0; i < n; i++) {
        int temp;

        scanf(" %d", &temp);

        numbers[i] = temp;

        if (temp % 2 == 0) even_count++;
    }

    odd_count = n - even_count;

    int even_numbers[even_count], odd_numbers[odd_count];

    for (int i = 0, even_index = 0, odd_index = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {even_numbers[even_index] = numbers[i]; even_index++;}
        else {odd_numbers[odd_index] = numbers[i]; odd_index++;}
    }

    sort_even(even_numbers, even_count);
    sort_odd(odd_numbers, odd_count);

    for (int i = 0; i < even_count; i++) printf("%d\n", even_numbers[i]);
    for (int i = 0; i < odd_count; i++) printf("%d\n", odd_numbers[i]);

    return 0;
}