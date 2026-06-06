#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InverterVetor(int array[], int tamanho) {
   if (tamanho <= 1) return;

    int temp = array[0];
    array[0] = array[tamanho];
    array[tamanho] = temp;
    
    InverterVetor(array + 1, tamanho - 2);
}

int main(){
    srand(time(NULL));
    int array[100];

    for(int i = 0; i < 100; i++){
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }

    InverterVetor(array, 99);
    printf("\n");
    for(int i = 0; i < 100; i++)
        printf("%d ", array[i]);
    
}
