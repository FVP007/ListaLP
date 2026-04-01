#include <stdio.h>

float valorMetros, valorCentimetros;
int main()
{
    printf("Digite um valor em metros: ");
    scanf("%f", &valorMetros);
    valorCentimetros = valorMetros*100;
    printf("Valor em centimetros: %f", valorCentimetros);
}
