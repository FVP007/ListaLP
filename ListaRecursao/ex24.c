#include <stdio.h>

int Tribonacci(int n){
    if (n <= 1) return 0;
    if (n == 2) return 1;

    return Tribonacci(n - 1) + Tribonacci(n - 2) + Tribonacci(n - 3); 
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Valor %d de Tribonacci: %d", n, Tribonacci(n));
}