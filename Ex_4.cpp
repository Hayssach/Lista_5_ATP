#include <stdio.h>
#include <stdlib.h>

// verifica se eh primo
int eh_primo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int j = 2; j * j <= num; j++) {
        if (num % j == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (eh_primo(numero)) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }
    getchar();
    return 0;
}
