#include <stdio.h>
#include <math.h>

// Função que calcula montante e rendimento.
void faturamento(double valorInicial, double valorMensal, int tempo, double *montante, double *rendimento)
{
    *montante = valorInicial + valorMensal * tempo;
    *rendimento = *montante - valorInicial;
}
int main()
{
    int tempo;
    double investInicial, investMensal, rendimento, montante;
    printf("Digite o valor inicial investido:\n");
    scanf("%lf", &investInicial);
    printf("Digite o valor investido mensalmente\n");
    scanf("%lf", &investMensal);
    printf("Digite o tempo de investimento (em meses)\n");
    scanf("%d", &tempo);
    faturamento(investInicial, investMensal, tempo, &montante, &rendimento);
    printf("Seu montante foi de: %.2lf, e seu rendimento de %.2lf", montante, rendimento);
}