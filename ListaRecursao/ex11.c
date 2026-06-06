#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ImprimeNumeros(int array[], int tamanho){
    if(tamanho < 0)
        return;

    printf("%d ", array[tamanho]);

    ImprimeNumeros(array, tamanho-1);
}

int main(){
    srand(time(NULL));

    int array[10];

    for(int i = 0; i < 10; i++)
        array[i] = rand() % 100;
    
    ImprimeNumeros(array, 10);
}