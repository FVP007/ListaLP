#include <stdio.h>

int ehPrimo(int);
int primosEntreNumeros(int, int);

int main(){
    printf("%d", primosEntreNumeros(1, 10));
}

int ehPrimo(int numero){
    if(numero == 1) return 0;
    for(int x = 2; x < numero; x++)
        if(numero%x == 0) return 0;
    return 1;
}

int primosEntreNumeros(int x, int y){
    int primosEntreNumeros = 0;
    for(int x = x; x < y; x++)
        if(ehPrimo(x)) primosEntreNumeros++;
    
    return primosEntreNumeros;
}