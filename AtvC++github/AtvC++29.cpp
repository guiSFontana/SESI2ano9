#include <stdio.h>

int main() {
    float n1, n2, n3, n4, media;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("%.2f\n", media);
    return 0;
}