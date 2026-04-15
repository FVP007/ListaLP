#include <stdio.h>

int main()
{
   float num;
   int i, intervalo = 0, naoIntervalo = 0;

	printf("Digite um número: ");
	scanf("%f", &num);
	for(i = 1; i <= 10; i++){
		if(num < 10 || num > 20)
			naoIntervalo++;
		else
			intervalo++;
		
		printf("Digite um número: ");
		scanf("%f", &num);
	}
	printf("Quantidade de números dentro do intervalo: %d", intervalo);
	printf("Quantidade de números fora do intervalo: %d", naoIntervalo);
}