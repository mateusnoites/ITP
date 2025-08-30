#include <stdio.h>
 
int main() {
    char nome[100];
    double salario, mt_vendas, total;
    
    scanf("%s %lf %lf", nome, &salario, &mt_vendas);
    
    total = salario + (mt_vendas * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}