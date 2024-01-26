// Calcuma a soma de uma vaquinha ate atingir a meta

#include <stdio.h>

int main()
{
    float Meta, Doacao, Soma = 0;
    printf("Meta da vaquinha: ");
    scanf("%f", &Meta);
    do
    {
        printf("Valor da doacao: ");
        scanf("%f", &Doacao);
        Soma = Soma + Doacao;
        printf("Parcial dos donativos: %.2f\n", Soma);
    } while (Soma < Meta);
    printf("A meta da vaquinha foi alcancada!\n");
    if(Meta < Soma){
        printf("A soma ultrapassou a meta em: %.2f", Soma-Meta);
    }
    return 0;
}