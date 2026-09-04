#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco, total;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            preco = 1.20;
            printf("Cachorro Quente\n");
            break;

        case 101:
            preco = 1.30;
            printf("Bauru Simples\n");
            break;

        case 102:
            preco = 1.50;
            printf("Bauru com Ovo\n");
            break;

        case 103:
            preco = 1.20;
            printf("Hamburguer\n");
            break;

        case 104:
            preco = 1.70;
            printf("Cheeseburguer\n");
            break;

        case 105:
            preco = 2.20;
            printf("Suco\n");
            break;

        case 106:
            preco = 1.00;
            printf("Refrigerante\n");
            break;

        default:
            printf("Codigo invalido.\n");
            return 0;
    }

    total = preco * quantidade;

    printf("Total: R$ %.2f\n", total);

    return 0;
}