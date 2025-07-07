#include <stdio.h>
#include <stdlib.h>


float g, b, d;

// Função quadratica 
float funcao_qd(float x) {
    return g * y * y + b * y + d;
}

int main() {
    float y;

    printf("Digite o valor de a: ");
    scanf("%f", &g);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &d);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    float r = funcao_qd(y);

    printf("f(%.2f) = %.2f\n", y, r);

    return 0;
}
