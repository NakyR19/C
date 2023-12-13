#include <stdio.h>

// Função que calcula o intervalo para tomar vacinas
int main()
{
    int ano, intervalo;
    printf("Digite o ano em que voce tomou a vacina:\n");
    scanf("%d", &ano);
    printf("Digite o intervalo entre as vacinas:\n");
    scanf("%d", &intervalo);
    printf("Voce deve tomar as proximas vacinas nos anos de: %d, %d e %d", ano + intervalo, ano + intervalo * 2, ano + intervalo * 3);
    return 0;
}