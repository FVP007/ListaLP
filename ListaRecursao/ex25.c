#include <stdio.h>

int Tetranacci(int n){
    if (n <= 3) return 0;
    if (n == 4) return 1;

    return Tetranacci(n - 1) + Tetranacci(n - 2) + Tetranacci(n - 3) + Tetranacci(n - 4); 
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Valor %d de Tetranacci: %d", n, Tetranacci(n));
}