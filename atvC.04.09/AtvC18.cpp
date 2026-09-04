#include <stdio.h>

int main() {
    int opcao;
    float a, b, resultado;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 0;
    }

    printf("Digite dois valores: ");
    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1:
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            if (b == 0)
                printf("Nao e possivel dividir por zero.\n");
            else {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            }
            break;
    }

    return 0;
}