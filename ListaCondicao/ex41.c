#include <stdio.h>

float n1, n2;

int main() {
    printf("Digite o primeiro numero:");
    scanf("%f", &n1);
    printf("Digite o segundo numero:");
    scanf("%f", &n2);
    
    if(n1 == n2)
        printf("Numeros iguais");
    else if(n1 > n2)
        printf("Primeiro é maior");
    else
        printf("Segundo é maior");
}