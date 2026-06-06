#include <stdio.h>

void ImprimeNumeros(int N){
    if(N < 0)
        return;

    ImprimeNumeros(N - 2);

    printf("%d", N);
}

int main(){
    int N;
    scanf("%d", &N);
    ImprimeNumeros(N);
}