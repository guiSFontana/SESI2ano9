#include <stdio.h>

int main() {
    float p1, p2, p3, media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &p2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &p3);

    media = (p1 + p2 + (p3 * 2)) / 4;

    printf("Media: %.2f\n", media);

    if (media >= 60)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}