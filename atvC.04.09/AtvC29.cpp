#include <stdio.h>

int main() {
    int a, b, resposta, acertos = 0;

    printf("PROVA DE MATEMATICA\n\n");

    a = 12;
    b = 25;
    printf("1) Quanto e %d + %d? ", a, b);
    scanf("%d", &resposta);

    if (resposta == a + b) {
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta e %d.\n", a + b);
    }

    a = 15;
    b = 23;
    printf("\n2) Quanto e %d + %d? ", a, b);
    scanf("%d", &resposta);

    if (resposta == a + b) {
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta e %d.\n", a + b);
    }

    a = 31;
    b = 14;
    printf("\n3) Quanto e %d + %d? ", a, b);
    scanf("%d", &resposta);

    if (resposta == a + b) {
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta e %d.\n", a + b);
    }

    a = 42;
    b = 17;
    printf("\n4) Quanto e %d + %d? ", a, b);
    scanf("%d", &resposta);

    if (resposta == a + b) {
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta e %d.\n", a + b);
    }

    a = 26;
    b = 33;
    printf("\n5) Quanto e %d + %d? ", a, b);
    scanf("%d", &resposta);

    if (resposta == a + b) {
        printf("Correto!\n");
        acertos++;
    } else {
        printf("Errado! A resposta correta e %d.\n", a + b);
    }

    printf("\nVoce acertou %d de 5 perguntas.\n", acertos);

    return 0;
}