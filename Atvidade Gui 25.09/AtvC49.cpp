#include <stdio.h>

int main() {
    float salarioCarlos, salarioJoao;
    int meses = 0;

    printf("Digite o salario de Carlos: ");
    scanf("%f", &salarioCarlos);

    salarioJoao = salarioCarlos / 3;

    while (salarioJoao < salarioCarlos) {
        salarioCarlos = salarioCarlos + salarioCarlos * 0.02;
        salarioJoao = salarioJoao + salarioJoao * 0.05;
        meses++;
    }

    printf("Quantidade de meses: %d\n", meses);

    return 0;
}