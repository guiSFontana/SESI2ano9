#include <stdio.h>
#include <string.h>

int main() {
    const char *unidades[] = {
        "", "um", "dois", "tres", "quatro",
        "cinco", "seis", "sete", "oito", "nove"
    };

    const char *dez_a_dezenove[] = {
        "dez", "onze", "doze", "treze", "quatorze",
        "quinze", "dezesseis", "dezessete",
        "dezoito", "dezenove"
    };

    const char *dezenas[] = {
        "", "", "vinte", "trinta", "quarenta",
        "cinquenta", "sessenta", "setenta",
        "oitenta", "noventa"
    };

    const char *centenas[] = {
        "", "cento", "duzentos", "trezentos",
        "quatrocentos", "quinhentos", "seiscentos",
        "setecentos", "oitocentos", "novecentos"
    };

    int n, letras = 0;

    for (n = 1; n <= 1000; n++) {

        if (n == 1000) {
            letras += strlen("mil");
        }
        else if (n < 10) {
            letras += strlen(unidades[n]);
        }
        else if (n < 20) {
            letras += strlen(dez_a_dezenove[n - 10]);
        }
        else if (n < 100) {
            letras += strlen(dezenas[n / 10]);

            if (n % 10 != 0)
                letras += strlen(unidades[n % 10]);
        }
        else {
            int c = n / 100;
            int resto = n % 100;

            if (n == 100) {
                letras += strlen("cem");
            } else {
                letras += strlen(centenas[c]);
            }

            if (resto > 0) {
                letras += 1;

                if (resto < 10) {
                    letras += strlen(unidades[resto]);
                }
                else if (resto < 20) {
                    letras += strlen(dez_a_dezenove[resto - 10]);
                }
                else {
                    letras += strlen(dezenas[resto / 10]);

                    if (resto % 10 != 0)
                        letras += strlen(unidades[resto % 10]);
                }
            }
        }
    }

    printf("Total de letras = %d\n", letras);

    return 0;
}