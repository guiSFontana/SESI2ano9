#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("Quadrado: %.2f\n", numero * numero);
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    }

    return 0;
}