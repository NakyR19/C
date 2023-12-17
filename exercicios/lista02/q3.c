#include <stdio.h>
#include <math.h>

int elevarCubo(int n){
    int resultado;
    resultado = n * n * n;
    return resultado;
}

int main (){
    int n;
    printf("Digite o numero que voce quer elevar ao cubo:\n");
    scanf("%d", &n);
    return printf("o resultado eh: %d", elevarCubo(n));
    return 0;
}
