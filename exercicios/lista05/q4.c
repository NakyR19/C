
#include <stdio.h>

// O código verifica as notas de 50 alunos em 12 avaliações e determina se cada aluno foi aprovado ou reprovado seguindo a regra de 5 avaliações igual ou acima da nota 7.

int main(){

    float nota;

    for(int alunos = 1; alunos <= 50; alunos++){
        int count = 0;
        for(int avaliacoes = 1; avaliacoes <= 12; avaliacoes++){
            printf("Digite a nota da avaliacao %d:\n", avaliacoes);
            scanf("%f", &nota);
            if(nota >= 7) count++;
        }
        if(count >= 5) {
            printf("Aluno %d: Aprovado!\n", alunos);
        } else {
            printf("Aluno %d: Reprovado!\n", alunos);
        } 
    }
    return 0;
}