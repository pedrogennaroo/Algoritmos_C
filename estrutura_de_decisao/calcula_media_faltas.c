#include <stdio.h>

int main() {

    float prova1, prova2;
    int faltas;
    float media;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &prova1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &prova2);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    media = (prova1 + prova2) / 2;

    if (media >= 6.0 && faltas <= 4) {
        printf("Aluno aprovado com media %.2f e faltas dentro do limite", media);
    } else if (faltas > 4) {
        printf("Aluno reprovado, teve %d faltas e sua media foi de %.2f", faltas, media);
    } else {
        printf("Aluno reprovado por media %.2f", media);
    }

    return 0;
}