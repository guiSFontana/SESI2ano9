#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao e equacao de segundo grau.\n");
        return 0;
    }

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        printf("Nao existe raiz real.\n");
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);

        printf("Raiz: %.2f\n", x1);
        printf("Raiz unica.\n");
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

    return 0;
}