/*
Nota do aluno 
*/

#include <stdio.h>

int main() {
    printf("---Calcula media--- ");

    float prova1 = 0;
    float prova2 = 0;

    printf("\n Digite a nota da primeira prova: ");
    scanf("%f", &prova1);

    printf("\n Digite a nota da segunda prova: ");
    scanf("%f", &prova2);

    float soma = prova1 + prova2;
    float media = soma / 2;


if (media >= 6.0) {
   printf ("O aluno foi aprovado com media %.2f", media);
} else {
   printf ("Aluno esta reprovado com media: %.2f", media); 
}

   
    return 0;
}