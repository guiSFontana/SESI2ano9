#include <stdio.h>

int main() {
    float salario, reajuste, salarioFinal, bonus = 0;
    int tempo;

    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    printf("Digite o tempo de servico (anos): ");
    scanf("%d", &tempo);

    // Define o reajuste
    if (salario <= 500) {
        reajuste = 25;
    } else if (salario <= 1000) {
        reajuste = 20;
    } else if (salario <= 1500) {
        reajuste = 15;
    } else if (salario <= 2000) {
        reajuste = 20;
    } else {
        reajuste = 0;
    }

    // Define o bonus
    if (tempo < 1) {
        bonus = 0;
    } else if (tempo <= 3) {
        bonus = 100;
    } else if (tempo <= 6) {
        bonus = 200;
    } else if (tempo <= 10) {
        bonus = 300;
    } else {
        bonus = 500;
    }

    if (reajuste == 0) {
        printf("Funcionario nao tem direito a reajuste.\n");
    } else {
        salarioFinal = salario + (salario * reajuste / 100) + bonus;

        printf("Reajuste: %.2f%%\n", reajuste);
        printf("Bonus: R$ %.2f\n", bonus);
        printf("Salario final: R$ %.2f\n", salarioFinal);
    }

    return 0;
}