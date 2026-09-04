#include <stdio.h>

int main() {
    float preco, novoPreco;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);

    if (preco <= 0) {
        printf("Preco invalido.\n");
        return 0;
    }

    if (preco <= 50)
        novoPreco = preco * 1.05;
    else if (preco <= 100)
        novoPreco = preco * 1.10;
    else
        novoPreco = preco * 1.15;

    printf("Novo preco: R$ %.2f\n", novoPreco);

    if (novoPreco <= 80)
        printf("Barato\n");
    else if (novoPreco <= 120)
        printf("Normal\n");
    else if (novoPreco <= 200)
        printf("Caro\n");
    else
        printf("Muito caro\n");

    return 0;
}