#include <stdio.h>
 
int main() {
    int dist;
    double lit, cons;
    
    scanf("%i %lf", &dist, &lit);
    
    cons = dist / lit;
    
    printf("%.3lf km/l\n", cons);
 
    return 0;
}