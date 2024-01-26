#include <math.h>
#include <stdio.h>

int totalTurmas(int totalAlunos, int alunosPorTurma)
{
    if(totalAlunos <= 0) return 0;
    if(alunosPorTurma <= 0) {
        printf("ERRO: Quantia de alunos por turma deve ser maior que 0\n");
        return -1;
    }
    int caixas = ceil((float) totalAlunos / alunosPorTurma);
    return caixas;
}

void main()
{

    int alunos, capacidade;
    printf("Quantos alunos no total?\n");
    scanf("%d", &alunos);
    printf("Quantos alunos por turma?\n");
    scanf("%d", &capacidade);
    int turmas = totalTurmas(alunos, capacidade);
    printf("Existira %d turmas nesse ano", turmas);
}