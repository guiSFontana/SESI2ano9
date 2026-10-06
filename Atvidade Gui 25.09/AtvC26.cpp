#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    i = n + 1;

    while (i % 11 != 0 && i % 13 != 0 && i % 17 != 0)
        i++;

    printf("Primeiro multiplo = %d\n", i);

    return 0;
}