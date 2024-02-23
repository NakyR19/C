// Sabendo-se que Y=toupper(X) corresponde a
// função em C (biblioteca ctype.h) que atribui à
// variável Y do tipo char o valor da variável X
// (também do tipo char) em maiúsculo.

// Escrever programa para ler uma palavra com até 20
// caracteres e exibi-la com letras maiúsculas.
// Exemplos: dado brasileiro, retorna BRASILEIRO.
// Dado Nordeste, retorna NORDESTE

#include <stdio.h>
#include <ctype.h>

// O código realiza a alteração da letra de minusculo para maiusculo para cada letra utilizando como base seu índice
void stringToUpper (char* palavra) {
    for (int i = 0; palavra[i] != '\0'; i++){
        palavra[i] = toupper(palavra[i]);
    }
}
int main(){
    char palavra[21];
    printf("Digite uma palavra com ate 20 caracteres: \n");
    scanf("%s", palavra);
    stringToUpper(palavra);
    printf("%s\n", palavra);
    return 0;
}