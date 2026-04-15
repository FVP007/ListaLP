#include <stdio.h>

int main()
{
    float n1, n2, divisao;
    
    printf("Digite o primeiro número: ");
	scanf("%f", &n1);
	
	do {
        printf("Digite o segundo número (deve ser diferente de zero): ");
        scanf("%f", &n2);
	} while(n2 == 0);
	
	divisao = n1/n2;
	
	printf("Divião entre o primeiro e o segundo número: %.2f", divisao);
}