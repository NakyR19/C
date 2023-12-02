#include <stdio.h>

// Para converter de grau Celsius para Fahrenheit, basta multiplicar a temperatura em graus Celsius por 1,8 e somar 32.
int main(){
    int celsius;
    printf("Digite o valor em celsius para a conversao:\n");
    scanf("%d", &celsius);
    printf("A conversao da: %.2lf graus Fahrenheit", celsius*1.8+32);
}