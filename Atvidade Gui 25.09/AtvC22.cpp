#include <stdio.h>

int main() {
    int nota, quantidade = 0, soma = 0;

    while (1) {
        printf("Digite uma nota (10 a 20): ");
        scanf("%d", &nota);

        if (nota < 10 || nota > 20)
            break;

        soma += nota;
        quantidade++;
    }

    if (quantidade > 0)
        printf("Media = %.2f\n", soma / (float)quantidade);
    else
        printf("Nenhuma nota valida.\n");

    return 0;
}