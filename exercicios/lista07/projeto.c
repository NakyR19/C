/* Considerando a necessidade de construir um programa para definir o
 * valor a pagar pelo uso de um vaga de estacionamento, por tempo de
 * uso. Onde: as vagas são numeradas, o cliente escolhe a vaga em que
 * deseja estacionar seu carro, é registrado no sistema a hora de che-
 * gada no estacionamento; exemplo, se um carro chegou às 8:00 no es-
 * tacionamento e ocupa a vaga 15, na posição 15 do vetor é armazenada
 *  a string Placa + hora.
 * Você decide e implementa as operações a serem disponibilizados ao
 * usuário do programa, a necessidade de aplicar subprograma e o valor
 * pela unidade de tempo de uso do estacionamento.                  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char Estaciona[30][14];
int CarrosPorHora[15] = {0};
float Valor;
char Responsavel[21], Iniciou = 0;
float SomaFinal = 0;

void AbrirCaixa()
{
    system("cls");
    system("color 80"); // 8 - cinza  0 - preto
    printf("\n >>> Estacionamento <<< \n");
    printf(" >>>  Largas Vagas  <<< \n");
    printf("\n     ABRINDO  CAIXA \n");
    for (int i = 0; i < 30; i++)
        strcpy(Estaciona[i], "LIVRE");
    printf("\nQual o valor do estacionamento por hora de uso? ");
    scanf("%f", &Valor);
    fflush(stdin);
    printf("Qual o nome do responsavel? ");
    fgets(Responsavel, 21, stdin);
    Responsavel[strcspn(Responsavel, "\n")] = 0;
    Iniciou = 1;
}

void ClienteChega()
{
    int Vaga;
    char Placa[8], Hora[6], Entrada[14];
    system("cls");
    system("color 80"); // 8 - cinza  0 - preto
    printf("\n >>> Estacionamento <<< \n");
    printf(" >>>  Largas Vagas  <<< \n");
    printf("\n   CHEGADA DE CLIENTE \n");
    if (Iniciou)
    {
        printf("\n CAIXA ABERTO   Valor/h: %.2f", Valor);
        printf("\n Responsavel: %s\n\n", Responsavel);
        printf("Qual a vaga ocupada? ");
        scanf("%d", &Vaga);
        fflush(stdin);
        if (Vaga < 1 || Vaga > 30 || strcmp(Estaciona[Vaga - 1], "LIVRE") != 0)
        {
            printf("\nERRO: A vaga ja esta ocupada ou eh invalida!\n");
            system("pause");
            return;
        }
        printf("Qual a placa do veiculo [7 digitos]? ");
        fgets(Placa, 8, stdin);
        Placa[strcspn(Placa, "\n")] = 0;
        strcpy(Entrada, Placa);
        fflush(stdin);
        if (strlen(Placa) != 7)
        {
            printf("\nERRO: Formato de placa invalido!\n");
            system("pause");
            return;
        }
        printf("Qual a hora de entrada [formato nn:nn]? ");
        fgets(Hora, 6, stdin);
        Hora[strcspn(Hora, "\n")] = 0;
        // Verifica se a hora de entrada está dentro do horário de funcionamento
        if (strlen(Hora) != 5 || Hora[2] != ':' || atoi(Hora) < 6 || atoi(Hora) > 20)
        {
            printf("\nERRO: Formato de hora invalido ou fora do horario de funcionamento!\n");
            system("pause");
            return;
        }
        strcat(Entrada, "+");
        strcat(Entrada, Hora);
        strcpy(Estaciona[Vaga - 1], Entrada);
        printf("Chegada registrada com sucesso!\n");
        int HoraEntrada = atoi(Hora);
        CarrosPorHora[HoraEntrada - 6]++;
    }
    else
        printf("\nERRO: Antes eh preciso abrir o caixa!\n");
    system("pause");
}

void ClienteSai()
{
    int Vaga;
    char Placa[8], Entrada[14], Hora[3], Min[3], Saida[6], HoraSaida[3], MinSaida[3];
    int H = 0, M = 0, HSaida = 0, MSaida = 0; // hora, minuto e segundo
    float ValorPago = 0, Troco = 0, ValorAPagar = 0;
    system("cls");
    system("color 80"); // 8 - cinza  0 - preto
    printf("\n >>> Estacionamento <<< \n");
    printf(" >>>  Largas Vagas  <<< \n");
    printf("\n    SAIDA DE CLIENTE \n");
    if (Iniciou)
    {
        printf("\n CAIXA ABERTO   Valor/h: %.2f", Valor);
        printf("\n Responsavel: %s\n\n", Responsavel);
        printf("Qual a vaga ocupada? ");
        scanf("%d", &Vaga);
        getchar();
        printf("Qual o horario de saida [formato nn:nn]? ");
        fgets(Saida, 6, stdin);
        Saida[strcspn(Saida, "\n")] = 0;
        // se vaga LIVRE, houve erro
        strcpy(Entrada, Estaciona[Vaga - 1]);

        // Teste
        printf("\n>>>>>>>%s", Entrada);

        for (int i = 0; i < 7; i++)
            Placa[i] = toupper(Entrada[i]);

        // Teste
        printf("\n>>>>>>>Placa: %s", Placa);

        Hora[0] = Entrada[8];
        Hora[1] = Entrada[9];
        Hora[2] = '\0';
        H = atoi(Hora); // convete string em inteiro
        Min[0] = Entrada[11];
        Min[1] = Entrada[12];
        Min[2] = '\0';
        M = atoi(Min); // convete string em inteiro
        // PEGAR HORARIO DE SAIDA Q2
        HoraSaida[0] = Saida[0];
        HoraSaida[1] = Saida[1];
        HoraSaida[2] = '\0';
        HSaida = atoi(HoraSaida);
        MinSaida[0] = Saida[3];
        MinSaida[1] = Saida[4];
        MinSaida[2] = '\0';
        MSaida = atoi(MinSaida);

        // Teste
        printf("\n>>>>>>>Horario de Entrada: %d:%d\n", H, M);
        printf("\n>>>>>>>Horario de Saida: %d:%d\n", HSaida, MSaida);

        int TempoTotal = (HSaida - H) * 60 + (MSaida - M);
        int Horas = TempoTotal / 60;
        float Minutos = TempoTotal % 60;

        ValorAPagar = Horas * Valor + ((float)Minutos / 60) * Valor;
        SomaFinal += ValorAPagar;

        printf("\nValor a pagar: %.2f\n", ValorAPagar);
        printf("Informe o valor pago: ");
        scanf("%f", &ValorPago);
        Troco = ValorPago - ValorAPagar;
        printf("Troco: %.2f\n", Troco);
        // Atualiza a vaga para "LIVRE" quando o cliente sai
        strcpy(Estaciona[Vaga - 1], "LIVRE");
    }
    else
        printf("\nERRO: Antes eh preciso abrir o caixa!\n");
    system("pause");
}

void FecharCaixa()
{
    system("cls");
    system("color 80"); // 8 - cinza  0 - preto
    printf("\n >>> Estacionamento <<< \n");
    printf(" >>>  Largas Vagas  <<< \n");
    printf("\n    FECHANDO O CAIXA \n");
    int Maior = 0;
    int HoraMaior = 0;
    if (Iniciou)
    {
        printf("\n CAIXA ABERTO   Valor/h: %.2f", Valor);
        printf("\n Responsavel: %s\n\n", Responsavel);
        printf("Relatorio de carros por hora:\n");
        for (int i = 0; i < 15; i++)
        {
            printf("Hora %02d: %d carros\n", i + 6, CarrosPorHora[i]);
            if (CarrosPorHora[i] > Maior)
            {
                Maior = CarrosPorHora[i];
                HoraMaior = i + 6;
            }
        }
        printf("\nHorario com maior numero de entradas: %02d:00 com %d entradas\n", HoraMaior, Maior);
        printf("Soma do valor total recebido no dia: %.2f\n", SomaFinal);
        for (int i = 0; i < 30; i++)
        {
            if (strcmp(Estaciona[i], "LIVRE") != 0)
            {
                printf("\nALERTA: Ainda ha carros no estacionamento!\n");
                break;
            }
        }
    }
    else
        printf("\nERRO: Antes eh preciso abrir o caixa!\n");
    system("pause");
}

int main()
{
    int Op;
    do
    {
        system("cls");
        system("color 70"); // 7 - branco  0 - preto
        printf("\n >>> Estacionamento <<< \n");
        printf(" >>>  Largas Vagas  <<< \n");
        printf("\n 1 - Abrir Caixa");
        printf("\n 2 - Chegada de Cliente");
        printf("\n 3 - Saida de Cliente");
        printf("\n 4 - Fechar Caixa");
        printf("\n\n Qual a opcao desejada? ");
        do
        {
            scanf("%d", &Op);
            if ((Op < 1) || (Op > 4))
            {
                printf("\n ERRO: Opcao invalida!");
                printf("\n Qual a opcao desejada? ");
            }
            else
                break;
        } while (1);
        switch (Op)
        {
        case 1:
            AbrirCaixa();
            break;
        case 2:
            ClienteChega();
            break;
        case 3:
            ClienteSai();
            break;
        case 4:
            FecharCaixa();
            break;
        }
    } while (Op != 4);

    return 0;
}