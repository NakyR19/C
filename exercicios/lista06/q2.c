// Escrever programa para ler um nome e, independente
// de como este foi escrito, exibir a inicial maiúscula e o
// restante minúscula. Sendo:
// ● Cadeia[P] = toupper(Cadeia[P]);
// Converte a letra da posição P da string
// Cadeia para maiúscula, da biblioteca
// ctype.h.
// ● Cadeia[P] = tolower(Cadeia[P]);
// Converte a letra da posição P da string
// Cadeia para minúscula, da biblioteca
// ctype.h.

#include <stdio.h>
#include <ctype.h>

// transforma a letra no index 0 em maiuscula e o resto em minuscula!
void corrigirNome(char *nome)
{
    nome[0] = toupper(nome[0]);

    for (int i = 1; nome[i] != '\0'; i++)
    {
        nome[i] = tolower(nome[i]);
    }
}

int main()
{
    char nome[21];
    printf("Digite seu nome: (Limite de 20 caracteres) \n");
    scanf("%s", nome);
    corrigirNome(nome);
    printf("%s\n", nome);
    return 0;
}