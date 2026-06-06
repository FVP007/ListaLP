#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menorValorVetor(int array[], int tamanho, int menor){
    if(tamanho <= 0)
        return menor;

    if(array[tamanho-1] < menor) menor = array[tamanho-1];

    return menorValorVetor(array, tamanho - 1, menor);
}

#define tamanho 10

int main(){
    srand(time(NULL));

    int array[10];

    for(int i = 0; i < tamanho; i++){
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }

    int menor = menorValorVetor(array, tamanho, array[0]);

    printf("%d", menor);

}