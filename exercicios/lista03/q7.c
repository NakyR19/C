#include <stdio.h>
#include <math.h>

int main(){

    int operador;
    float lado;
    printf("Digite o numero para o que deseja calcular\n 1 - Area\n 2 - perimetro\n 3- diagonal\n");
    scanf("%d", &operador);
    printf("Diga o valor do lado do quadrado!");
    scanf("%f", &lado);

    switch (operador)
    {
    case 1: 
        float a = lado * lado;
        printf("O Valor da area eh %.2f", a);
        break;
    case 2: 
        float p = 4*lado;
        printf("O perimetro eh: %.2f", p);
        break;
    case 3: 
        float d = lado*sqrt(2);
        printf("A diagonal do quadrado eh: %.2f", d);
        break;
    default:
        printf("Selecione uma opcao valida");
        break;
    }
}