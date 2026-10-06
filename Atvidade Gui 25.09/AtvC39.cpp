#include <stdio.h>

int main() {
    double base, altura;

    do {
        printf("Base: ");
        scanf("%lf", &base);

        printf("Altura: ");
        scanf("%lf", &altura);

        if (base <= 0 || altura <= 0)
            printf("Valores invalidos.\n");

    } while (base <= 0 || altura <= 0);

    printf("Area = %.2f\n", (base * altura) / 2);

    return 0;
}