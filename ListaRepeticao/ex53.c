#include <stdio.h>

int main()
{
    int i, x = 0, n;

	printf("Digite um número: ");
	scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
		x++;
        printf("%d° número: %d\n", x, i);
    }
}