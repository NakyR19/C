// Escrever programa para ler o nome de uma pessoa,
// composto por nome e sobrenome (entre nome e
// sobrenome há um espaço em branco). E exibir,
// sobrenome em maiúsculo, seguido de vírgula e do nome
// da pessoa. Efetuar essa operação para tantas entradas quantas
// o usuário desejar.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void pegarSobrenome(char nome[21], char *sobrenome){
    //  char *espaco = strchr(nome, ' ');  // encontra o espaço entre o nome e o sobrenome
    // if (espaco != NULL)
    // {
    //     *espaco = '\0';  // substitui o espaço por um caractere nulo para dividir a string
    //     char *sobrenome = espaco + 1;  // aponta para o início do sobrenome

    //     printf("Nome: %s\n", nome);
    //     printf("Sobrenome: %s\n", sobrenome);
    // }
}
int main()
{
    char nome[21], condParada;

    do
    {
        printf("Digite seu nome:\n");
        gets(nome);
        for (int i = 0; nome[i] != '\0'; i++)
        {
            if (nome[i] == ' ')
            {
                printf("FOR 1: %d ", i);
                while (nome[i] != '\0')
                {
                    i++;
                    printf("FOR 2:%d ", i);
                    nome[i] = toupper(nome[i]);
                }
                printf(nome);
            }
        }
    printf("Deseja continuar? S - sim, N - Nao");
    scanf("%c", &condParada);
    condParada = toupper(condParada);
    getchar();
    } while (condParada == 'S');
}