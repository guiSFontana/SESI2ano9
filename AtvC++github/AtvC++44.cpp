#include <stdio.h>
#include <math.h>

int main() {
    float alturaDegrau, alturaDesejada;
    int degraus;

    scanf("%f %f", &alturaDegrau, &alturaDesejada);

    degraus = (int)ceil(alturaDesejada / alturaDegrau);

    printf("%d\n", degraus);

    return 0;
}