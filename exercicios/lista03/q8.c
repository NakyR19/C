#include <stdio.h>
#include <ctype.h>

int unidade(int num)
{
    return num % 10;
}

int dezena(int num)
{
    return (num % 100) / 10;
}

int centena(int num)
{
    return (num % 1000) / 100;
}

int milhar(int num)
{
    return (num % 10000) / 1000;
}

int dezenaDeMilhar(int num)
{
    return num / 10000;
}

int main()
{

    char expression;
    int num;

    printf("Digite a opcao desejada\n U - Unidade\n D - dezena\n C - centena \n M - milhar \n Z - dezena de milhar\n");
    scanf("%c", &expression);
    printf("Digite um numero entre 0 e 99999\n");
    scanf("%d", &num);
    expression = toupper(expression);

    switch (expression)
    {
    case 'U':
        printf("Unidade eh igual a: %d", unidade(num));
        break;

    case 'D':
        printf("Dezena eh igual a: %d", dezena(num));
        break;

    case 'C':
        printf("Centena eh igual a: %d", centena(num));
        break;

    case 'M':
        printf("Dezena eh igual a: %d", milhar(num));
        break;

    case 'Z':
        printf("Dezena eh igual a: %d", dezenaDeMilhar(num));
        break;
    default:
        printf("Escolha uma opcao valida");
        break;
    }
}