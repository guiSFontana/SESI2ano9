#include <stdio.h>

int main() {
    int n, maior = 0, menor = 0, primeiro = 1;

    while (1) {
        scanf("%d", &n);

        if (n < 0)
            break;

        if (primeiro) {
            maior = menor = n;
            primeiro = 0;
        } else {
            if (n > maior) maior = n;
            if (n < menor) menor = n;
        }
    }

    if (!primeiro) {
        printf("Maior = %d\n", maior);
        printf("Menor = %d\n", menor);
    }

    return 0;
}