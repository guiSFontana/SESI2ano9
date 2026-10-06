#include <stdio.h>

int palindromo(int n) {
    int original = n;
    int invertido = 0;

    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }

    return original == invertido;
}

int main() {
    int i, j, produto;
    int maior = 0;

    for (i = 100; i <= 999; i++) {
        for (j = i; j <= 999; j++) {
            produto = i * j;

            if (produto > maior && palindromo(produto))
                maior = produto;
        }
    }

    printf("Maior palindromo = %d\n", maior);

    return 0;
}