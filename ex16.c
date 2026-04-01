#include <stdio.h>

float n1, n2, n3, media;
int main()
{
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &n1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &n2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &n3);
    
    media = ((n1*2)+(n2*3)+(n3*5))/10;
    
    printf("Media final: %.2f", media);
    
}