#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d eh um numero par.\n", numero);
    } else {
        printf("%d eh um numero impar.\n", numero);
    }

    return 0;
}
