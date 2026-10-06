#include <stdio.h>

int main() {
    int i, valor, soma = 0, quantidade = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (valor > 0) {
            soma += valor;
            quantidade++;
        }
    }

    if (quantidade > 0)
        printf("Media = %.2f\n", soma / (float)quantidade);
    else
        printf("Nenhum valor positivo foi informado.\n");

    return 0;
}