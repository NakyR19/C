#include <stdio.h>
#include <math.h>

int main(){

    int operador;
    double lado;
    printf("Digite o numero para o que deseja calcular\n 1 - Area\n 2 - perimetro\n 3- diagonal\n");
    scanf("%d", &operador);
    printf("Diga o valor do lado do quadrado!");
    scanf("%lf", &lado);

    switch (operador)
    {
    case 1: 
        double a = lado * lado;
        printf("O Valor da area eh %.2lf", a);
        break;
    case 2: 
        double p = 4*lado;
        printf("O perimetro eh: %.2lf", p);
        break;
    case 3: 
        double d = lado*sqrt(2);
        printf("A diagonal do quadrado eh: %.2lf", d);
        break;
    default:
        printf("Selecione uma opcao valida");
        break;
    }
}