#include <stdio.h>

int main() {
    int n, milhar, centena, dezena, unidade;

    scanf("%d", &n);

    milhar = n / 1000;
    centena = (n / 100) % 10;
    dezena = (n / 10) % 10;
    unidade = n % 10;

    printf("%d\n", milhar);
    printf("%d\n", centena);
    printf("%d\n", dezena);
    printf("%d\n", unidade);

    return 0;
}