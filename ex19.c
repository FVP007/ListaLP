#include <stdio.h>

float potenciaLampada, comprimentoSala, larguraSala, alturaSala, numeroAzulejos;

int main()
{
    printf("Digite o comprimento da sala: ");
    scanf("%f", &comprimentoSala);
    printf("Digite a largura da sala: ");
    scanf("%f", &larguraSala);
    printf("Digite a altura da sala: ");
    scanf("%f", &alturaSala);
    
    numeroAzulejos = ((comprimentoSala*alturaSala*2)/1.5)+
                     ((alturaSala*larguraSala*2)/1.5);
    
    printf("O numero de azulejos necessarios para a sala sao: %f", numeroAzulejos);
}