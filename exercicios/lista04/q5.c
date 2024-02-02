// O codigo utiliza a função determinarPh para verificar se o número inserido pelo usuário está entre 0 e 14, e imprime se a solução é ácida, neutra ou básica, utilizando o while para permitir que o usuário insira vários números.

#include <stdio.h>

void determinarPh(float num)
{
    while (num >= 0)
    {
        if (num >= 0 && num <= 14)
        {
            if (num < 7)
                printf("ACIDO\n");
            else if (num == 7)
                printf("NEUTRO\n");
            else
                printf("BASE\n");

            printf("Digite um novo numero para determinar o tipo, caso queira sair digite -1\n");
            scanf(" %f", &num);
        }
    }
}
int main()
{
    float num = 0;
    printf("Digite um novo numero para determinar o tipo\n");
    scanf("%f", &num);
    if (num >= 0 && num <= 14)
        determinarPh(num);
    else
        printf("Numero informado eh invalido");
}