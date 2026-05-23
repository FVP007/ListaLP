#include <stdio.h>

void fibonacci(int);

int main() {
    fibonacci(10);
    return 0;
}

void fibonacci(int n) {
    int atual = 0;
    int proximo = 1;
    int auxiliar;

    for (int i = 0; i < n; i++) {
        printf("%d ", atual);
        auxiliar = atual + proximo;
        atual = proximo;
        proximo = auxiliar;
    }
    printf("\n");
}