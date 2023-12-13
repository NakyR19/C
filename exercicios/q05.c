#include <stdio.h>

// Função que calcula o tempo de um percuso
int main()
{
    double distancia, velocidade;
    printf("Digite a distancia (em metros) que voce pretende correr:\n");
    scanf("%lf", &distancia);
    printf("Digite a sua velocidade media:\n");
    scanf("%lf", &velocidade);
    printf("%.2lf segundos eh o tempo que voce levara para completar o percuso", distancia / velocidade);
    return 0;
}