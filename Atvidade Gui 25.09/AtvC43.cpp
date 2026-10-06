#include <stdio.h>

int main() {
    int idade, soma = 0, quantidade = 0;

    while (1) {
        scanf("%d", &idade);

        if (idade == 0)
            break;

        soma += idade;
        quantidade++;
    }

    if (quantidade > 0)
        printf("Media = %.2f\n", (float)soma / quantidade);

    return 0;
}