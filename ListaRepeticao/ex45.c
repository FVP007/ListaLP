#include <stdio.h>

int main()
{
    float n1, divisao;
    float n2 = 0;
    
    printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	
	while(n2 == 0){
        printf("Digite o segundo número (deve ser diferente de zero): ");
        scanf("%f", &n2);
	}
	
	divisao = n1/n2;
	
	printf("Divisão entre o primeiro e o segundo número: %.2f", divisao);
}