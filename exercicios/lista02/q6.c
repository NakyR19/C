#include <stdio.h>
#include <math.h>

// Função que calcula o IMC passando peso e altura
double imc(int peso, double altura){
    double imc = peso/(pow(altura, 2));
    return imc;
}
int main(){
    int peso;
    double altura;
    printf("Digite seu peso em kg:\n");
    scanf("%d", &peso);
    printf("Digite sua altura em metros:\n");
    scanf("%lf", &altura);
    printf("Seu imc eh: %.2lf", imc(peso, altura));
    return 0;
}