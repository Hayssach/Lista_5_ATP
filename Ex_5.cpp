#include <stdio.h>
#include <stdlib.h>

int calcula_imc(float p, float h) {
    float imc = p / (h * h);

    if (imc < 18.5)
        return 0; // Magreza
    else if (imc < 25.0)
        return 1; // Saudável
    else if (imc < 30.0)
        return 2; // Sobrepeso
    else
        return 3; // Obesidade
}

// Função que imprime o resultado do IMC
void imprima_imc(float peso, float high) {
    int r = calcula_imc(peso, high);

    if (r == 0)
        printf("Magreza\n");
    else if (r == 1)
        printf("Saudável\n");
    else if (r == 2)
        printf("Sobrepeso\n");
    else if (r == 3)
        printf("Obesidade\n");
}

int main() {
    float q, a;

    printf("Digite o peso (kg): ");
    scanf("%f", &q);

    printf("Digite a altura (m): ");
    scanf("%f", &a);

    imprima_imc(q, a);

    return 0;
}
