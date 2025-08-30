#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int a, b, c, maior1, maior2;
    
    scanf("%d %d %d", &a, &b, &c);
    
    maior1 = (a + b + abs(a-b)) / 2;
    maior2 = (maior1 + c + abs(maior1 - c)) / 2;
    
    printf("%i eh o maior\n", maior2);
 
    return 0;
}