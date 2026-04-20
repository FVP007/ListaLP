#include <stdio.h>
#include <windows.h>

int main() {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float temperaturaMedia[365], maiorTemperatura, menorTemperatura, somaTemperaturas = 0, temperaturaMediaAnual;
    int i, diasAbaixoDaMedia = 0;

    for (i = 0; i < 365; i++) {
        printf("Digite a temperatura media do dia %d do ano: ", i + 1);
        scanf("%f", &temperaturaMedia[i]);

        if (i == 0) {
            maiorTemperatura = temperaturaMedia[i];
            menorTemperatura = temperaturaMedia[i];
        }

        if (temperaturaMedia[i] < menorTemperatura)
            menorTemperatura = temperaturaMedia[i];
        else if (temperaturaMedia[i] > maiorTemperatura)
            maiorTemperatura = temperaturaMedia[i];

        somaTemperaturas += temperaturaMedia[i];
    }

    temperaturaMediaAnual = somaTemperaturas / 365;

    for (i = 0; i < 365; i++) {
        if (temperaturaMedia[i] < temperaturaMediaAnual) {
            diasAbaixoDaMedia++;
        }
    }

    printf("\n--- Resultados ---\n");
    printf("Maior temperatura: %.2f\n", maiorTemperatura);
    printf("Menor temperatura: %.2f\n", menorTemperatura);
    printf("Temperatura média anual: %.2f\n", temperaturaMediaAnual);
    printf("Dias abaixo da média anual: %d\n", diasAbaixoDaMedia);

    return 0;
}
