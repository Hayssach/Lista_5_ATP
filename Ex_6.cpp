#include <stdio.h>
#include <stdlib.h>

// Função que verifica se um número é palíndromo
int eh_palindromo(int numero) {
    int original = numero;
    int reverso = 0;

    // Invertemos o número
    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    // Compara o original com o número invertido
    if (original == reverso)
        return 1;
    else
        return 0;
}

// Exemplo de uso
int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (eh_palindromo(num))
        printf("É palíndromo!\n");
    else
        printf("Não é palíndromo.\n");

    return 0;
}
