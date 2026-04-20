#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int VET[50], i, j;
    int jaImpresso[50] = {0};

    printf("Digite 50 números:\n");
    for(i = 0; i < 50; i++) scanf("%d", &VET[i]);

    printf("\nAnálise de repetidos:\n");
    for(i = 0; i < 50; i++) {
        int repetido = 0;
        if(jaImpresso[i]) continue;

        for(j = i + 1; j < 50; j++) {
            if(VET[i] == VET[j]) {
                if(!repetido) {
                    printf("Número %d repetido nas posições: %d ", VET[i], i);
                    repetido = 1;
                }
                printf("%d ", j);
                jaImpresso[j] = 1;
            }
        }
        if(repetido) printf("\n");
    }

    return 0;
}