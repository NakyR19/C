// Conta quantas pessoas atingiram um critério específico de notas em Português, Matemática e Redação. Ele repete até o usuário quiser parar.

#include <stdio.h>
#include <ctype.h>

int calcularNotas(int acertosPort, int acertosMat, float notaRed)
{
    char opcao = 'S';
    int count = 0;
    do
    {
        printf("Informe suas notas na seguinte ordem: Portugues, Matematica e por fim Redacao. \n");
        scanf(" %d", &acertosPort);
        scanf(" %d", &acertosMat);
        scanf(" %f", &notaRed);

        if (acertosMat >= 0 && acertosMat <= 35 && acertosPort >= 0 && acertosPort <= 50 && notaRed >= 0 && notaRed <= 10)
        {
            int porcPort = (acertosPort * 100) / 50;
            int porcMat = (acertosMat * 100) / 35;
            if (porcPort >= 80 && porcMat >= 60 && notaRed >= 7)
            {
                count++;
            }
        }
        else
        {
            printf("Numero informado incorreto");
        }

        printf("Deseja Continuar? S - Sim, N - Nao.\n");
        scanf(" %c", &opcao);
        opcao = toupper(opcao);
    } while (opcao == 'S');

    return count;
}

int main()
{
    int acertosMat = 0, acertosPort = 0;
    float notaRed = 0;

    int count = calcularNotas(acertosPort, acertosMat, notaRed);
    printf("%d", count);
}