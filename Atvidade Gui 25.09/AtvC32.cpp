#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, d1, d2;

    srand(time(NULL));

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;

        printf("Lancamento %d: d1=%d d2=%d ", i, d1, d2);

        if (d1 > d2)
            printf(">\n");
        else if (d1 < d2)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}