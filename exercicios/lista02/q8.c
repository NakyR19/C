#include <stdio.h>

// Funcao que calcula faz o cambio para dolar e euro
void cambio(float valor, float taxaDolar, float taxaEuro, float *cambioDolar, float *cambioEuro){
    *cambioDolar = valor*taxaDolar;
    *cambioEuro = valor*taxaEuro;
}

int main(){
    float valor, cotDolar, cotEuro, cambioDolar, cambioEuro; 
    printf("Digite o valor que voce quer converter\n");
    scanf("%f", &valor);
    printf("Digite a cotacao do dolar\n");
    scanf("%f", &cotDolar);
    printf("Digite a cotacao do euro\n");
    scanf("%f", &cotEuro);
    cambio(valor, cotDolar, cotEuro, &cambioDolar, &cambioEuro);
    printf("O valor em dolares eh de: %.2f, e em euros eh: %.2f", cambioDolar, cambioEuro);
}