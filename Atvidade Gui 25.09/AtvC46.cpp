#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, chute, tentativas = 0;

    srand(time(NULL));
    numero = rand() % 1000 + 1;

    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute < numero)
            printf("O chute e menor.\n");
        else if (chute > numero)
            printf("O chute e maior.\n");
        else
            printf("Acertou!\n");

    } while (chute != numero);

    printf("Tentativas: %d\n", tentativas);

    return 0;
}