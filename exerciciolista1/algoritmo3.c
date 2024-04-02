#include <stdio.h>

int main(){
    int Reais=0;

    printf("\n quantos reais voce quer converter em dolar?");
    scanf ("%d", &Reais );

    float Dolar = Reais * 4.98;


printf ("A quantidade de dolares e de: %.2f", Dolar );
}
