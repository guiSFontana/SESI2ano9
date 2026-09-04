#include <stdio.h>

int main() {
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior: ");
    scanf("%f", &baseMaior);

    printf("Digite a base menor: ");
    scanf("%f", &baseMenor);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (baseMaior <= 0 || baseMenor <= 0 || altura <= 0) {
        printf("Valores invalidos.\n");
    } else {
        area = ((baseMaior + baseMenor) * altura) / 2;
        printf("Area do trapezio: %.2f\n", area);
    }

    return 0;
}