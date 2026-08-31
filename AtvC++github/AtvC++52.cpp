#include <stdio.h>

int main() {
    float a, b, c, premio, total;

    scanf("%f %f %f", &a, &b, &c);
    scanf("%f", &premio);

    total = a + b + c;

    printf("Amigo 1: %.2f\n", premio * a / total);
    printf("Amigo 2: %.2f\n", premio * b / total);
    printf("Amigo 3: %.2f\n", premio * c / total);

    return 0;
}