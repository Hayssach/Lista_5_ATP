#include <stdio.h>
#include <stdlib.h>

// Fun��o que verifica se um n�mero � pal�ndromo
int eh_palindromo(int numero) {
    int original = numero;
    int reverso = 0;

    // Invertemos o n�mero
    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    // Compara o original com o n�mero invertido
    if (original == reverso)
        return 1;
    else
        return 0;
}

// Exemplo de uso
int main() {
    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if (eh_palindromo(num))
        printf("� pal�ndromo!\n");
    else
        printf("N�o � pal�ndromo.\n");

    return 0;
}
