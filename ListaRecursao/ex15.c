#include <stdio.h>

float SerieS(float n){
    if(n <= 1) return 2;

    return ((1 + n*n) / n) + SerieS(n-1);
}

int main(){
    printf("%.1f", SerieS(5));
}