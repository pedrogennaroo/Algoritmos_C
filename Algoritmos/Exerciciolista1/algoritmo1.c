#include <stdio.h>

int main(){
    int Celsius=0;

    printf("\n Coloque a temperatura em Celsius:");
    scanf ("%d", &Celsius );

    float Processamento = Celsius * 1.8;
    float Fahrenheit = Processamento + 32;

printf ("A temperatura convertida em Fahrenheit e de: %.2f", Fahrenheit );

return 0;
}