#include <stdio.h>

int main() {
    int a, b, i, inicio, fim;
    int soma = 0;
    long long multiplicacao = 1;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        inicio = a;
        fim = b;
    } else {
        inicio = b;
        fim = a;
    }

    for (i = inicio; i <= fim; i++) {
        if (i % 2 == 0)
            soma += i;
        else
            multiplicacao *= i;
    }

    printf("Soma dos pares = %d\n", soma);
    printf("Multiplicacao dos impares = %lld\n", multiplicacao);

    return 0;
}