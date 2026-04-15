#include <stdio.h>

int main()
{
    int i, soma = 0;
	float media;

	for(i = 15; i <= 100; i++){
		soma += i;
	}
	media = soma / 85;
	printf("Média: %.2f", media);
}