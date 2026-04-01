#include <stdio.h>

float n1, n2, n3;

int main() {
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
    
    if(n1 > n2 && n1 > n3){ 
        if(n2 > n3)
            printf("Numeros em ordem decrescente: %f, %f e %f", n1, n2, n3);
        else
            printf("Numeros em ordem decrescente: %f, %f e %f", n1, n3, n2);
    }else if(n2 > n1 && n2 > n3){
        if(n1 > n3)
            printf("Numeros em ordem decrescente: %f, %f e %f", n2, n1, n3);
        else
            printf("Numeros em ordem decrescente: %f, %f e %f", n2, n3, n1);
    }else if (n3 > n1 && n3 > n2){
        if(n1 > n2)
            printf("Numeros em ordem decrescente: %f, %f e %f", n3, n1, n2);
        else
            printf("Numeros em ordem decrescente: %f, %f e %f", n3, n2, n1);
    }
}