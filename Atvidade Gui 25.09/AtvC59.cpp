#include <stdio.h>

int main() {
    int habitantes, i, codigo;
    double kwh, consumo;
    double maior = 0, menor = 0;
    double soma = 0;
    double residencial = 0, comercial = 0, industrial = 0;

    printf("Numero de habitantes: ");
    scanf("%d", &habitantes);

    printf("Valor do kWh: ");
    scanf("%lf", &kwh);

    for (i = 1; i <= habitantes; i++) {
        printf("\nConsumo: ");
        scanf("%lf", &consumo);

        printf("Codigo (1-Residencial, 2-Comercial, 3-Industrial): ");
        scanf("%d", &codigo);

        if (i == 1)
            maior = menor = consumo;
        else {
            if (consumo > maior) maior = consumo;
            if (consumo < menor) menor = consumo;
        }

        soma += consumo;

        if (codigo == 1)
            residencial += consumo;
        else if (codigo == 2)
            comercial += consumo;
        else if (codigo == 3)
            industrial += consumo;
    }

    printf("\nMaior consumo: %.2f\n", maior);
    printf("Menor consumo: %.2f\n", menor);
    printf("Media: %.2f\n", soma / habitantes);
    printf("Residencial: %.2f\n", residencial);
    printf("Comercial: %.2f\n", comercial);
    printf("Industrial: %.2f\n", industrial);

    return 0;
}