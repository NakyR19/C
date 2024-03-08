// // Implementar programa para ler total de vendas, de um
// determinado mês, dos 300 vendedores da “Matura”,
// calcular a média de vendas do grupo de vendedores, e
// exibir quantos vendedores apresentaram desempenho
// (vendas) abaixo da média.

#include <stdio.h>

void exibirVetorFloat(float V[], int QuantItens)
{
    printf("Os valores considerados sao:\n");
    for (int i = 0; i < QuantItens; i++)
        printf("%.2f ", V[i]);
    printf("\n");
}

float calcularMedia(float media[], int tamanhoVetor)
{
    float soma = 0;
    for (int i = 0; i < tamanhoVetor; i++)
    {
        soma = soma + media[i];
    }
    return (float)soma / tamanhoVetor;
}

int abaixoMedia(float V[], int tamanhoVetor, float media)
{
    int value = 0;
    for (int i = 0; i < tamanhoVetor; i++)
    {
        if (V[i] < media)
        {
            value++;
        }
    }
    return value;
}

int main()
{
    float vendas[3], mediaVendas;
    int underMeta = 0;
    int length = sizeof(vendas) / sizeof(vendas[0]);

    printf("Digite %d valores de venda:\n", length);
    for (int i = 0; i < length; i++)
    {
        scanf("%f", &vendas[i]);
    }
    mediaVendas = calcularMedia(vendas, length);
    underMeta = abaixoMedia(vendas, length, mediaVendas);

    exibirVetorFloat(vendas, length);
    printf("A media de vendas foi de: %.2fR$\n", mediaVendas);
    printf("Houve o total de %d vendedores abaixo da media.\n", underMeta);
}