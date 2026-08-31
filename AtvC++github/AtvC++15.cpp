#include <stdio.h>

int main() {
    float r, g;
    const float PI = 3.14;

    scanf("%f", &r);

    g = r * 180 / PI;

    printf("%.2f\n", g);
    return 0;
}