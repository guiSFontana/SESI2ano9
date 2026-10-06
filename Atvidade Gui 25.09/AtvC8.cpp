#include <stdio.h>

int main() {
    int i, valor, menor, maior;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    menor = maior = valor;

    for (i = 2; i <= 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (valor < menor)
            menor = valor;

        if (valor > maior)
            maior = valor;
    }

    printf("Menor = %d\n", menor);
    printf("Maior = %d\n", maior);

    return 0;
}