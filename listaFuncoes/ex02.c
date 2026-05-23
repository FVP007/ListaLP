#include <stdio.h>

int divisao(int, int);

int main(){
    printf("%d", divisao(10, 2));
}

int divisao(int numerador, int denominador){
    int divisao = 0;
    while(numerador > 0){
        numerador -= denominador;
        divisao++;
    }
    return divisao;
}