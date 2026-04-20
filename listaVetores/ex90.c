#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int vetor[30], busca, i, cont = 0;

    printf("Digite 30 números:\n");
    for(i = 0; i < 30; i++) 
        scanf("%d", &vetor[i]);

    printf("\nDigite o número que deseja contar: ");
    scanf("%d", &busca);

    for(i = 0; i < 30; i++) {
        if(vetor[i] == busca) 
            cont++;
    }

    printf("O número %d aparece %d vezes no vetor.", busca, cont);

    return 0;
}