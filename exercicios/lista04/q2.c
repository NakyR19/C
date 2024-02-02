// Calcuma a soma de uma vaquinha ate atingir a meta

#include <stdio.h>

//  A função recebe a meta de arrecadação e, em seguida, solicita o valor da doação. *Se* a soma das doações for menor que a meta, o programa continua solicitando doações. Quando a meta é atingida, o programa exibe uma mensagem de sucesso e, se a soma ultrapassar a meta, exibe a diferença entre a meta e a soma

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