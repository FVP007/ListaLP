#include <stdio.h>

float nota1, nota2, notaOptativa, mediaFinal;

int main() {
    printf("Digite a nota da sua primeira prova:");
    scanf("%f", &nota1);
    printf("Digite a nota da sua segunda prova:");
    scanf("%f", &nota2);
    printf("Digite a nota da sua prova optativa:");
    scanf("%f", &notaOptativa);
    
    if (notaOptativa != -1) {
        if (nota1 < nota2 && notaOptativa > nota1) 
            nota1 = notaOptativa;
        else if (nota2 < nota1 && notaOptativa > nota2)
            nota2 = notaOptativa;
    }

    mediaFinal = (nota1 + nota2) / 2;
    if(mediaFinal >= 6)
        printf("Aprovado!");
    else if (mediaFinal < 3)
        printf("Reprovado!");
    else
        printf("Exame!");
} 