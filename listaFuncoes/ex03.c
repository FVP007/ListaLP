#include <stdio.h>

float potencia(float, float);

int main(){
    printf("%.1f", potencia(10, 2));
}

float potencia(float base, float expoente){
    float potencia = 1;
    for(int x = 0; x < expoente; x++)
        potencia *= base;
    return potencia;
}