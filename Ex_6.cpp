#include <stdio.h>
#include <stdlib.h>

// Função que verifica-se um é palíndromo
int eh_palindromo(int num) {
    int o = num;
    int r = 0;

    // Invertemos o número
    while (num > 0) {
        int di = num % 10;
        r = r * 10 + d;
        num /= 10;
    }

    // Compara o original com o invertido
    if (o == r)
        return 1;
    else
        return 0;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (eh_palindromo(numero))
        printf("É palíndromo!\n");
    else
        printf("Não é palíndromo.\n");

    return 0;
}
