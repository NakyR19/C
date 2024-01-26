#include <math.h>
#include <stdio.h>

int numCaixas(int comprimidosMes, int comprimidosCaixa)
{
    if (comprimidosMes <= 0)
        return 0;
    if (comprimidosCaixa <= 0)
    {
        printf("Atenção comprimidos por caixa deve ser maior que 0\n");
        return -1;
    }
    int caixas = ceil((float)comprimidosMes / comprimidosCaixa);
    return caixas;
}

void main()
{
    int comprimidosMes, comprimidosCaixa;
    printf("Quantos comprimido tem-se que tomar no mes?\n");
    scanf("%d", &comprimidosMes);
    printf("Quantos comprimidos tem numa caixa?\n");
    scanf("%d", &comprimidosCaixa);
    int caixas = numCaixas(comprimidosMes, comprimidosCaixa);
    printf("Eh necessario comprar %d caixas", caixas);
}