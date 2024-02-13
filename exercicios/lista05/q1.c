#include <stdio.h>

// função que exibe o peso mensalmente e avisa quando chegou no peso ideal
void controlarDieta (float pInicial, float pAlmejado){
    for(int mes = 1; pInicial>pAlmejado; mes++){
        pInicial-= 5;
        if (pInicial < pAlmejado) {
            printf("Mes %d: Se voce continuar a dieta durante o mes todo ficarah abaixo do peso, interrompa ao chegar no peso almejado!", mes);
        } else printf("Mes %d: Voce estah com %.2f kgs\n", mes, pInicial);
        if (pAlmejado == pInicial){
            printf("Voce Chegou no peso almejado. Parabens!");
        }
    }
}

int main(){
    float pesoInicial, pesoAlmejado;
    printf("Digite seu peso inicial:\n");
    scanf("%f", &pesoInicial);
    printf("Digite o peso almejado:\n");
    scanf("%f", &pesoAlmejado);

    controlarDieta(pesoInicial, pesoAlmejado);
    return 0;
}