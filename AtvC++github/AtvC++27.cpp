#include <stdio.h>

int main() {
    float h, m;
    scanf("%f", &h);

    m = h * 10000;

    printf("%.2f\n", m);
    return 0;
}