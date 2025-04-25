#include <stdio.h>
#include <stdlib.h>

// Função que converte Celsius para Fahrenheit
float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = celsius_para_fahrenheit(celsius);
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
