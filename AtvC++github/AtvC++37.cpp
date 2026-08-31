#include <stdio.h>

int main() {
    float preco, desconto, final;

    scanf("%f", &preco);

    desconto = preco * 0.12;
    final = preco - desconto;

    printf("%.2f\n", final);

    return 0;
}