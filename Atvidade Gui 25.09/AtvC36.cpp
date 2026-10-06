#include <stdio.h>

int main() {
    int i;
    long long soma = 0, somaQuadrados = 0;

    for (i = 1; i <= 100; i++) {
        soma += i;
        somaQuadrados += i * i;
    }

    printf("Diferenca = %lld\n", soma * soma - somaQuadrados);

    return 0;
}