#include <stdio.h>

void encontrarDivisores(int numero) {
    printf("Os divisores de %d sao: ", numero);
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    encontrarDivisores(numero);

    return 0;  
}


