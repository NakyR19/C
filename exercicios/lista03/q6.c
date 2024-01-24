#include <stdio.h>

int main()
{
    float peso, altura;
    printf("Digite seu peso em kgs:\n");
    scanf("%f", &peso);
    printf("Digite sua altura em metros\n");
    scanf("%f", &altura);
    float imc = peso / (altura * altura);

    if (imc > 0)
    {
        if (imc < 18.5)
        {
            return printf("Magreza");
        }
        else if (imc >= 18.5 && imc <= 24.9)
        {
            return printf("Saudavel");
        }
        else if (imc >= 25 && imc <= 29.9)
        {
            return printf("Sobrepeso");
        }
        else if (imc >= 30 && imc <= 34.9)
        {
            return printf("Obesidade Grau I");
        }
        else if (imc >= 35 && imc <= 39.9)
        {
            return printf("Obesidade Grau II (severa)");
        }
        else
        {
            return printf("Obesidade Grau III (Morbida)");
        }
    }
    else
        return printf("Os valores informados estao errado");
    return 0;
}