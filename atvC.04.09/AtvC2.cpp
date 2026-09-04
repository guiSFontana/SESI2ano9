#include <stdio.h>
#include <math.h>

int main() {
    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero >= 0)
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    else
        printf("Numero invalido.\n");

    return 0;
}