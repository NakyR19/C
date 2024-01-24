#include <stdio.h>

// Função que calcula em quanto tempo você chegara no seu peso ideal
int main()
{
    int dia = 0;
    float pAtual, pIdeal, pMensal;
    printf("Digite seu peso atual:\n");
    scanf("%f", &pAtual);
    printf("Digite seu peso ideal:\n");
    scanf("%f", &pIdeal);
    printf("Digite sua perda mensal:\n");
    scanf("%f", &pMensal);
    float aproxPerdaDiaria = pMensal / 30;
    for (; pAtual > pIdeal; dia++)
    {
        pAtual = pAtual - aproxPerdaDiaria;
    }
    printf("Voce deve alcancar o peso ideal em %d dias.", dia);
    return 0;
}