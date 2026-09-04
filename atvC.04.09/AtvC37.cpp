#include <stdio.h>

int main() {
    int minutos, horas;
    float valor;

    printf("Digite o tempo de estacionamento em minutos: ");
    scanf("%d", &minutos);

    if (minutos <= 0) {
        printf("Tempo invalido.\n");
        return 0;
    }

    // Arredonda as horas para cima
    horas = (minutos + 59) / 60;

    if (horas == 1)
        valor = 1.00;
    else if (horas <= 4)
        valor = 1.40;
    else
        valor = 2.00;

    printf("Tempo cobrado: %d hora(s)\n", horas);
    printf("Valor a pagar: R$ %.2f\n", valor);

    return 0;
}