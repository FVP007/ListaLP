#include <stdio.h>

int main()
{
    int i, n1, n2, soma = 0;
	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	printf("Digite o segundo número: ");
	scanf("%d", &n2);
	for(i = n1; i <= n2; i++){
		soma += i;
	}
	printf("Soma dos inteiros entre %d e %d: %d", n1, n2, soma);
}