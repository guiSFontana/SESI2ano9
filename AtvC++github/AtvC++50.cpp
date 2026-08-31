#include <stdio.h>

int main() {
    int idade, anoAtual, anoNascimento;

    scanf("%d %d", &idade, &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("%d\n", anoNascimento);

    return 0;
}