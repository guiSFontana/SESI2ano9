#include <stdio.h>

int main() {
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota < 0 || nota > 10 || faltas < 0) {
        printf("Dados invalidos.\n");
        return 0;
    }

    if (faltas > 20) {
        if (nota >= 9.0)
            conceito = 'B';
        else if (nota >= 7.5)
            conceito = 'C';
        else if (nota >= 5.0)
            conceito = 'D';
        else
            conceito = 'E';
    }
    else {
        if (nota >= 9.0)
            conceito = 'A';
        else if (nota >= 7.5)
            conceito = 'B';
        else if (nota >= 5.0)
            conceito = 'C';
        else if (nota >= 4.0)
            conceito = 'D';
        else
            conceito = 'E';
    }

    printf("Conceito: %c\n", conceito);

    return 0;
}