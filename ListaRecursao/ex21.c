#include <stdio.h>

int Sequencia(int n){
    if (n == 1 || n == 2) return n;

    return 2 * Sequencia(n - 1) + 3 * Sequencia(n - 2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Valor %d da sequencia: %d", n, Sequencia(n));
}