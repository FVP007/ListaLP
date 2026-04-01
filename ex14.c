#include <stdio.h>

float salarioFixo, carrosVendidos, valorTotal, valorCarro, salarioFinal;
int main()
{
    printf("Digite seu salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o numero de carros vendidos: ");
    scanf("%f", &carrosVendidos);
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotal);
    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorCarro);
    
    salarioFinal = salarioFixo + valorCarro*carrosVendidos + valorTotal*0.05;
    
    printf("Salario final: %f", salarioFinal);
    
}