#include <stdio.h>
#include <stdlib.h>

// Função que verifica se um número é primo
int eh_primo(int numero) {
    if (numero < 2) {
        return 0;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (eh_primo(num)) {
        printf("%d é primo.\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }

    return 0;
}
