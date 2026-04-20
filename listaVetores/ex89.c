#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int V1[15], V2[15], i, coincidencias = 0;

    for(i = 0; i < 15; i++) {
        printf("Digite o valor de V1[%d]: ", i);
        scanf("%d", &V1[i]);
        printf("Digite o valor de V2[%d]: ", i);
        scanf("%d", &V2[i]);
    }

    for(i = 0; i < 15; i++) {
        if(V1[i] == V2[i])
            coincidencias++;
    }

    printf("\nQuantidade de vezes que V1 e V2 possuem o mesmo número na mesma posição: %d\n", coincidencias);

    return 0;
}