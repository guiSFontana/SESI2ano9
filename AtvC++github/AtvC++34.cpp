#include <stdio.h>

int main() {
    float raio, area;
    const float PI = 3.141592;

    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("%.2f\n", area);

    return 0;
}