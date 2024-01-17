#include <stdio.h>

// Funcao que converte celsius para kelvin
float conversorKelvin (int temperatura){
    float kelvin = temperatura + 273.15;
    return kelvin;
}

// Funcao que converte celsius para Fahrenheit
float conversonFahrenheit (int temperatura){
    float fahrenheit = (temperatura * 9/5)+32;
    return fahrenheit;
}
int main (){
    int temperatura;
    printf("Digite a temperatura em graus Celsius para a conversao:\n");
    scanf("%d", &temperatura);
    printf("Essa temperatura em Kelvin eh: %.2f, e em Fahrenheit eh: %.2f", conversorKelvin(temperatura), conversonFahrenheit(temperatura));
    return 0;
}