// Validador de compras caso o gasto esteja dentro do limite disponivel
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