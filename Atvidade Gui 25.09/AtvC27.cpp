#include <stdio.h>

int main() {
    int n, i;
    double h = 0;

    printf("Digite N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        h += 1.0 / i;

    printf("H(%d) = %.6f\n", n, h);

    return 0;
}