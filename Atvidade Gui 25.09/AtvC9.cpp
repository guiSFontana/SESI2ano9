#include <stdio.h>

int main() {
    int n, i, numero = 1;

    printf("Digite N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", numero);
        numero += 2;
    }

    return 0;
}