#include <stdio.h>

int FatorialDuplo(int n){
    if(n <= 1) return 1; 

    return n * FatorialDuplo(n - 2);
}

int main(){
    int n;
    scanf("%d", &n);

    printf("Fatorial Duplo: %d", FatorialDuplo(n));
}