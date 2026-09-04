#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Classificacao: Saudavel\n");
    } else if (imc < 30.0) {
        printf("Classificacao: Peso em excesso\n");
    } else if (imc < 35.0) {
        printf("Classificacao: Obesidade Grau I\n");
    } else if (imc < 40.0) {
        printf("Classificacao: Obesidade Grau II (severa)\n");
    } else {
        printf("Classificacao: Obesidade Grau III (morbida)\n");
    }

    return 0;
}