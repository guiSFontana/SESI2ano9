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
    int i;
    long long soma = 0;

    for (i = 2; i < 2000000; i++) {
        if (primo(i))
            soma += i;
    }

    printf("Soma = %lld\n", soma);

    return 0;
}