#include <stdio.h>

int main()
{
    int tabuada = 0;
    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &tabuada);

    int contador = 1;
    while (contador < 11)
    {
        int resultado = tabuada * contador;
        printf(" %d x %d = %d \n", tabuada, contador, resultado);
        contador++;
    }

    printf("O numero da tabuada é: %d", tabuada);
    return 0;
}
