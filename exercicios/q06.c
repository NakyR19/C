#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d eh o resultado de: %d x %d\n", num * i, num, i);
    }
}