#include <stdio.h>

int main() {
    int i;
    double soma = 0;

    for (i = 1; i <= 50; i++)
        soma += (double)(2 * i - 1) / i;

    printf("S = %.6f\n", soma);

    return 0;
}