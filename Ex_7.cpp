#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359

// Função que calcula o perímetro e a área de um círculo
void calcular_circulo(float r, float *p, float *a) {
    *p = 2 * PI * r;
    *a = PI * r * r;
}

int main() {
    float raio, perimetro, area;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    calcular_circulo(raio, & perimetro, &area);

    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);

    return 0;
}
