#include <stdio.h>
#include <math.h>

// Função que calcula montante e rendimento.
void faturamento(float valorInicial, float valorMensal, int tempo, float *montante, float *rendimento)
{
    *montante = valorInicial + valorMensal * tempo;
    *rendimento = *montante - valorInicial;
}
int main()
{
    int tempo;
    float investInicial, investMensal, rendimento, montante;
    printf("Digite o valor inicial investido:\n");
    scanf("%f", &investInicial);
    printf("Digite o valor investido mensalmente\n");
    scanf("%f", &investMensal);
    printf("Digite o tempo de investimento (em meses)\n");
    scanf("%d", &tempo);
    faturamento(investInicial, investMensal, tempo, &montante, &rendimento);
    printf("Seu montante foi de: %.2f, e seu rendimento de %.2f", montante, rendimento);
}