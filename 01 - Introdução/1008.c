#include <stdio.h>
 
int main() {
    int num, hrs;
    double vlr, salary;
    
    scanf("%i %i %lf", &num, &hrs, &vlr);
    
    salary = hrs * vlr;
    
    printf("NUMBER = %i\n", num);
    printf("SALARY = U$ %.2lf\n", salary);
 
    return 0;
}