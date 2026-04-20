#include <stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    float notas[20], somaTurma = 0, mediaTurma;
    int alunosAcimaMedia = 0, i;

    for (i = 0; i < 20; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        somaTurma+=notas[i];
    }

    mediaTurma = somaTurma / 20;

    for (i = 0; i < 20; i++){
        if(notas[i] > mediaTurma)
            alunosAcimaMedia++;
    }

    printf("Média da Turma: %.2f", mediaTurma);
    printf("\nAlunos Acima da Média da Turma: %d", alunosAcimaMedia);

    return 0; 
}