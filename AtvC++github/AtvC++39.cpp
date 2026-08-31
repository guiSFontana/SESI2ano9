#include <stdio.h>

int main() {
    float premio = 780000.00;
    float primeiro, segundo, terceiro;

    primeiro = premio * 0.46;
    segundo = premio * 0.32;
    terceiro = premio - primeiro - segundo;

    printf("Primeiro: R$ %.2f\n", primeiro);
    printf("Segundo: R$ %.2f\n", segundo);
    printf("Terceiro: R$ %.2f\n", terceiro);

    return 0;
}