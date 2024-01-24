#include <stdio.h>

float calc_media(float a, float b, float c)
{
    return (a + b + c) / 3;
}

void situacao()
{
    float n1, n2, n3, media;
    printf("Nota um: ");
    scanf("%f", &n1);
    printf("Nota dois: ");
    scanf("%f", &n2);
    printf("Nota tres: ");
    scanf("%f", &n3);
    media = calc_media(n1, n2, n3);

    if(n1 >= 0 && n2 >= 0 && n3 >= 0 && n1 <= 10 && n2 <= 10 && n3 <=10) {
         if (media >= 7)
    {
        printf("O aluno foi aprovado com media %.2f\n", media);
    }
    else if (media >= 3)
    {
        printf("O aluno pode fazer a avaliacao repositiva, logo a media passa a ser 5 para obtencao da aprovacao. A media atual eh: %.2f\n", media);
    }
    else
        printf("Reprovado com media: %.2f\n", media);
    } else printf("Os valores de nota foram informados incorretamente, insira um valor de 0 a 10!");
}

int main()
{
    char verificar = 's';

    do
    {
        situacao();
        printf("Deseja ver a situacao de outro aluno? digite S caso queira! E qualquer outra letra para sair");
        scanf(" %c", &verificar);
    } while (verificar == 's' || verificar == 'S');
    printf("Programa finalizado!\n");
    return 0;
}