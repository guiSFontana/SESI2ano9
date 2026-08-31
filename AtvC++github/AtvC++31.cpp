#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("Antecessor: %d\n", n - 1);
    printf("Sucessor: %d\n", n + 1);

    return 0;
}