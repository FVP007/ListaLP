#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float Q[20], menorValor = 0;
    int i, posicaoMenorValor = 0;

    for (i = 0; i < 20; i++){
        printf("Digite o valor %d do vetor (positivo): ", i+1);
        scanf("%f", &Q[i]);

        while(Q[i] <= 0){
            printf("Apenas valores positivos! Digite o valor %d novamente: ", i+1);
            scanf("%f", &Q[i]);
        }

        if(i == 0){
            menorValor = Q[i];
            posicaoMenorValor = i;
        }
        
        if(Q[i] < menorValor){
            menorValor = Q[i];
            posicaoMenorValor = i;
        }
    }

    printf("Menor valor do vetor e sua posição, respectivamente: %.2f e %d", menorValor, posicaoMenorValor);

    return 0;
}
