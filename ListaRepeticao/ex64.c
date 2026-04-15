#include <stdio.h>

int main()
{
    int i, numero, soma = 0;
    
    for(i = 1; i <= 10; i++){
		printf("Digite um número: ");
		scanf("%d", &numero);
		if(numero <= 40)
			soma += numero;
    }
	printf("Soma dos números menores ou iguais a 40: %d", soma);
}