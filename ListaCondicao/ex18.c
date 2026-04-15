#include <stdio.h>

int numeroLampadas;
float potenciaLampada, comprimentoComodo, larguraComodo;

int main()
{
    printf("Digite a potencia da lampada: ");
    scanf("%f", &potenciaLampada);
    
    printf("Digite o comprimento do comodo: ");
    scanf("%f", &comprimentoComodo);
    printf("Digite a largura do comodo: ");
    scanf("%f", &larguraComodo);
    
    numeroLampadas = comprimentoComodo*larguraComodo*18/potenciaLampada;
    
    printf("O numero de lampadas necessarias para iluminar o comodo sao: %d", numeroLampadas);
}
