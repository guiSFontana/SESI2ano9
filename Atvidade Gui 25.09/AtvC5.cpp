#include <stdio.h>

int main() {
    int i, valor, soma = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %d valor: ", i);
        scanf("%d", &valor);
        soma += valor;
    }

    printf("Soma = %d\n", soma);

    return 0;
}