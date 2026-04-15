#include <stdio.h>

int main()
{
   float num;
   int i, negativos = 0;

	printf("Digite um número: ");
	scanf("%f", &num);
	for(i = 1; i <= 10; i++){
		if(num < 0){
			negativos++;
		}
		printf("Digite um número: ");
		scanf("%f", &num);
	}
	printf("Quantidade de números negativos: %d", negativos);
}