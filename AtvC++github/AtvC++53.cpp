#include <stdio.h>

int main() {
    float comprimento, largura, precoMetro, perimetro, custo;

    scanf("%f %f", &comprimento, &largura);
    scanf("%f", &precoMetro);

    perimetro = 2 * (comprimento + largura);
    custo = perimetro * precoMetro;

    printf("Custo: R$ %.2f\n", custo);

    return 0;
}