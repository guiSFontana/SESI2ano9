#include <stdio.h>

int main() {
    float raio, altura, volume;
    const float PI = 3.141592;

    scanf("%f %f", &raio, &altura);

    volume = PI * raio * raio * altura;

    printf("%.2f\n", volume);

    return 0;
}