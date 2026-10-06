#include <stdio.h>

int main() {
    int n, i, j, numero = 0, quantidade = 0;

    scanf("%d %d %d", &n, &i, &j);

    while (quantidade < n) {
        if (numero % i == 0 || numero % j == 0) {
            printf("%d ", numero);
            quantidade++;
        }

        numero++;
    }

    return 0;
}