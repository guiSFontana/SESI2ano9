#include <stdio.h>

int main() {
    int i, j;
    double fatorial, soma = 0;

    for (i = 1; i <= 4; i++) {
        fatorial = 1;

        for (j = 1; j <= 2 * i; j++)
            fatorial *= j;

        soma += (double)i / fatorial;
    }

    printf("S = %.6f\n", soma);

    return 0;
}