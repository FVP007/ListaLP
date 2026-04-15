#include <stdio.h>

int main()
{
    int i, n;

	printf("Digite um número entre 1 e 10: ");
	scanf("%d", &n);
	while(n < 1 || n > 10){
		printf("Número inválido, digite novamente: ");
		scanf("%d", &n);
	}
	printf("Tabuada do %d: \n", n);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, i * n);
    }
}