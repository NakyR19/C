#include <stdio.h>

// função que converte real para dolar 
int main()
{
    double valor, cotacao;
    printf("Digite o valor que voce quer converter de real para dolar:\n");
    scanf("%lf", &valor);
    printf("Digite a cotacao atual:\n");
    scanf("%lf", &cotacao);
    printf("%.2lf$ eh o cambio de real para dolar!", valor / cotacao);
    return 0;
}