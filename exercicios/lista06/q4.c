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

// A função serve para capturar o sobrenome de um nome dado
void pegarSobrenome(char *nome, char *sobrenome)
{
    char *aux = strchr(nome, ' '); // procura o espaço em branco em nome, e assimila a aux apenas após este espaço
    if (aux)
    {
        aux++; // "Percorre" o Array (apenas começa após o espaço em branco)
        strcpy(sobrenome, aux);
    }
}

// Extrai e armazena o primeiro nome de uma string
void pegarPrimeiroNome(char *nome, char *primeiroNome)
{
    char *aux = strchr(nome, ' '); 
    int length = aux - nome; // Após encontrar o espaço, ela calcula o comprimento do nome que vem antes desse espaço.
    strncpy(primeiroNome, nome, length);
    primeiroNome[length] = '\0';
}

// Transforma a primeira letra em maiuscula e o resto em minuscula
void corrigirNome(char *nome)
{
    nome[0] = toupper(nome[0]);

    for (int i = 1; nome[i] != '\0'; i++)
    {
        nome[i] = tolower(nome[i]);
    }
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

int main()
{
    char nome[21], sobrenome[21], primeiroNome[21], condParada;

    do
    {
        printf("Digite seu nome:\n");
        fgets(nome, 21, stdin);
        nome[strcspn(nome, "\n")] = 0;
        pegarSobrenome(nome, sobrenome);
        pegarPrimeiroNome(nome, primeiroNome);
        corrigirNome(primeiroNome);
        strcpy(sobrenome, stringToUpper(sobrenome));
        printf("%s, %s\n", sobrenome, primeiroNome);
        printf("Deseja continuar? S - Sim, N - Nao\n");
        scanf(" %c", &condParada);
        getchar();
        condParada = toupper(condParada);
    } while (condParada == 'S');
    return 0;
}