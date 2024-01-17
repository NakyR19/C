#include <stdio.h>

int main()
{
    int inscritos, viagensKombi, coletivo;
    printf("Digite a quantidade de inscritos:\n");
    scanf("%d", &inscritos);
    int capacidadeDaKombi = 11;

    // tratamento de erro e logica usando divisão e resto
    if (inscritos > 0)
    {
        if (inscritos % capacidadeDaKombi == 0)
        {
            viagensKombi = inscritos / capacidadeDaKombi;
            return printf("Foram %d inscritos, houve %d viagens de kombi, e não houve pessoas pegando coletivo.\n", inscritos, viagensKombi);
        }
        else if (inscritos < capacidadeDaKombi)
        {
            return printf("O Kombi fez apenas uma viagem com %d pessoas.\n", inscritos);
        }
        else
        {
            viagensKombi = inscritos / capacidadeDaKombi;
            coletivo = inscritos % capacidadeDaKombi;
            return printf("Foram %d inscritos, houve %d viagens de kombi e %d pessoas foram de coletivo\n", inscritos, viagensKombi, coletivo);
        }
    } else {
        return printf("O numero informado foi menor ou igual a 0, logo eh impossivel de calcular.");
    }
    return 0;
}