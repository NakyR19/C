#include <stdio.h>

// A funçao pega o resto da divisao do numero por 10, ou seja, o digito mais a direita do numero e soma com o numero que temos ate o momento vezes 10.
int inverso(int num)
{
    int inversao;
    while (num > 0)
    {
        inversao = 10 * inversao + num % 10;
        num /= 10;
    }
    return inversao;
}

int main()
{
    int num;
    printf("Digite um numero inteiro positivo entre 100 e 999");
    scanf("%d", &num);
    int invertido = inverso(num);
    if (num >= 100 && num <= 999)
    {
        if (num == invertido)
        {
            return printf("Numero gerado igual ao numero lido");
        }
        else if (num > invertido)
        {
            return printf("Numero gerado eh menor que o numero lido");
        }
        else
            return printf("Numero gerado eh maior que o numero lido");
    }
    else
        return printf("Numero informado eh invalido");
    return 0;
}