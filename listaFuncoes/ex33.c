#include <stdio.h>

void divisoresNumero(int);

int main(){
    divisoresNumero(15);
}

void divisoresNumero(int numero){
    printf("Divisores de %d: ", numero);

    for(int i = 1; i <= numero; i++)
        if(numero % i == 0) printf("%d ", i);
    
}