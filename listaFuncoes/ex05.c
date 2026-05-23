#include <stdio.h>

int ehPrimo(int);

int main(){
    if(ehPrimo(4))
        printf("primo");
    else
        printf("nao primo");
}

int ehPrimo(int numero){
    if(numero == 1) return 0;

    for(int x = 2; x < numero; x++)
        if(numero%x == 0) return 0;
    return 1;
}