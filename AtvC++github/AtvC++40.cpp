#include <stdio.h>

int main() {
    float dias, salario, liquido;

    scanf("%f", &dias);

    salario = dias * 30.00;
    liquido = salario * 0.92;

    printf("%.2f\n", liquido);

    return 0;
}