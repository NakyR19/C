#include <stdio.h>

int main()
{
    int a, b, n;
    printf("Digite o numero que vc quer dividir:\n");
    scanf("%d", &n);
    printf("Digite um dos numeros que voce quer saber se eh divisor:\n");
    scanf("%d", &a);
    printf("Digite o outro divisor:\n");
    scanf("%d", &b);

    // Se o resto da divisao de n por a ou por b for = 0 e a for diferente por B, ele atende a condição da questão!
    if (n % a == 0 && n % b == 0){
        return printf("Nao atende a condicao");
    } else if (n % a == 0 || n % b == 0 )
    {
        return printf("Atende a condicao!");
    }
    else
    {
        return printf("Nao atende a condicao!");
    }
    
    return 0;
}