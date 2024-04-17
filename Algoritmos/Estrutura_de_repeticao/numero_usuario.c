#include <stdio.h>

int main() {
    int limite;

    printf("Digite ate que numero voce quer imprimir: ");
    scanf("%d", &limite);

    for (int i = 0; i <= limite; i++) {
        printf("numero %d\n", i);
    }

    return 0;
}
