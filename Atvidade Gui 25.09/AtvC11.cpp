#include <stdio.h>

int main() {
    int n, i;

    printf("Digite N: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
        printf("%d ", i);

    return 0;
}