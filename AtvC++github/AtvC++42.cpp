#include <stdio.h>

int main() {
    float salarioBase, salario;

    scanf("%f", &salarioBase);

    salario = salarioBase + salarioBase * 0.05;
    salario = salario - salarioBase * 0.07;

    printf("%.2f\n", salario);

    return 0;
}