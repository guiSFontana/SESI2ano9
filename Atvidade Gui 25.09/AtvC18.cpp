#include <stdio.h>

int main() {
    int quantidade, numero;
    int maior, vezes = 0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &quantidade);

    for (int i = 1; i <= quantidade; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (i == 1) {
            maior = numero;
            vezes = 1;
        } 
        else if (numero > maior) {
            maior = numero;
            vezes = 1;
        } 
        else if (numero == maior) {
            vezes++;
        }
    }

    printf("\nMaior numero: %d\n", maior);
    printf("O maior numero foi lido %d vez(es).\n", vezes);

    return 0;
}