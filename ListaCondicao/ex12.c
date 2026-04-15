#include <stdio.h>

float salario, percentualReajuste;
int main()
{
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    
    salario = salario + (salario*(percentualReajuste/100));
    
    printf("Novo salario: %f", salario);
    
}