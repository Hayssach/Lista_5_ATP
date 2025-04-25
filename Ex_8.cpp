#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    double d = distancia(x1, y1, x2, y2);
    printf("Distância entre os pontos: %.2f\n", d);

    return 0;
}

