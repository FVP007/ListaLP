#include <stdio.h>
#include <string.h>

int inversoNumero(int);

int main(){
    printf("%d", inversoNumero(83832));
}
int inversoNumero(int numero){
    int digito, invertido = 0;

    while(numero > 0){
        digito = numero%10;
        invertido = invertido*10 + digito;
        numero = numero/10;
    }
    
    return invertido;
}