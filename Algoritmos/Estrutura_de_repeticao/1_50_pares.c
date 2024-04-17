#include <stdio.h>

int main()
{
    int soma = 0;
    int contador = 0;

    while (contador <= 50){
        if (contador % 2 == 0) {
            soma += contador;
        }
        contador++;
    }
    printf("o total da soma dos numeros pares ate 50 é: %d", soma);
    
    return 0;
}