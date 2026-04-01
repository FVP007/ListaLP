#include <stdio.h>

float n1, n2, n3;

int main() {
    printf("Digite o primeiro angulo do triangulo: ");
    scanf("%f", &n1);
    printf("Digite o segundo angulo do triangulo: ");
    scanf("%f", &n2);
    printf("Digite o terceiro angulo do triangulo: ");
    scanf("%f", &n3);
    
    if(n1 == 90 || n2 == 90 || n3 == 90)
        printf("Triangulo Retangulo");
    else if (n1 > 90 || n2 > 90 || n3 > 90)
        printf("Triangulo Obtusangulo");
    else
        printf("Triangulo Acutangulo");
}