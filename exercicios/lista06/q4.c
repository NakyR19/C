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

// A função pega a partir do primeiro caracter após o espaço em branco
void pegarSobrenome(char *nome, char *sobrenome)
{
    char *aux = strchr(nome, ' ');
    if (aux)
    {
        aux++; // "Percorre" o Array pós espaço (apenas começa após o espaço em branco)
        strcpy(sobrenome, aux);
    }
}

// Extrai e armazena o primeiro nome de uma string
void pegarPrimeiroNome(char *nome, char *primeiroNome)
{
    char *ptr = strchr(nome, ' ');
    int length = ptr - nome;
    strncpy(primeiroNome, nome, length);
    primeiroNome[length] = '\0';
}

// Recebe uma string e percorre transformando seus caracteres em maiúsculo (Devolve uma String)
char *stringToUpper(char *palavra)
{
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        palavra[i] = toupper(palavra[i]);
    }
    return palavra;
}

void lerNome(char *nome)
{
    printf("Digite seu nome:\n");
    fgets(nome, 21, stdin);
    nome[strcspn(nome, "\n")] = 0;
}

int continuar()
{
    char condParada;
    printf("Deseja continuar? S - Sim, N - Nao\n");
    scanf(" %c", &condParada);
    getchar();
    condParada = toupper(condParada);
    if (condParada == 'S')
        return 1;
    else
        return 0;
}

void realizarImpressoes()
{
    char nome[21], sobrenome[21], primeiroNome[21];

    do
    {
        lerNome(nome);
        pegarSobrenome(nome, sobrenome);
        pegarPrimeiroNome(nome, primeiroNome);
        strcpy(sobrenome, stringToUpper(sobrenome));
        printf("%s, %s\n", sobrenome, primeiroNome);
    } while (continuar());
}
int main()
{
    realizarImpressoes();
    return 0;
}