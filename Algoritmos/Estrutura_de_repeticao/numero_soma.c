#include <stdio.h>

int main() {
    int soma = 0;

   
    for (int i = 1; i <= 100; i++) {
        soma += i; 
     
        if (i == 1) {
            printf("1");
        } else {
            printf(" + %d", i);
        }
    }


    printf(" = %d\n", soma);

    return 0;
}

