// Serve para determinar o ph de uma substancia a partir do seu valor

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