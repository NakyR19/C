#include <stdio.h>

// Funcao que calcula faz o cambio para dolar e euro
void cambio(double valor, double taxaDolar, double taxaEuro, double *cambioDolar, double *cambioEuro){
    *cambioDolar = valor*taxaDolar;
    *cambioEuro = valor*taxaEuro;
}

int main(){
    double valor, cotDolar, cotEuro, cambioDolar, cambioEuro; 
    printf("Digite o valor que voce quer converter\n");
    scanf("%lf", &valor);
    printf("Digite a cotacao do dolar\n");
    scanf("%lf", &cotDolar);
    printf("Digite a cotacao do euro\n");
    scanf("%lf", &cotEuro);
    cambio(valor, cotDolar, cotEuro, &cambioDolar, &cambioEuro);
    printf("O valor em dolares eh de: %.2lf, e em euros eh: %.2lf", cambioDolar, cambioEuro);
}