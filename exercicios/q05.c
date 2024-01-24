#include <stdio.h>

// Função que calcula o tempo de um percuso
int main()
{
    float distancia, velocidade;
    printf("Digite a distancia (em metros) que voce pretende correr:\n");
    scanf("%f", &distancia);
    printf("Digite a sua velocidade media:\n");
    scanf("%f", &velocidade);
    printf("%.2f segundos eh o tempo que voce levara para completar o percuso", distancia / velocidade);
    return 0;
}