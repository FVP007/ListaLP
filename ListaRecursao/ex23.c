#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SomaArray(int array[], int tamanho){
    if (tamanho == 0) return array[0];

    return array[tamanho] + SomaArray(array, tamanho - 1);
}

int main(){
    srand(time(NULL));

    int tamanho = 10;
    int array[tamanho];

    for(int i = 0; i < tamanho; i++){
        array[i] = rand() % 10;
        printf("%d", array[i]);
    }

    int soma = SomaArray(array, tamanho - 1);
    printf("Soma da Array: %d", soma);
}