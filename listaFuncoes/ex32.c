#include <stdio.h>
#include <windows.h>

float converterFahrenheitCelsius(float);

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    for(int i = 50; i <= 150; i++)
        printf("%d° Fahrenheit em celsius: %f°C \n", i, converterFahrenheitCelsius((float)i));

}

float converterFahrenheitCelsius(float F){
    return 5 * (F - 32) / 9;
}