#include <stdio.h>

float salarioHora, salario;
int horasTrabalhadas;
int main()
{
    printf("Quanto voce recebe por hora? ");
    scanf("%f", &salarioHora);
    printf("Quantas horas voce trabalhou por mes? ");
    scanf("%d", &horasTrabalhadas);

    salario = salarioHora*horasTrabalhadas;
    printf("Salario total do mes: %f", salario);
}