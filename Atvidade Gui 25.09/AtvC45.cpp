#include <stdio.h>

int main() {
    int opcao;
    double velocidade;

    do {
        printf("\n1 - km/h para m/s\n");
        printf("2 - m/s para km/h\n");
        printf("3 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            scanf("%lf", &velocidade);
            printf("%.2f m/s\n", velocidade / 3.6);
        } else if (opcao == 2) {
            scanf("%lf", &velocidade);
            printf("%.2f km/h\n", velocidade * 3.6);
        }

    } while (opcao != 3);

    return 0;
}