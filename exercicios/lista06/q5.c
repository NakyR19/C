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

char *charPerIndex(char *palavra, int idxInicial, int idxFinal)
{
    char palavraComprimida[20]; // três caracteres mais o terminador de linha
    // copia os três primeiros caracteres de um array para o outro
    memcpy(palavraComprimida, &palavra[idxInicial], idxFinal);
    palavraComprimida[idxFinal] = '\0'; // adiciona o terminador de linha
    strcpy(palavra, palavraComprimida);
    return palavra;
}

void lerMatricula(char *matricula)
{
    printf("Digite sua matricula:\n");
    fgets(matricula, 21, stdin);
    matricula[strcspn(matricula, "\n")] = 0;
}

int main()
{

    char matricula[20], ano[5], curso[3];
    lerMatricula(matricula);

    strcpy(ano, charPerIndex(matricula, 0, 3));
    strcpy(curso, charPerIndex(matricula, 4, 5));

    for(int i = 0; i < 100; i++) {
        
    }

    printf("%s", matricula);
}