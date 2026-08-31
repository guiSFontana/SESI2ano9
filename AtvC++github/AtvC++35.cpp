#include <stdio.h>
#include <math.h>

int main() {
    float a, b, hipotenusa;

    scanf("%f %f", &a, &b);

    hipotenusa = sqrt(a * a + b * b);

    printf("%.2f\n", hipotenusa);

    return 0;
}