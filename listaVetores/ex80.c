#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float Q[20], maiorValor = 0;
    int i, posicaoMaiorValor;

    for (i = 0; i < 20; i++){
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%f", &Q[i]);
        while(Q[i] <= 0){
            printf("Apenas valores positivos! Digite o valor %d novamente: ", i+1);
            scanf("%f", &Q[i]);
        }
        if(Q[i] > maiorValor){
            maiorValor = Q[i];
            posicaoMaiorValor = i;
        }
    }

    printf("Maior valor do vetor e sua posição, respectivamente: %.2f e %d", maiorValor, posicaoMaiorValor);
    
    return 0; 
}