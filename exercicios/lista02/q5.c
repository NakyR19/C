#include <stdio.h>
#include <math.h>

#define PI 3.1415

// Funcao que calcula o quadrado de um numero qualquer
double elevarQuadrado(double n){
    double resultado;
    resultado = n * n;
    return resultado;
}

// Função que calcula a area do circulo
double areaCirculo(double raio){
    double raioQuadrado = elevarQuadrado(raio);
    double area = PI * raioQuadrado;
    return area;
}

int main(){
    double raio;
    printf("Digite o raio do circulo em cm para calcular a area:\n");
    scanf("%lf", &raio);
    printf("A area do circulo eh: %.2fcm^2", areaCirculo(raio));
    return 0;
}
