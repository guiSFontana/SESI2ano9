#include <stdio.h>

int main() {
    float g, r;
    const float PI = 3.14;

    scanf("%f", &g);

    r = g * PI / 180;

    printf("%.2f\n", r);
    return 0;
}