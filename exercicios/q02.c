#include <stdio.h>

// Função que calcula em quanto tempo você chegara no seu peso ideal
int main()
{
    int dia = 0;
    double pAtual, pIdeal, pMensal;
    printf("Digite seu peso atual:\n");
    scanf("%lf", &pAtual);
    printf("Digite seu peso ideal:\n");
    scanf("%lf", &pIdeal);
    printf("Digite sua perda mensal:\n");
    scanf("%lf", &pMensal);
    double aproxPerdaDiaria = pMensal / 30;
    for (; pAtual > pIdeal; dia++)
    {
        pAtual = pAtual - aproxPerdaDiaria;
    }
    printf("Voce deve alcancar o peso ideal em %d dias.", dia);
    return 0;
}