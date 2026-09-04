#include <stdio.h>

int main() {
    float altura, peso;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (altura < 1.20) {
        if (peso <= 60)
            printf("Categoria A\n");
        else if (peso <= 90)
            printf("Categoria D\n");
        else
            printf("Categoria G\n");
    }
    else if (altura <= 1.70) {
        if (peso <= 60)
            printf("Categoria B\n");
        else if (peso <= 90)
            printf("Categoria E\n");
        else
            printf("Categoria H\n");
    }
    else {
        if (peso <= 60)
            printf("Categoria C\n");
        else if (peso <= 90)
            printf("Categoria F\n");
        else
            printf("Categoria I\n");
    }

    return 0;
}