#include <stdio.h>

void algarismoRomano(int numero, char romano[]);

int main(){
    char resultado[1000] = ""; 
    
    algarismoRomano(1944, resultado);
    printf("%s\n", resultado);   
    
    return 0;
}

void algarismoRomano(int numero, char romano[]){
    int digitos = 0;
    
    while(numero > 0){
        if((numero - 1000) >= 0){
            romano[digitos] = 'M';
            numero -= 1000;
            digitos++; 
        }else if ((numero - 900) >= 0){
            romano[digitos] = 'C';
            romano[digitos+1] = 'M';
            numero -= 900;
            digitos += 2;
        }else if ((numero - 500) >= 0){
            romano[digitos] = 'D';
            numero -= 500;
            digitos++;
        }else if ((numero - 400) >= 0){
            romano[digitos] = 'C';
            romano[digitos+1] = 'D';
            numero -= 400;
            digitos += 2;
        }else if((numero - 100) >= 0){
            romano[digitos] = 'C';
            numero -= 100;
            digitos++;
        }else if((numero - 90) >= 0){
            romano[digitos] = 'X';
            romano[digitos+1] = 'C';
            numero -= 90;
            digitos += 2;
        }else if((numero - 50) >= 0){
            romano[digitos] = 'L';
            numero -= 50;
            digitos++;
        }else if((numero - 40) >= 0){
            romano[digitos] = 'X';
            romano[digitos+1] = 'L';
            numero -= 40;
            digitos += 2;
        }else if((numero - 10) >= 0){
            romano[digitos] = 'X';
            numero -= 10;
            digitos++;
        }else if((numero - 9) >= 0){
            romano[digitos] = 'I';
            romano[digitos+1] = 'X';
            numero -= 9;
            digitos += 2;
        }else if((numero - 5) >= 0){
            romano[digitos] = 'V';
            numero -= 5;
            digitos++;
        }else if((numero - 4) >= 0){
            romano[digitos] = 'I';
            romano[digitos+1] = 'V';
            numero -= 4;
            digitos += 2;
        }else{
            romano[digitos] = 'I';
            numero -= 1;
            digitos++;
        }
    }
    romano[digitos] = '\0'; 
}