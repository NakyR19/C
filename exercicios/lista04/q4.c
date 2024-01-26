// Conta a quantidade de meses completos a partir de um valor dado em dias

#include <stdio.h>

int main()
{
    int dias, meses = 0, count = 0;
    printf("Forneca a quantidade de dias:\n");
    scanf("%d", &dias);

    while (dias > 0)
    {
        dias--;
        count++;
        if (count == 30)
        {
            meses++;
            count = 0;
        }
    }
    if (meses == 0)
        printf("A quantidade de dias fornecidos nao eh suficiente para formar um mes");
    else
        printf("Essa quantidade de dias consegue formar %d mes(es) completos", meses);
}