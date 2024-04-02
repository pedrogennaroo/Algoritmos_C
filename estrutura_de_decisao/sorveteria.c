#include <stdio.h>

int main() {
      printf("---S para sim e N para nao--- ");
    char dinheiro, chuva;

    printf("Voce tem dinheiro para ir a sorveteria? (s/n): ");
    scanf(" %c", &dinheiro);

    printf("Esta chovendo? (s/n): ");
    scanf(" %c", &chuva);

    if ((dinheiro == 's' || dinheiro == 'S') && (chuva == 'n' || chuva == 'N')) {
        printf("Voce pode ir a sorveteria no final de semana!\n");
    } else {
        printf("Voce nao pode ir a sorveteria no final de semana  :( \n");
    }

    return 0;
}
