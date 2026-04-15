#include <stdio.h>

float valorOrdometroInicio, valorOrdometroFinal, combustivelGasto, valorTotalRecebido, consumoMedio, lucroLiquido;

int main()
{
    printf("Digite o valor do ordometro no inicio do dia, em km: ");
    scanf("%f", &valorOrdometroInicio);
    printf("Digite o valor do ordometro no final do dia, em km: ");
    scanf("%f", &valorOrdometroFinal);
    printf("Digite a quantidade de combustivel gasto, em L: ");
    scanf("%f", &combustivelGasto);
    printf("Digite o valor total recebido pelos passageiros, em reais: ");
    scanf("%f", &valorTotalRecebido);
    
    consumoMedio = (valorOrdometroFinal-valorOrdometroInicio)/combustivelGasto;
    lucroLiquido = valorTotalRecebido - (combustivelGasto*2.9);
    
    printf("Consumo medio, em km/L: %f \n", consumoMedio);
    printf("Lucro liquido, em reais: %f", lucroLiquido);
}