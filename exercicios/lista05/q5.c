#include <stdio.h>
#include <ctype.h>

int calcularFatorial(int num)
{
    for (int i = num - 1; i > 0; i--)
    {
        num *= i;
    }
    return num;
}
int main()
{
    int n = 1;
    char continuar = 'S';

    if (n > 0)
    {
        while (continuar == 'S')
        {
            printf("Digite o numero ao qual voce quer calcular o fatorial!\n");
            scanf("%d", &n);
            printf("O Fatorial de %d eh %d\n", n, calcularFatorial(n));
            printf("Deseja continuar? S - Sim, N - Nao\n");
            scanf(" %c", &continuar);
            continuar = toupper(continuar);
        }
    }
}