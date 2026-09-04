#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite os tres lados: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A <= 0 || B <= 0 || C <= 0) {
        printf("Os lados devem ser maiores que zero.\n");
    }
    else if (A < B + C && B < A + C && C < A + B) {

        if (A == B && B == C)
            printf("Triangulo equilatero.\n");
        else if (A == B || A == C || B == C)
            printf("Triangulo isosceles.\n");
        else
            printf("Triangulo escaleno.\n");

    } else {
        printf("Os valores nao formam um triangulo.\n");
    }

    return 0;
}