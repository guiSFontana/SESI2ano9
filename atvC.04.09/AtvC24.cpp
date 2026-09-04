#include <stdio.h>

int main() {
    float valor, valorFinal, imposto;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado (MG, SP, RJ ou MS): ");
    scanf("%2s", estado);

    if (valor <= 0) {
        printf("Valor invalido.\n");
        return 0;
    }

    if (estado[0] == 'M' && estado[1] == 'G')
        imposto = 0.07;
    else if (estado[0] == 'S' && estado[1] == 'P')
        imposto = 0.12;
    else if (estado[0] == 'R' && estado[1] == 'J')
        imposto = 0.15;
    else if (estado[0] == 'M' && estado[1] == 'S')
        imposto = 0.08;
    else {
        printf("Estado invalido.\n");
        return 0;
    }

    valorFinal = valor + (valor * imposto);

    printf("Preco final: R$ %.2f\n", valorFinal);

    return 0;
}