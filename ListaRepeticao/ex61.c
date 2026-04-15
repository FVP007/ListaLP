#include <stdio.h>

int main()
{
    int i, num,soma = 0, media;
    for(i = 1; i <= 10; i++){
		printf("Digite um número: ");
		scanf("%d", &num);
		soma += num;
    }
    media = soma / 10;
    printf("Média: %d", media);
}