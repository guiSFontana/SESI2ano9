#include <stdio.h>

int main() {
    int dia, mes, ano;
    int valido = 1;
    int bissexto;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    // Verifica o ano
    if (ano <= 0 || ano > 2008) {
        valido = 0;
    }

    // Verifica o mês
    if (mes <= 0 || mes > 12) {
        valido = 0;
    }

    // Verifica se o ano é bissexto
    bissexto = (ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0);

    // Verifica o dia
    if (dia <= 0) {
        valido = 0;
    } else if (mes == 2) {
        if (bissexto) {
            if (dia > 29)
                valido = 0;
        } else {
            if (dia > 28)
                valido = 0;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if (dia > 30)
            valido = 0;
    } else {
        if (dia > 31)
            valido = 0;
    }

    if (valido)
        printf("Data valida\n");
    else
        printf("Data invalida\n");

    return 0;
}