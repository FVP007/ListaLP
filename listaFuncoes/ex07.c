#include <stdio.h>
#include <string.h>

int ehPalindromo(char[]);
void limpaString(char[]);

int main(){
    printf("%d", ehPalindromo("Felipe"));
    printf("\n%d", ehPalindromo("Socorram-me, subi no ônibus em Marrocos"));
}

void limpaString(char string[]){
    int j = 0;
    for(int i = 0; i < strlen(string); i++){
        if(string[i] >= 'A' && string[i] <= 'Z')
            string[j++] = string[i] + 32;
        else if(string[i] >= 'a' && string[i] <= 'z')
            string[j++] = string[i];
        else
            continue;
    }
    string[j] = '\0';
}
int ehPalindromo(char string[]){
    limpaString(string);
    for(int x = 0; x < strlen(string); x++)
        if(string[x] != string[strlen(string) - 1 - x]) return 0;

    return 1;
}