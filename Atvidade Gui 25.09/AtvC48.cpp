#include <stdio.h>

int main() {
    long long a = 1, b = 2, proximo, soma = 0;

    while (b <= 4000000) {
        if (b % 2 == 0)
            soma += b;

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("Soma = %lld\n", soma);

    return 0;
}