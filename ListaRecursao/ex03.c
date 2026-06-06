#include <stdio.h>

int SomaNCubos(int N){
    if(N == 1)
        return N;

    return N*N*N + (SomaNCubos(N-1));
}

int main(){
    int N;
    scanf("%d", &N);
    printf("\n%d", SomaNCubos(N));
}