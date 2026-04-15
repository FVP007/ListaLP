#include <stdio.h>

float comprimentoPista, voltasPercorridas, numeroReabastecimentos, consumoCarro, numeroMinimoLitros;

int main() {
    printf("Digite o comprimento da pista (em m): ");
    scanf("%f", &comprimentoPista);

    printf("Digite o numero de voltas percorridas: ");
    scanf("%f", &voltasPercorridas);

    printf("Digite o numero de reabastecimentos: ");
    scanf("%f", &numeroReabastecimentos);

    printf("Digite o consumo do carro (km/l): ");
    scanf("%f", &consumoCarro);

    numeroMinimoLitros = (((comprimentoPista / 1000) * voltasPercorridas) / numeroReabastecimentos) / consumoCarro;

    printf("O numero minimo de litros e: %.2f", numeroMinimoLitros);

}