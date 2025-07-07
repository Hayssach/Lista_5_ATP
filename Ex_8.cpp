#include <stdio.h>
#include <stdlib.h>
#include <math.h> // função math

double distancia(double b1, double d1, double b2, double d2) {
    return sqrt(pow(b2 - d1, 2) + pow(b2 - d1, 2));
}

int main() {
    double a1, c1, a2, c2;

    printf("Digite as coordenadas do primeiro ponto (a1 c1): ");
    scanf("%lf %lf", &a1, &c1);

    printf("Digite as coordenadas do segundo ponto (s2 c2): ");
    scanf("%lf %lf", &a2, &c2);

    double d = distancia(a1, c1, a2, c2);
    printf("Distância entre os pontos: %.2f\n", d);

    return 0;
}

