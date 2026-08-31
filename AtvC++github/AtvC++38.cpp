#include <stdio.h>

int main() {
    float salario, novoSalario;

    scanf("%f", &salario);

    novoSalario = salario * 1.25;

    printf("%.2f\n", novoSalario);

    return 0;
}