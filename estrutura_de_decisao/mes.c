#include <stdio.h>

int main() {
    int mes;

    printf("Digite o numero correspondente ao mes atual: ");
    scanf("%d", &mes);

    if (mes == 1) 
    { printf("Janeiro: 01  Dia Mundial da PAZ\n");

    } else if (mes == 2) {
        printf("Fevereiro: 12  Carnaval\n");

    } else if (mes == 3) {
        printf("Marco: 08  Dia Internacional da Mulher\n");

    } else if (mes == 4) {
        printf("Abril: 22  Dia do Descobrimento do Brasil\n");

    } else if (mes == 5) {
        printf("Maio: 12  Dia das Maes\n");

    } else if (mes == 6) {
        printf("Junho: 05  Dia Internacional do Meio Ambiente\n");

    } else if (mes == 7) {
        printf("Julho: Ferias escolares.\n");

    } else if (mes == 8) {
        printf("Agosto: 11 Dia do Estudante/ Dia dos Pais\n");

    } else if (mes == 9) {
        printf("Setembro: 07  Dia da Independencia do Brasil\n");

    } else if (mes == 10) {
        printf("Outubro: 12  Dia das Crianças / Dia de Nossa Senhora Aparecida\n");

    } else if (mes == 11) {
        printf("Novembro: 20  Dia Nacional da Consciencia Negra\n");

    } else if (mes == 12) {
        printf("Dezembro: 25  Natal\n");

    } else {
        printf("Numero de mes invalido.\n");
    }

    return 0;
}
