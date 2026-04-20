#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float vetor[20];
    int i;
    
    for(i = 0; i < 20; i++){
        printf("Digite o valor %d do vetor", i+1);
        scanf("%f", &A[i]);
    }

    for(i = 19; i >= 0; i--)
        printf("Valor %d do vetor: %.2f", i+1, vetor[i]);

    return 0; 
}