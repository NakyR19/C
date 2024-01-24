#include <stdio.h>

// função que converte real para dolar 
int main()
{
    float valor, cotacao;
    printf("Digite o valor que voce quer converter de real para dolar:\n");
    scanf("%f", &valor);
    printf("Digite a cotacao atual:\n");
    scanf("%f", &cotacao);
    printf("%.2f$ eh o cambio de real para dolar!", valor / cotacao);
    return 0;
}