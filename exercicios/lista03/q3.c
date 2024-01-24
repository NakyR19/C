#include <stdio.h>

int main()
{
    float notaUm, notaDois, notaTres, media;

    printf("Digite sua primeira nota:\n");
    scanf("%f", &notaUm);
    printf("Digite sua segunda nota:\n");
    scanf("%f", &notaDois);
    printf("Digite sua terceira nota:\n");
    scanf("%f", &notaTres);

    // Tratamento de erro para caso notas não estejam no formato adequado, e depois a logica
    if (notaUm > 0 && notaDois > 0 && notaTres > 0 && notaUm <= 10 && notaDois <= 10 && notaTres <= 10)
    {
        media = (notaUm + (notaDois * 2) + (notaTres * 3)) / 6;
        if (media >= 7)
        {
            return printf("Aprovado com media %.2f", media);
        }
        else if (media >= 5)
        {
            return printf("Em recuperacao com media %.2f", media);
        }
        else
        {
            return printf("Reprovado com media %.2f", media);
        }
    }
    else
        return printf("Informe as notas corretamente");
    return 0;
}