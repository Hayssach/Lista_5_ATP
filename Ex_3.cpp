#include <stdio.h>
#include <stdlib.h>

// função para converter celsius para fahrenheit 
float c_para_f(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

int main() {
    float cel;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &cel);

    float fah = c_para_f(c);
    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", cel, fah);
    getchar();
    return 0;
}
