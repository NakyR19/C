#include <stdio.h>

int main()
{
    int gatosCapturados, qntdGatosParaVetExp, qntdGatosParaVetInexp;
    int vetExp = 4;

    printf("Informe a quantidade de gatos capturados:\n");
    scanf("%d", &gatosCapturados);

    // tratamento de erro e logica, usando operações elementais como divisao e resto
    if (gatosCapturados > 0)
    {
        if (gatosCapturados <= 4)
        {
            return printf("Todos os veterinarios estao se responsabilizando pelos gatos igualmente.\n");
        }
        else if (gatosCapturados % vetExp == 0)
        {
            qntdGatosParaVetExp = gatosCapturados / vetExp;
            return printf("Cada veterinario experiente ficou com %d gatos e o inexperiente com nenhum gato.\n", qntdGatosParaVetExp);
        }
        else
        {
            qntdGatosParaVetExp = gatosCapturados / vetExp;
            qntdGatosParaVetInexp = gatosCapturados % vetExp;
            return printf("Cada veterinario experiente ficou com %d gatos e o inexperiente ficou com %d gatos", qntdGatosParaVetExp, qntdGatosParaVetInexp);
        }
    }
    else
    {
        printf("O numero de gatos informado foi menor ou igual a 0.");
    }
    return 0;
}