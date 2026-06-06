#include <stdio.h>

void ImprimeNumeros(int N){
    if(N < 0)
        return;

    printf("%d", N);

    ImprimeNumeros(N - 2);
}

int main(){
    int N;
    scanf("%d", &N);
    ImprimeNumeros(N);
}