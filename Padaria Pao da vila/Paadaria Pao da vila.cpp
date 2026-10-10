
#include <stdio.h>

int main() {
    char cliente[50];
    int opcao, codigo, quantidade, i;
    int vendas = 0, unidadesVendidas = 0;

    int estoque[10] = {50, 30, 20, 15, 12, 18, 25, 40, 20, 15};
    int vendidos[10] = {0};

    char produtos[10][30] = {
        "Pao frances",
        "Pao de queijo",
        "Coxinha",
        "Pastel",
        "Fatia de bolo",
        "Sonho",
        "Cookie",
        "Cafe",
        "Suco",
        "Chocolate quente"
    };

    float precos[10] = {
        1.00, 3.50, 7.00, 8.00, 6.00,
        5.00, 4.00, 4.50, 6.00, 7.50
    };

    float total, recebido, troco;
    float arrecadacao = 0;

    printf("BEM-VINDO A PADARIA PAO DA VILA!\n");

    printf("Digite seu nome: ");
    scanf("%49s", cliente);

    do {
        printf("\n===== MENU DA PADARIA =====\n");
        printf("Ola, %s!\n", cliente);
        printf("1 - Consultar produtos\n");
        printf("2 - Realizar venda\n");
        printf("3 - Repor estoque\n");
        printf("4 - Relatorio do turno\n");
        printf("5 - Atender outro cliente\n");
        printf("0 - Encerrar sistema\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            printf("\n===== PRODUTOS =====\n");

            for (i = 0; i < 10; i++) {
                printf("%d - %s | Preco: R$ %.2f | Estoque: %d\n",
                       i + 1, produtos[i], precos[i], estoque[i]);
            }

        } else if (opcao == 2) {

            printf("\n===== REALIZAR VENDA =====\n");

            printf("Digite o codigo do produto (1 a 10): ");
            scanf("%d", &codigo);

            if (codigo < 1 || codigo > 10) {
                printf("Codigo invalido!\n");

            } else {
                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);

                if (quantidade <= 0) {
                    printf("Quantidade invalida!\n");

                } else if (quantidade > estoque[codigo - 1]) {
                    printf("Estoque insuficiente!\n");

                } else {
                    total = precos[codigo - 1] * quantidade;

                    printf("Produto: %s\n", produtos[codigo - 1]);
                    printf("Total: R$ %.2f\n", total);

                    printf("Valor recebido: R$ ");
                    scanf("%f", &recebido);

                    if (recebido < total) {
                        printf("Dinheiro insuficiente! Venda cancelada.\n");

                    } else {
                        troco = recebido - total;

                        estoque[codigo - 1] =
                            estoque[codigo - 1] - quantidade;

                        vendidos[codigo - 1] =
                            vendidos[codigo - 1] + quantidade;

                        unidadesVendidas =
                            unidadesVendidas + quantidade;

                        vendas = vendas + 1;
                        arrecadacao = arrecadacao + total;

                        printf("\nVenda realizada!\n");
                        printf("Total: R$ %.2f\n", total);
                        printf("Troco: R$ %.2f\n", troco);
                        printf("Estoque restante: %d\n",
                               estoque[codigo - 1]);
                    }
                }
            }

        } else if (opcao == 3) {

            printf("\n===== REPOSICAO DE ESTOQUE =====\n");

            printf("Digite o codigo do produto (1 a 10): ");
            scanf("%d", &codigo);

            if (codigo < 1 || codigo > 10) {
                printf("Codigo invalido!\n");

            } else {
                printf("Produto: %s\n", produtos[codigo - 1]);

                printf("Quantidade para repor: ");
                scanf("%d", &quantidade);

                if (quantidade <= 0) {
                    printf("Quantidade invalida!\n");

                } else {
                    estoque[codigo - 1] =
                        estoque[codigo - 1] + quantidade;

                    printf("Estoque atualizado: %d\n",
                           estoque[codigo - 1]);
                }
            }

        } else if (opcao == 4) {

            printf("\n===== RELATORIO DO TURNO =====\n");

            printf("Vendas realizadas: %d\n", vendas);
            printf("Unidades vendidas: %d\n", unidadesVendidas);
            printf("Arrecadacao: R$ %.2f\n", arrecadacao);

            for (i = 0; i < 10; i++) {
                printf("%s | Vendidos: %d | Estoque: %d\n",
                       produtos[i], vendidos[i], estoque[i]);
            }

        } else if (opcao == 5) {

            printf("Digite o nome do novo cliente: ");
            scanf("%49s", cliente);

            printf("Ola, %s! Seja bem-vindo!\n", cliente);

        } else if (opcao == 0) {

            printf("\n===== RESUMO FINAL =====\n");
            printf("Vendas realizadas: %d\n", vendas);
            printf("Unidades vendidas: %d\n", unidadesVendidas);
            printf("Arrecadacao total: R$ %.2f\n", arrecadacao);
            printf("Sistema encerrado!\n");

        } else {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}