#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359

// Função que calcula o perímetro e a área de um círculo usando ponteiros
void calcular_circulo(float raio, float *perimetro, float *area) {
    *perimetro = 2 * PI * raio;
    *area = PI * raio * raio;
}

// Exemplo de uso
int main() {
    float raio, p, a;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    calcular_circulo(raio, &p, &a);

    printf("Perímetro: %.2f\n", p);
    printf("Área: %.2f\n", a);

    return 0;
}
