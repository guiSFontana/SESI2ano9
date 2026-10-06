#include <stdio.h>

int main() {
    int n;
    int soma = 0, quantidade = 0;
    int maior = 0, menor = 0;
    int somaPares = 0, quantidadePares = 0;

    while (1) {
        scanf("%d", &n);

        if (n == 0)
            break;

        soma += n;
        quantidade++;

        if (quantidade == 1)
            maior = menor = n;
        else {
            if (n > maior) maior = n;
            if (n < menor) menor = n;
        }

        if (n % 2 == 0) {
            somaPares += n;
            quantidadePares++;
        }
    }

    if (quantidade > 0) {
        printf("Soma = %d\n", soma);
        printf("Quantidade = %d\n", quantidade);
        printf("Media = %.2f\n", (float)soma / quantidade);
        printf("Maior = %d\n", maior);
        printf("Menor = %d\n", menor);

        if (quantidadePares > 0)
            printf("Media dos pares = %.2f\n",
                   (float)somaPares / quantidadePares);
    }

    return 0;
}