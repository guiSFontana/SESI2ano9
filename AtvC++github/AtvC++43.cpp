#include <stdio.h>

int main() {
    float total, comDesconto, parcela;
    float comissaoVista, comissaoParcelada;

    scanf("%f", &total);

    comDesconto = total * 0.90;
    parcela = comDesconto / 3;

    comissaoVista = comDesconto * 0.05;
    comissaoParcelada = total * 0.05;

    printf("Total com desconto: %.2f\n", comDesconto);
    printf("Parcela em 3x: %.2f\n", parcela);
    printf("Comissao a vista: %.2f\n", comissaoVista);
    printf("Comissao parcelada: %.2f\n", comissaoParcelada);

    return 0;
}