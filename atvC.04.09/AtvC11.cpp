#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido\n");
        return 0;
    }

    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }

    printf("Soma dos algarismos: %d\n", soma);

    return 0;
}