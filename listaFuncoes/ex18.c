#include <stdio.h>

int somaEntreNumeros(int, int);

int main(){
    printf("%d", somaEntreNumeros(1, 10));
}

int somaEntreNumeros(int n1, int n2){
    int somaEntreNumeros = 0;
    for(int x = n1; x <= n2; x++)
        somaEntreNumeros += x;
    
    return somaEntreNumeros;
}