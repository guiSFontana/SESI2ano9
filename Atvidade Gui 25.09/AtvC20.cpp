#include <stdio.h>

int main() {
    int n, dados = 0, pares = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n != 1000) {
            dados++;

            if (n % 2 == 0)
                pares++;
        }

    } while (n != 1000);

    printf("Dados lidos: %d\n", dados);
    printf("Valores pares: %d\n", pares);

    return 0;
}