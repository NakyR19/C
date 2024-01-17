#include <stdio.h>
#include <math.h>

// Função que calcula o IMC passando peso e altura
float imc(int peso, float altura){
    float imc = peso/(pow(altura, 2));
    return imc;
}
int main(){
    int peso;
    float altura;
    printf("Digite seu peso em kg:\n");
    scanf("%d", &peso);
    printf("Digite sua altura em metros:\n");
    scanf("%f", &altura);
    printf("Seu imc eh: %.2f", imc(peso, altura));
    return 0;
}