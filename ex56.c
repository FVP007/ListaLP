#include <stdio.h>

float n1, n2, resultado;
int opcao;

int main() {
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite outro numero: ");
    scanf("%f", &n2);
    printf("Escolha uma das seguntes opcoes: \n");
    printf("1 - Adicao\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    printf("Opcao escolhida: ");
    scanf("%d", &opcao);
    if(opcao == 1)
        resultado = n1 + n2;
    if(opcao == 2)
        resultado = n1 - n2;
    if(opcao == 3)
        resultado = n1 * n2;
    if(opcao == 4){
        if(n2 == 0){
            printf("Divisao por zero nao permitida!");
            return 0;
        }else
            resultado = n1 / n2;
    }
    printf("Resultado: %f", resultado);
}