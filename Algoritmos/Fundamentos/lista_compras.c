#include <stdio.h>
/*
*algoritmo que calcula o total da
*lista de compras
*-declarar 3 produtos da sua lista de compras
*-calcular o total da lista
*-exibir o valor ao final
*/

int main() {
    char cocacola []= "Coca Cola zero";
    char doritos []= "Doritos"; 
    char charge []= "Charge";

    float ValorCocaCola = 9.99;
    float ValorDoritos = 13.99;
    float ValorCharge = 2.99;

    //Processamento
    float totalista = ValorCocaCola + ValorDoritos + ValorCharge;

    //Saida
    printf("O valor totalda lista e: %.2f", totalista);

    return(0);
}