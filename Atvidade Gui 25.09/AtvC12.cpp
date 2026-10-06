#include <stdio.h>

int main() {
    int n, i;

    printf("Digite N: ");
    scanf("%d", &n);

    for (i = n; i >= 0; i--)
        printf("%d ", i);

    return 0;
}