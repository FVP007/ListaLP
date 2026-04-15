#include <stdio.h>

int main()
{
    int i;
	float numeroAlunos, nota, soma = 0, media;
	printf("Digite o número de alunos: ");
	scanf("%d", &numeroAlunos);
	for(i = 1; i <= numeroAlunos; i++){
		printf("Digite a nota do aluno %d: ", i);
		scanf("%f", &nota);
		soma += nota;
	}
	media = soma / numeroAlunos;
	printf("Média: %.2f", media);
}