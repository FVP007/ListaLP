#include <stdio.h>

int main()
{
    int i, x = 0, n;

	printf("Digite um número maior que 0: ");
	scanf("%d", &n);
	while(n <= 0){
		printf("Número inválido, digite um número maior que 0: ");
		scanf("%d", &n);
	}
    
    for(i = 1; i <= n; i++){
		x++;
        printf("%d° número: %d\n", x, i);
    }
}