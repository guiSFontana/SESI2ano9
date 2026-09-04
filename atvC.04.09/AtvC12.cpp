#include <stdio.h>
#include <math.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Numero invalido\n");
    } else {
        printf("Logaritmo natural: %.2f\n", log(numero));
    }

    return 0;
}