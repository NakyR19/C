#include <stdio.h>

// Função que calcula o valor da parcela a partir do juros mensal

void calcularParcelas(float vCompra){
    if (vCompra >= 300)
    {
        for (int mes = 1; mes <= 10; mes++)
        {   
            float juros = 0, total = 0, parcela = 0;
            juros = vCompra/10;
            total = vCompra + (juros*mes);
            parcela = total/mes;
            printf("Pagamento em %d mes(es) - Juros Mensal: R$%.2f - Total: R$%.2f - Parcela %d x R$%.2f\n", mes, juros, total, mes, parcela);
        }
    } else printf("Valor da compra eh insuficiente para parcelamento!");
}

int main()
{
    float valorCompra;
    printf("Digite o valor da compra:\n");
    scanf("%f", &valorCompra);

    calcularParcelas(valorCompra);
    return 0;
}