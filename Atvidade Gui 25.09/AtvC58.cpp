#include <stdio.h>

int primo(int n) {
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main() {
    int a, b, i, inicio, fim;
    long long soma = 0;

    scanf("%d %d", &a, &b);

    inicio = a < b ? a : b;
    fim = a > b ? a : b;

    for (i = inicio; i <= fim; i++) {
        if (primo(i))
            soma += i;
    }

    printf("Soma = %lld\n", soma);

    return 0;
}