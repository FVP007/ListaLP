#include <stdio.h>
#include <math.h>

int InverteInteiro(int n) {
    if (n < 10) return n;
    int digitos = (int)log10(n / 10) + 1;

    int ultimo_digito = n % 10;
    int potencia = (int)(pow(10, digitos) + 0.5);

    return (ultimo_digito * potencia) + InverteInteiro(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Numero inteiro invertido: %d\n", InverteInteiro(n));

}