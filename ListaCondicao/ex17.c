#include <stdio.h>

float raio, area;
int main()
{
    printf("Digite o raio de um circulo: ");
    scanf("%f", &raio);
    
    area = 3.14*(raio*raio);
    
    printf("Área do circulo: %f", area);
}