/*
area circulo
*/

#include <stdio.h>
#define PI 3.14

int main(){
    float raio, area;

    printf("digite o raio do circulo");

    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A area do circulo é: %.2f\n" , area);

    return 0;

}