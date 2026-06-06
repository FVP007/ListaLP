#include <stdio.h>

int SomatorioN(int N){
    if(N == 1)
        return N;

    return N + (SomatorioN(N-1));
}

int main(){
    int N;
    scanf("%d", &N);
    printf("\n%d", SomatorioN(N));
}