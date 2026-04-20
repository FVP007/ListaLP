#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int vetor[20], novoVetor[19];
    int numeroBuscar, i, j = 0, encontrado = 0;

    for(i = 0; i < 20; i++) {
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite um número para verificar e remover: ");
    scanf("%d", &numeroBuscar);

    for(i = 0; i < 20; i++) {
        if(vetor[i] == numeroBuscar)
            encontrado = 1;
        else{
            if(j < 19) 
                novoVetor[j++] = vetor[i];
        }
    }

    if(encontrado) {
        printf("Número encontrado e removido. Novo vetor:\n");
        for(i = 0; i < 19; i++) 
            printf("%d ", novoVetor[i]);
    }else 
        printf("O número não existe no vetor original.");

    return 0;
}