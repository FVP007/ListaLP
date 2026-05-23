#include <stdio.h>

int binario(int);

int main(){
    printf("%d\n", binario(4));
    return 0;
}

int binario(int numero){
    int resultadoBinario = 0;
    int posicao = 1;

    if (numero == 0) return 0;

    while(numero > 0){
        int resto = numero % 2;
        
        resultadoBinario += (resto * posicao); 
        
        posicao *= 10; 
        
        numero = numero / 2;
    }
    
    return resultadoBinario;
}