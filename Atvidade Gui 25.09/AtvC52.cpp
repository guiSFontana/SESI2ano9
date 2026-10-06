#include <stdio.h>

int main() {
    int saque, notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade, i;

    printf("Valor do saque: ");
    scanf("%d", &saque);

    for (i = 0; i < 7; i++) {
        quantidade = saque / notas[i];
        saque %= notas[i];

        printf("Notas de %d: %d\n", notas[i], quantidade);
    }

    return 0;
}