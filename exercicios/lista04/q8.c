// Feito para imprimir números de 1 a N em linhas separadas, onde cada linha contém números de 1 até o número da linha.

#include <stdio.h>

int main(){
    int i = 1, count, n;

    printf("Diga o valor de N\n");
    scanf("%d", &n);

    while (i <= n)
    {
        count = 1;
        while (count <= i)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
        i++;
    }

    return 0;
}