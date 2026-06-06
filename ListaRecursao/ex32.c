#include <stdio.h>

int DecimalBinario(int n){
    if (n == 1 || n == 0) return n;

    return DecimalBinario(n/2) * 10 + n%2;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Decimal para Binario: %d", DecimalBinario(n));
}