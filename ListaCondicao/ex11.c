#include <stdio.h>

float percentualVotosBrancos, percentualVotosNulos, percentualVotosValidos;
float eleitores, votosBrancos, votosNulos, votosValidos;
int main()
{
    printf("Digite o numero total de eleitores: ");
    scanf("%f", &eleitores);
    printf("Digite o numero de votos brancos: ");
    scanf("%f", &votosBrancos);
    printf("Digite o numero de votos nulos: ");
    scanf("%f", &votosNulos);
    printf("Digite o numero de votos validos: ");
    scanf("%f", &votosValidos);
    
    percentualVotosBrancos = (votosBrancos/eleitores)*100;
    percentualVotosNulos = (votosNulos/eleitores)*100;
    percentualVotosValidos = (votosValidos/eleitores)*100;
    
    printf("Percentuais em relacao aos eleitores:\n");
    printf("Votos Brancos: %.2f %\n", percentualVotosBrancos);
    printf("Votos Nulos: %.2f %\n", percentualVotosNulos);
    printf("Votos Validos: %.2f %\n", percentualVotosValidos);
    
}