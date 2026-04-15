#include <stdio.h>

int main()
{
    int i, numeroTotalMercadorias, numeroMercadoria, valorMercadoria, soma = 0;
	float media;

	printf("Digite o número total de mercadorias: ");
	scanf("%d", &numeroTotalMercadorias);
	for(i = 1; i <= numeroTotalMercadorias; i++){
		printf("Digite o número da mercadoria: ");
		scanf("%d", &numeroMercadoria);
		printf("Digite o valor da mercadoria: ");
		scanf("%d", &valorMercadoria);
		soma += valorMercadoria;
	}
	media = soma / numeroTotalMercadorias;
	printf("Valor total das mercadorias: %d", soma);
	printf("Média dos valores das mercadorias: %.2f", media);
}