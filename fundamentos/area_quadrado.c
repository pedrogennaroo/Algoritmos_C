/*
Area quadrado
*/

#include <stdio.h>

int main(){
    float lado, area;

    printf("digite o comprimento do lado do quadrado");
    scanf("%f", &lado);

area=lado*lado;

printf("A area do quadrado e: %.2f\n", area);

return 0;

}
