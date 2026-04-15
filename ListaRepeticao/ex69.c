#include <stdio.h>

int main()
{
    int i, numeroTotalMercadorias, numeroMercadoria, valorMercadoria, soma = 0;
	float media;
	char resposta;
	numeroTotalMercadorias = 0;
	while(true){
		numeroTotalMercadorias++;
		printf("Digite o número da mercadoria: ");
		scanf("%d", &numeroMercadoria);
		printf("Digite o valor da mercadoria: ");
		scanf("%d", &valorMercadoria);
		soma += valorMercadoria;
		printf("Deseja continuar? (S/N): ");
		scanf(" %c", &resposta);
		if(resposta == 'N')
			break;	
	}
	media = soma / numeroTotalMercadorias;
	printf("Valor total das mercadorias: %d", soma);
	printf("Média dos valores das mercadorias: %.2f", media);
}