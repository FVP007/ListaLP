#include <stdio.h>

int lado, area;
int main()
{
    printf("Digite um valor para o lado de um quadrado: ");
    scanf("%d", &lado);
    area = lado*lado;
    printf("Valor do dobro da area do quadrado: %d", area*2);
}