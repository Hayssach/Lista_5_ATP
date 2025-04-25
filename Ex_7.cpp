#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359

// Fun��o que calcula o per�metro e a �rea de um c�rculo usando ponteiros
void calcular_circulo(float raio, float *perimetro, float *area) {
    *perimetro = 2 * PI * raio;
    *area = PI * raio * raio;
}

// Exemplo de uso
int main() {
    float raio, p, a;

    printf("Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    calcular_circulo(raio, &p, &a);

    printf("Per�metro: %.2f\n", p);
    printf("�rea: %.2f\n", a);

    return 0;
}
