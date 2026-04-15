#include <stdio.h>

float custoFabrica, percentualImposto, percentualDistribuidor, custoFinal;
int main()
{
    percentualImposto = 0.45;
    percentualDistribuidor = 0.28;
    printf("Digite o custo de fabrica de um carro: ");
    scanf("%f", &custoFabrica);
    
    custoFinal = custoFabrica + (custoFabrica*percentualDistribuidor) + (custoFabrica*percentualImposto);
    
    printf("Custo final do carro: %f", custoFinal);
    
}