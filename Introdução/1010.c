#include <stdio.h>
 
int main() {
    int cod1, nmr1;
    int cod2, nmr2;
    double vlr1, vlr2, total;
    
    scanf("%i %i %lf", &cod1, &nmr1, &vlr1);
    scanf("%i %i %lf", &cod2, &nmr2, &vlr2);
    
    total = nmr1 * vlr1 + nmr2 * vlr2;
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}