// A função recebe o limite do cartão e solicita o valor da compra, caso o valor da compra for menor ou igual ao limite, a compra é aprovada e o limite restante é exibido; caso contrário, a compra é rejeitada e uma msg de erro é exibida

#include <stdio.h>

void ValidaCompra(int i, float *L)
{
    float D;
    printf("Debito: ");
    scanf("%f", &D);
    if (*L - D >= 0)
    {
        printf("Compra possivel!\n");
        printf("Essa eh a sua %d compra. \n", i + 1);
        *L = *L - D;
    }
    else
        printf("Compra \"estourarah\" o cartao! \n");
    printf("Limite restante: %.2f \n\n", *L);
}
int main()
{
    int count = 0;
    float Limite; 
    printf("Limite do cartao: ");
    scanf("%f", &Limite);
    while (Limite > 0) {
        ValidaCompra(count, &Limite);
        count++;
    }
    printf("Seu limite de compras acabou!");
    return 0;
}