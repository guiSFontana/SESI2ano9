#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z;
    float geometrica, ponderada, harmonica, aritmetica;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Os numeros devem ser maiores que zero.\n");
        return 0;
    }

    geometrica = pow(x * y * z, 1.0 / 3.0);
    ponderada = (x + 2 * y + 3 * z) / 6;
    harmonica = 3.0 / ((1.0 / x) + (1.0 / y) + (1.0 / z));
    aritmetica = (x + y + z) / 3;

    printf("Media geometrica: %.2f\n", geometrica);
    printf("Media ponderada: %.2f\n", ponderada);
    printf("Media harmonica: %.2f\n", harmonica);
    printf("Media aritmetica: %.2f\n", aritmetica);

    return 0;
}