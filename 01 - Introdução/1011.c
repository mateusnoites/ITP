#include <stdio.h>
 
int main() {
    const double PI  = 3.14159;
    double raio, vol;
    
    scanf("%lf", &raio);
    
    vol = (4/3.0) * PI * (raio * raio * raio);
    
    printf("VOLUME = %.3lf\n", vol);
 
    return 0;
}