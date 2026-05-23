#include <stdio.h>

float fatorial(float);
float combinacoes(float, float);

int main(){
    printf("%f", combinacoes(10, 3));
}

float combinacoes(float n, float p){
    return ((fatorial(n))) / (fatorial(p) * fatorial(n-p));
}

float fatorial(float numero){
    float fatorial = 1;
    for(int x = 2; x <= numero; x++)
        fatorial *= x;
    return fatorial;
}
