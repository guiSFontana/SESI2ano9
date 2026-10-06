#include <stdio.h>

int main() {
    int n, i;
    double fatorial = 1;
    double E = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
        E += 1.0 / fatorial;
    }

    printf("E = %.6f\n", E);

    return 0;
}