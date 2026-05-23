#include <stdio.h>

int menorQuadradoSuperior(int);

int main() {
    printf("%d\n", menorQuadradoSuperior(15));
}

int menorQuadradoSuperior(int valorDado) {
    int i = 1;
    while ((i * i) <= valorDado)
        i++;
    
    return i;
}