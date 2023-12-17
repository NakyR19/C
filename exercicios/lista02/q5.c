#include <stdio.h>
#include <math.h>

#define PI 3.1415

double elevarQuadrado(double n){
    double resultado;
    resultado = n * n;
    return resultado;
}

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
