// Conta quantas pessoas atingiram um critério específico de notas em Português, Matemática e Redação. Ele repete até o usuário inserir -1 como nota de portugues.


#include <stdio.h>
#include <ctype.h>

int calcularNotas(int acertosPort, int acertosMat, float notaRed)
{
    int count = 0;
    while (acertosPort >= 0)
    {
        if (acertosMat >= 0 && acertosMat <= 35 && acertosPort >= 0 && acertosPort <= 50 && notaRed >= 0 && notaRed <= 10)
        {
            int porcPort = (acertosPort * 100) / 50;
            int porcMat = (acertosMat * 100) / 35;
            if (porcPort >= 80 && porcMat >= 60 && notaRed >= 7)
            {
                count++;
            }
        }
        printf ("Informe suas notas na seguinte ordem: Portugues, Matematica e por fim Redacao. \n");
        scanf(" %d", &acertosPort);
        scanf(" %d", &acertosMat);
        scanf(" %f", &notaRed);
    }

    return count;
}

int main()
{
    int acertosMat = 0, acertosPort = 0;
    float notaRed = 0;

    printf("Informe suas notas na seguinte ordem: Portugues, Matematica e por fim Redacao. \n");
    scanf(" %d", &acertosPort);
    scanf(" %d", &acertosMat);
    scanf(" %f", &notaRed);
    int count = calcularNotas(acertosPort, acertosMat, notaRed);
    printf("%d", count);
}