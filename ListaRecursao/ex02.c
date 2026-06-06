#include <stdio.h>

int FatorialN(int N){
    if(N == 1)
        return N;

    return N * (FatorialN(N-1));
}

int main(){
    int N;
    scanf("%d", &N);
    printf("\n%d", FatorialN(N));
}