#include <stdio.h>
#include <stdlib.h>

// Fun��o que verifica se um n�mero � primo
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

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if (eh_primo(num)) {
        printf("%d � primo.\n", num);
    } else {
        printf("%d n�o � primo.\n", num);
    }

    return 0;
}
