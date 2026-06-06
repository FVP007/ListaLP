#include <stdio.h>

int FatorialQuadruplo(int n){
    if(n <= 1) return 2;

    return (4 * n - 2) * FatorialQuadruplo(n - 1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Fatorial Quadruplo: %d", FatorialQuadruplo(n));
}