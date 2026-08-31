#include <stdio.h>

int main() {
    float reais, cotacao, dolares;

    scanf("%f %f", &reais, &cotacao);

    dolares = reais / cotacao;

    printf("%.2f\n", dolares);
    return 0;
}