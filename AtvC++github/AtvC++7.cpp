#include <stdio.h>

int main() {
    float f, c;
    scanf("%f", &f);

    c = 5.0 * (f - 32.0) / 9.0;

    printf("%.2f\n", c);
    return 0;
}