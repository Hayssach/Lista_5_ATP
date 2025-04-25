#include <stdio.h>
#include <stdlib.h>

// Função que calcula o IMC e retorna um valor inteiro conforme a classificação
int calcula_imc(float peso, float altura) {
    float imc = peso / (altura * altura);

    if (imc < 18.5)
        return 0; // Magreza
    else if (imc < 25.0)
        return 1; // Saudável
    else if (imc < 30.0)
        return 2; // Sobrepeso
    else
        return 3; // Obesidade
}

// Função que imprime o resultado do IMC por extenso (sem switch-case)
void imprima_imc(float peso, float altura) {
    int resultado = calcula_imc(peso, altura);

    if (resultado == 0)
        printf("Magreza\n");
    else if (resultado == 1)
        printf("Saudável\n");
    else if (resultado == 2)
        printf("Sobrepeso\n");
    else if (resultado == 3)
        printf("Obesidade\n");
}

// Exemplo de uso
int main() {
    float peso, altura;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    imprima_imc(peso, altura);

    return 0;
}
