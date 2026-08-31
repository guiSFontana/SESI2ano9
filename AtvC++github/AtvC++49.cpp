#include <stdio.h>

int main() {
    int hora, minuto, segundo;
    int duracao, inicio, final;
    int horaFinal, minutoFinal, segundoFinal;

    scanf("%d %d %d", &hora, &minuto, &segundo);
    scanf("%d", &duracao);

    inicio = hora * 3600 + minuto * 60 + segundo;
    final = (inicio + duracao) % 86400;

    horaFinal = final / 3600;
    final = final % 3600;

    minutoFinal = final / 60;
    segundoFinal = final % 60;

    printf("%02d:%02d:%02d\n",
           horaFinal, minutoFinal, segundoFinal);

    return 0;
}