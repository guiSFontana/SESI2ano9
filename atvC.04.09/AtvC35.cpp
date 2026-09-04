#include <stdio.h>

int main() {
    int dia, mes, ano;
    int diasNoMes;
    int bissexto;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12) {
        printf("Data invalida.\n");
        return 0;
    }

    bissexto = (ano % 400 == 0) ||
               (ano % 4 == 0 && ano % 100 != 0);

    switch (mes) {
        case 2:
            if (bissexto)
                diasNoMes = 29;
            else
                diasNoMes = 28;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            diasNoMes = 30;
            break;

        default:
            diasNoMes = 31;
    }

    if (dia >= 1 && dia <= diasNoMes)
        printf("Data valida.\n");
    else
        printf("Data invalida.\n");

    return 0;
}