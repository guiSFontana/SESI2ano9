#include <stdio.h>

int main() {
    int opcao;
    double a, b;

    do {
        printf("\n1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Saida\n");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (opcao) {
            case 1:
                printf("Resultado = %.2f\n", a + b);
                break;
            case 2:
                printf("Resultado = %.2f\n", a - b);
                break;
            case 3:
                printf("Resultado = %.2f\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Resultado = %.2f\n", a / b);
                else
                    printf("Divisao por zero!\n");
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 5);

    return 0;
}