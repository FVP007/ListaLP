#include <stdio.h>

int ladosPoligono;
float medidaLado, perimetro;

int main() {
    printf("Digite o numero de lados do poligono regular: ");
    scanf("%d", &ladosPoligono);
    
    if(ladosPoligono < 3)
        printf("Nao e um poligono");
    else if (ladosPoligono > 5)
        printf("Poligono nao identificado");
    else{
        printf("Digite o valor do lado do poligono, em cm: ");
        scanf("%f", &medidaLado);
            
        if (ladosPoligono == 3){
            perimetro = medidaLado*3;
            printf("Triangulo de perimetro %fcm", perimetro);
        }
        if (ladosPoligono == 4){
            perimetro = medidaLado*4;
            printf("Quadrado de perimetro %fcm", perimetro);
        }
        if (ladosPoligono == 5){
            perimetro = medidaLado*5;
            printf("Pentagono de perimetro %fcm", perimetro);
        }
    }
}