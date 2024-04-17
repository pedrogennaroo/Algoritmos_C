#include <stdio.h>

int main() {
    float temperatura;

   
    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);


    if (temperatura <= 13) {
        printf("Esta frio.\n");
    } else if (temperatura <= 25) {
        printf("Esta agradavel.\n");
    } else if (temperatura <= 32) {
        printf("Esta calor.\n");
    } else {
        printf("Esta muito calor.\n");
    }

    return 0;
}
