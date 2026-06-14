#include <stdio.h>
#include <string.h>

typedef struct {
        char Nome[100];
        int RA;
        float nota;
        float frequencia;
} Aluno;

void ImprimeMenu();
int BuscaAluno(Aluno turma[], int alunos, int RA);
void InsereAluno(Aluno turma[], int alunos);
void ImprimeTurma(Aluno turma[], int alunos);
void RemoveAluno(Aluno turma[], int *alunos, int RA);

void ImprimeMenu(){
    printf("\nMenu:");
    printf("\n1 - Insere Aluno");
    printf("\n2 - Imprime Turma");
    printf("\n3 - Busca Aluno por RA");
    printf("\n4 - Remove Aluno");
    printf("\n5 - Finalizar");
    printf("\nOpção: ");
}

void InsereAluno(Aluno turma[], int alunos){
    getchar();

    printf("Digite o nome do aluno: ");
    fgets(turma[alunos].Nome, sizeof(turma[alunos].Nome), stdin);
    turma[alunos].Nome[strlen(turma[alunos].Nome)-1] = '\0';
    printf("Digite o RA do aluno: ");
    scanf("%d", &turma[alunos].RA);
    while(BuscaAluno(turma, alunos, turma[alunos].RA)){
        printf("\n**Já existe um aluno com essa matrícula, digite novamente!**\n");
        scanf("%d", &turma[alunos].RA);
    }
    printf("Digite a nota do aluno: ");
    scanf("%f", &turma[alunos].nota);
    printf("Digite a frequencia do aluno: ");
    scanf("%f", &turma[alunos].frequencia);
}

void ImprimeTurma(Aluno turma[], int alunos){
    printf("Turma:\n");
    for(int i = 0; i < alunos; i++){
        printf("Nome: %s\n", turma[i].Nome);
        printf("RA: %d\n", turma[i].RA);
        printf("Nota: %f\n", turma[i].nota);
        printf("Frequencia: %f\n", turma[i].frequencia);
    }
    printf("\n");
}

int BuscaAluno(Aluno turma[], int alunos, int RA){
    for(int i = 0; i < alunos; i++){
        if(turma[i].RA == RA){
            printf("Aluno Encontrado!");
            printf("Nome: %s\n", turma[i].Nome);
            printf("RA: %d\n", turma[i].RA);
            printf("Nota: %f\n", turma[i].nota);
            printf("Frequencia: %f\n", turma[i].frequencia);
            return 1;
        }
    }  
    printf("Aluno não encontrado!");
    return 0;
}

void RemoveAluno(Aluno turma[], int *alunos, int RA) {
    int indiceEncontrado = -1;

    for (int i = 0; i < *alunos; i++) {
        if (turma[i].RA == RA) {
            indiceEncontrado = i;
            break;
        }
    }

    if (indiceEncontrado == -1) {
        printf("\nAluno não encontrado!\n");
        return;
    }

    for (int i = indiceEncontrado; i < (*alunos) - 1; i++) 
        turma[i] = turma[i + 1];

    (*alunos)--;
    printf("\nAluno removido com sucesso!\n");
}

int main(){
    int opcao, RA, alunos = 0;
    Aluno turma[50];

    while(1){
        ImprimeMenu();
        scanf("%d", &opcao);

        if(opcao == 5) break;

        switch(opcao){
            case 1:
                InsereAluno(turma, alunos);
                alunos++;
                break;
            case 2:
                ImprimeTurma(turma, alunos);
                break;
            case 3:
                printf("Digite o RA do aluno: ");
                scanf("%d", &RA);
                BuscaAluno(turma, alunos, RA);
                break;
            case 4:
                printf("Digite o RA do aluno: ");
                scanf("%d", &RA);
                RemoveAluno(turma, &alunos, RA);
                break;
            default:
                break;
        }
    }

}