#include <stdio.h>

int PotenciaKN(int K, int N){
    if(N == 1)
        return K;

    return K * (PotenciaKN(K, N-1));
}

int main(){
    int K, N;
    scanf("%d", &K);
    scanf("%d", &N);
    printf("\n%d", PotenciaKN(K, N));
}