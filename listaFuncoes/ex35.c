#include <stdio.h>

int strleng(char string[]){
    int length = 0;
    while(string[length] != '\0' && string[length] != '\n')
        length++;

    return length;
}

int strcomp(char string1[], char string2[]){
    if(strleng(string1) != strleng(string2)) return 0;

    for(int i = 0; i < strleng(string1); i++){
        if(string1[i] != string2[i]) return 0;
    }

    return 1;
}

void strconpy(char string1[], char string2[], int n){
    for(int i = 0; i < n; i++)
        string2[i] = string1[i];

    string2[n] = '\0';
}

void strcate(char string1[], char string2[]){
    int j = 0;
    for(int i = strleng(string1); i < (strleng(string1) + strleng(string2) - 1); i++){
        string1[i] = string2[j];
        j++;
    }
    string1[strleng(string1) + strleng(string2) - 1] = '\0';
}

void strnd(char string1[], char string2[]){
    int len1 = strleng(string1);
    int len2 = strleng(string2);

    for(int i = 0; i <= len1 - len2; i++){
        int encontrado = 1;

        for(int j = 0; j < len2; j++){
            if(string1[i + j] != string2[j]){
                encontrado = 0;
                break;
            }
        }

        if(encontrado)
            printf("%d ", i);
    }
}

int main(){
    char string[20] = "\0";
    printf("strlen('felipe'): %d", strleng("felipe"));
    printf("\nstrcmp('felipe', 'felipe'): %d", strcomp("felipe", "felipe"));
    strconpy("joaozinho", string, 4);
    printf("\nstrcnpy('joaozinho', '', 4): %s", string);
    char dest[20] = "felipe";
    strcate(dest, " silva");
    printf("\nstrcat('felipe', ' silva'): %s", dest);
    printf("\nstrnd('ababa', 'aba'): ");
    strnd("ababa", "aba");
}