#include <stdio.h>

int main() {
    int total, horas, minutos, segundos;

    scanf("%d", &total);

    horas = total / 3600;
    total = total % 3600;

    minutos = total / 60;
    segundos = total % 60;

    printf("%d horas\n", horas);
    printf("%d minutos\n", minutos);
    printf("%d segundos\n", segundos);

    return 0;
}