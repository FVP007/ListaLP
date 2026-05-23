#include <stdio.h>

int multiplicacao(int, int);

int main(){
    printf("%d", multiplicacao(10, 2));
}

int multiplicacao(int n1, int n2){
    int multiplicacao = 0;
    for(int x = 0; x < n2; x++)
        multiplicacao += n1;
    return multiplicacao;
}