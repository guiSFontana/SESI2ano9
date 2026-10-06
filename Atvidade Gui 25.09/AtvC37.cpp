#include <stdio.h>

int main() {
    int n, parte1, parte2, soma;

    for (n = 1000; n <= 9999; n++) {
        parte1 = n / 100;
        parte2 = n % 100;
        soma = parte1 + parte2;

        if (soma * soma == n)
            printf("%d\n", n);
    }

    return 0;
}