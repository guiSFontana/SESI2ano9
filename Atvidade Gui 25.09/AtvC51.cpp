#include <stdio.h>

int main() {
    double salario = 2000.0;
    double aumento = 1.5;
    int ano;

    for (ano = 1996; ano <= 2026; ano++) {
        salario += salario * aumento / 100.0;

        if (ano >= 1997)
            aumento *= 2;
    }

    printf("Salario atual = %.2f\n", salario);

    return 0;
}