#include <stdio.h>
#include <math.h>

#define PI 3.1415

// Funcao que calcula o quadrado de um numero qualquer
float elevarQuadrado(float n){
    float resultado;
    resultado = n * n;
    return resultado;
}

// Função que calcula a area do circulo
float areaCirculo(float raio){
    float raioQuadrado = elevarQuadrado(raio);
    float area = PI * raioQuadrado;
    return area;
}

int main(){
    float raio;
    printf("Digite o raio do circulo em cm para calcular a area:\n");
    scanf("%f", &raio);
    printf("A area do circulo eh: %.2fcm^2", areaCirculo(raio));
    return 0;
}
