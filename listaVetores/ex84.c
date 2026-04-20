#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int N, i;

    printf("Digite um valor N para o tamanho do vetor: ");
    scanf("%d", &N);

    while(N <= 0){
        printf("o valor N deve ser maior que 0, digite novamente: ");
        scanf("%d", &N);
    }

    float A[N], B[N], Soma[N];
    
    for(int i = 0; i < N; i++){
        printf("Digite o valor %d para o vetor A: ", i+1);
        scanf("%f", &A[i]);
        printf("Digite o valor %d para o vetor B: ", i+1);
        scanf("%f", &B[i]);
        Soma[i] = A[i] + B[i];
    }

    for(int i = 0; i < N; i++)
        printf("Valor %d do vetor Soma: %.2f", i+1, Soma[i]);

    return 0; 
}