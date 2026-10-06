#include <stdio.h>

int primo(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n, numero = 2, quantidade = 0;
    long long soma = 0;

    scanf("%d", &n);

    while (quantidade < n) {
        if (primo(numero)) {
            soma += numero;
            quantidade++;
        }

        numero++;
    }

    printf("Soma = %lld\n", soma);

    return 0;
}