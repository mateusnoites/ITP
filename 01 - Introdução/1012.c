#include <stdio.h>
 
int main() {
    double a, b, c;
    double a_tri, a_cir, a_tra, a_qua, a_ret;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    a_tri = (a * c) / 2;
    a_cir = 3.14159 * (c * c);
    a_tra = ((a + b) * c) / 2;
    a_qua = b * b;
    a_ret = a * b;
     
    printf("TRIANGULO: %.3lf\n", a_tri);
    printf("CIRCULO: %.3lf\n", a_cir);
    printf("TRAPEZIO: %.3lf\n", a_tra);
    printf("QUADRADO: %.3lf\n", a_qua);
    printf("RETANGULO: %.3lf\n", a_ret);
 
    return 0;
}