#include <stdio.h>

int main() {
    float fabrica;
    float distribuidor, imposto;
    float custoConsumidor;

    printf("Digite o custo de fabrica: R$ ");
    scanf("%f", &fabrica);

    // Define a porcentagem do distribuidor e dos impostos
    if (fabrica <= 12000) {
        distribuidor = 5;
        imposto = 0;
    } else if (fabrica <= 25000) {
        distribuidor = 10;
        imposto = 15;
    } else {
        distribuidor = 15;
        imposto = 20;
    }

    custoConsumidor = fabrica
                    + (fabrica * distribuidor / 100)
                    + (fabrica * imposto / 100);

    printf("Custo de fabrica: R$ %.2f\n", fabrica);
    printf("Comissao do distribuidor: %.2f%%\n", distribuidor);
    printf("Impostos: %.2f%%\n", imposto);
    printf("Custo ao consumidor: R$ %.2f\n", custoConsumidor);

    return 0;
}