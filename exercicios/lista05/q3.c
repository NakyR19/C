#include <stdio.h>

// A função serve para definir qual horario e o melhor e o pior
void definirHorarios(int NumPassageiros, int *MaisPassageiros, int *MenosPassageiros, int *PiorHorario, int *MelhorHorario, int Horas)
{
    if (NumPassageiros > *MaisPassageiros)
    {
        *MelhorHorario = Horas;
        *MaisPassageiros = NumPassageiros;
    }
    if (NumPassageiros < *MenosPassageiros)
    {
        *PiorHorario = Horas;
        *MenosPassageiros = NumPassageiros;
    }
}

// A função serve para contabilizar o numero de passageiros por hora e informar ao usuario
void registrarPassageiros(int *MaisPassageiros, int *MelhorHorario, int *MenosPassageiros, int *PiorHorario, int *SomaPassageiros) {
    int Horas, NumPassageiros, CapacidadeOnibus = 40;

    for (Horas = 8; Horas <= 18; Horas++)
    {
        printf("Numero de passageiras as %d horas: ", Horas);
        scanf("%d", &NumPassageiros);
        if (NumPassageiros > CapacidadeOnibus)
        {
            printf("O numero de passageiros e superior à capacidade. Por favor, recomece com os valores corretos!\n");
            break;
        }
        else
        {
            definirHorarios(NumPassageiros, MaisPassageiros, MenosPassageiros, PiorHorario, MelhorHorario, Horas);
            *SomaPassageiros += NumPassageiros;
        }
    }
}


int main()
{
    int MaisPassageiros = 0, MelhorHorario = 0, MenosPassageiros = 41, PiorHorario = 0, SomaPassageiros = 0;

    registrarPassageiros(&MaisPassageiros, &MelhorHorario, &MenosPassageiros, &PiorHorario, &SomaPassageiros);

    float MediaPassageiros = (float)SomaPassageiros / 11;
    float TotalRecebido = SomaPassageiros * 22.0;

    printf("Horario de maior procura: %d.\n", MelhorHorario);
    printf("Horario de pior procura: %d.\n", PiorHorario);
    printf("Numero medio de passageiros: %.2f.\n", MediaPassageiros);
    printf("Total de passageiros: %d.\n", SomaPassageiros);
    printf("Total recebido: R$%.2f.\n", TotalRecebido);

    return 0;
}
