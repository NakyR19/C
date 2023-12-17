// Escrever um programa em C para ler uma temperatura em Celsius C e
// a retornar em Fahrenheit e em Kelvin. Fórmulas de conversão para
// Fahrenheit: F = (C * 9/5) + 32; para Kelvin: K = C + 273,5.
// Criar uma função para cada conversão.

#include <stdio.h>

double conversorKelvin (int temperatura){
    double kelvin = temperatura + 273.15;
    return kelvin;
}

double conversonFahrenheit (int temperatura){
    double fahrenheit = (temperatura * 9/5)+32;
    return fahrenheit;
}
int main (){
    int temperatura;
    printf("Digite a temperatura em graus Celsius para a conversao:\n");
    scanf("%d", &temperatura);
    printf("Essa temperatura em Kelvin eh: %.2f, e em Fahrenheit eh: %.2f", conversorKelvin(temperatura), conversonFahrenheit(temperatura));
    return 0;
}