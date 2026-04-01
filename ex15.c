#include <stdio.h>

float temperaturaCelsius, temperaturaFahrenheit;
int main()
{
    printf("Digite uma temperatura em graus fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);
    
    temperaturaCelsius = (temperaturaFahrenheit - 32) * 5/9;
    
    printf("Temperatura em Celsius: %f°C", temperaturaCelsius);
    
}