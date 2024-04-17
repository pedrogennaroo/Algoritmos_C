#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int primeiro_par = 0; 

    printf("Digite um numero par: ");
    scanf("%d", &numero);


    for (int i = 2; i <= numero; i += 2) {
        if (!primeiro_par) {
            printf("%d", i); 
            primeiro_par = 1; 
        } else {
            printf(" + %d", i); 
        }
        soma += i; 
    }

    printf(" = %d\n", soma);

    return 0;
}
