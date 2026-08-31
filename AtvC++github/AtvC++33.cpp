#include <stdio.h>

int main() {
    float lado, area;

    scanf("%f", &lado);

    area = lado * lado;

    printf("%.2f\n", area);

    return 0;
}