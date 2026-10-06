#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 0, c = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        a += i;

    for (i = 1; i <= 2 * n - 1; i++) {
        if (i % 2 == 0)
            b -= i;
        else
            b += i;
    }

    for (i = 1; i <= n; i++)
        c += 2 * i - 1;

    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);

    return 0;
}