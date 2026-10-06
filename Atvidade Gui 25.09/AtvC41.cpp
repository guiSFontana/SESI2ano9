#include <stdio.h>

int main() {
    double r1, r2, r;

    do {
        printf("R1: ");
        scanf("%lf", &r1);

        if (r1 == 0)
            break;

        printf("R2: ");
        scanf("%lf", &r2);

        if (r2 == 0)
            break;

        r = (r1 * r2) / (r1 + r2);

        printf("Resistencia equivalente = %.2f\n", r);

    } while (1);

    return 0;
}