#include <stdio.h>

int main() {
    float consumo;

    printf("Digite o consumo do carro em km/l: ");
    scanf("%f", &consumo);

    if (consumo < 8)
        printf("Venda o carro!\n");
    else if (consumo <= 14)
        printf("Economico!\n");
    else
        printf("Super economico!\n");

    return 0;
}