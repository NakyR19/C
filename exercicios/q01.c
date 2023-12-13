#include <stdio.h>

// Função que calcula o antecessor e o sucessor de um numero inteiro
int main()
{
    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    printf("Seu antecessor eh: %d, e seu sucessor eh: %d", numero - 1, numero + 1);
    return 0;
}