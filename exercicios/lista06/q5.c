// Na universidade “DuSabiTudu” os alunos são identificados por
// matrículas compostas por 10 dígitos. Os 4 primeiros dígitos
// correspondem ao ano em que o aluno entrou na instituição.
// Assim, todos os alunos cujas matriculas iniciam por 2012
// ingressaram no curso superior no ano de 2012. Os dígitos 5 e 6 da
// matrícula correspondem ao curso; sendo: 97 para agroecologia e
// 99 para gerontologia. Escrever programa para ler a matricula de
// 100 alunos inscritos no programa “CienciasAlémDasFronteiras” e
// identificar quantos alunos ingressaram num dado ano A no curso
// de gerontologia. Aplicar função definida pelo programador.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Copia uma string contida em outra delimitada pelo seu index
char *charPerIndex(char *palavra, int idxInicial, int idxFinal)
{
    char *palavraComprimida = malloc(20); // aloca espaço na memoria
    memcpy(palavraComprimida, &palavra[idxInicial], idxFinal - idxInicial + 1); // Copia os caracteres da string original entre dois index definidos
    palavraComprimida[idxFinal - idxInicial + 1] = '\0'; // garante q seja uma string válida
    return palavraComprimida;
}

int main()
{

    char matricula[20], *ano, *curso, *nomecurso;
    int codAno = 0, codCurso = 0, anoDado = 0, cursoDado = 0, countAno = 0, countCurso = 0;
    printf("Digite o ano ao qual voce quer checar:\n");
    scanf("%d", &codAno);
    printf("Digite o codigo do curso ao qual voce quer checar:\n");
    scanf("%d", &codCurso);
    getchar(); // limpar \n

    for (int i = 0; i < 4; i++)
    {

        printf("Digite a matricula do aluno:\n");
        fgets(matricula, 21, stdin);
        matricula[strcspn(matricula, "\n")] = 0;
        ano = charPerIndex(matricula, 0, 3);
        curso = charPerIndex(matricula, 4, 5);
        anoDado = atoi(ano);
        cursoDado = atoi(curso);

        // Nao criei erro de saída para curso dado pois nada impede de haver outros cursos na instituição, limitei ano (internet rs)
        if (anoDado >= 2000 || anoDado <= 2024)
        {
            if (anoDado == codAno)
            {
                countAno++;
            }
            if (cursoDado == codCurso)
            {
                countCurso++;
            }
        }
        else
        {
            printf("Informe uma matricula valida dentro dos parametros por favor!\n");
        }

        free(ano);
        free(curso);
    }
    if (codCurso == 99)
    {
        nomecurso = "gerontologia";
    }
    else
    {
        nomecurso = "agroecologia";
    }

    printf("Dentre os alunos informados, %d entraram no ano pedido (%d), e %d entraram no curso pedido (%s)", countAno, codAno, countCurso, nomecurso);
}