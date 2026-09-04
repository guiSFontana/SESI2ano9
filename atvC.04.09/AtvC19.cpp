#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if ((numero % 3 == 0 && numero % 5 != 0) ||
        (numero % 3 != 0 && numero % 5 == 0)) {

        printf("O numero e divisivel por 3 ou por 5, mas nao por ambos.\n");

    } else {
        printf("O numero nao atende a condicao.\n");
    }

    return 0;
}