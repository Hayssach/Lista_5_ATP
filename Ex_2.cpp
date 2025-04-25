#include <stdio.h>
#include <stdlib.h>

// Variáveis globais
float a, b, c;

// Função quadrática completa: f(x) = ax² + bx + c
float funcao_quadratica(float x) {
    return a * x * x + b * x + c;
}

int main() {
    float x;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    float resultado = funcao_quadratica(x);

    printf("f(%.2f) = %.2f\n", x, resultado);

    return 0;
}
