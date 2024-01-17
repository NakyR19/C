#include <stdio.h>
#include <ctype.h>

int main()
{

    char expression;
    int num;

    printf("Digite a opcao desejada\n U - Unidade\n D - dezena\n C - centena \n M - milhar \n Z - dezena de milhar\n");
    scanf("%c", &expression);
    print("Digite um numero entre 0 e 99999");
    scanf("%d", &num);
    expression = toupper(expression);

    switch (expression)
    {
    case 'U':
        printf("Unidade eh igual a: %d", num % 10);
        break;

    case 'D':
        printf("Dezena eh igual a: %d", num % 10);
        break;

    case 'C':
        break;

    case 'M':
        break;

    case 'Z':
        break;
    default:
        printf("Escolha uma opcao valida");
        break;
    }
}