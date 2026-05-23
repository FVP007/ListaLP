#include <stdio.h>

int fatorial(int);

int main(){
    printf("%d", fatorial(6));
}

int fatorial(int numero){
    int fatorial = 1;
    for(int x = 2; x <= numero; x++)
        fatorial *= x;
    return fatorial;
}