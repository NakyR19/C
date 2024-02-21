
#include <stdio.h>
#include <ctype.h>

int identificadorDeVogais (char letra){
    int count = 0;
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        count++;
    }
    return count;
}
int main()
{
    int count = 0;
    char palavra[21];
    printf("Digite seu palavra: (Limite de 20 caracteres) \n");
    scanf("%s", palavra);
    palavra[0] = toupper(palavra[0]);
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if(identificadorDeVogais(palavra[i])){
            count++;
        }
    }
    printf("Na palavra: %s\nExiste(m) %d vogal(is)", palavra, count);
}