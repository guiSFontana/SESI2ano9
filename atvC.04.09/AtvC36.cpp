#include <stdio.h>

int main() {
    float vendas, comissao;

    printf("Digite o valor das vendas mensais: R$ ");
    scanf("%f", &vendas);

    if (vendas >= 100000)
        comissao = 7000 + vendas * 0.16;
    else if (vendas >= 80000)
        comissao = 6500 + vendas * 0.14;
    else if (vendas >= 60000)
        comissao = 6000 + vendas * 0.14;
    else if (vendas >= 40000)
        comissao = 5500 + vendas * 0.14;
    else if (vendas >= 20000)
        comissao = 5000 + vendas * 0.14;
    else
        comissao = 4000 + vendas * 0.14;

    printf("Comissao: R$ %.2f\n", comissao);

    return 0;
}