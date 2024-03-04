// Sabendo-se que Y=toupper(X) corresponde a
// função em C (biblioteca ctype.h) que atribui à
// variável Y do tipo char o valor da variável X
// (também do tipo char) em maiúsculo.

// Escrever programa para ler uma palavra com até 20
// caracteres e exibi-la com letras maiúsculas.
// Exemplos: dado brasileiro, retorna BRASILEIRO.
// Dado Nordeste, retorna NORDESTE

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// O código realiza a alteração da letra de minusculo para maiusculo para cada letra utilizando como base seu índice
void stringToUpper(char *palavra)
{
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        palavra[i] = toupper(palavra[i]);
    }
}
int main()
{
    char palavra[21];
    printf("Digite uma palavra com ate 20 caracteres:\n");
    fgets(palavra, 21, stdin);
    palavra[strcspn(palavra, "\n")] = 0; //  remove qualquer nova linha que possa estar presente no final.
    stringToUpper(palavra);
    printf("%s\n", palavra);
    return 0;
}