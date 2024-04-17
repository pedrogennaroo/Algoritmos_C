#include <stdio.h>

int main() {
    int soma = 0;
    int contador = 0;
    
 while (contador <= 1001) {
        soma = soma + contador;
        contador++;
 }
printf("O total da soma é: %d \n", soma);

    return 0;
}