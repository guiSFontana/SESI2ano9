#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    if (nota1 < 0 || nota1 > 10) {
        printf("Primeira nota invalida.\n");
        return 0;
    }

    if (nota2 < 0 || nota2 > 10) {
        printf("Segunda nota invalida.\n");
        return 0;
    }

    media = (nota1 + nota2) / 2;

    printf("Media: %.2f\n", media);

    return 0;
}