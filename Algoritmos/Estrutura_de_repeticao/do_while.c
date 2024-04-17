#include <stdio.h>
int main(){

    int soma = 0;
    int parar = 0;

    do {
        int numero = 0;

        printf("digite um numero:");
        scanf ("%d", &numero);

        soma += numero;

        printf("digite 0 para continuar e 1 para parar \n");
        scanf("%d", &parar);
    } while (parar == 0);
   printf("a soma dos numeros e: %d", soma);

   return 0;
}