#include <stdio.h>

int main()
{
    int i, numero, soma = 0;
    
    for(i = 1; i <= 10; i++){
		printf("Digite um número: ");
		scanf("%d", &numero);
		soma += numero;
    }
	printf("Soma: %d", soma);
}