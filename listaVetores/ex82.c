#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float A[10], X, M[10];
    int i;
    
    for(i = 0; i < 10; i++){
        printf("Digite o valor %d do vetor", i+1);
        scanf("%f", &A[i]);
    }

    printf("Digite o valor multiplicador do vetor");
    scanf("%f", &X);

    for(i = 0; i < 10; i++){
        M[i] = A[i] * X;
        printf("Novo valor %d do vetor: %.2f", i+1, M[i]);
    }

    return 0; 
}