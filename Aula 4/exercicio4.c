#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
     printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nIMC = %.2f\n", imc);

    if (imc < 20.0){
     printf("Você está na categoria Abaixo do peso.\n");

    }else if (imc <= 24.9){
    printf("Você está na categoria Peso normal.\n");
    }else if (imc <= 29.9){
    printf("Você está na categoria Sobrepeso.\n");
    }else if (imc <= 39.9){
    printf("Você está na categoria Obeso.\n");
    }else {
    printf("Você está na categoria Obeso morbido.\n");
    }

    return 0;
}
