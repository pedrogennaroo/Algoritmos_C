#include <stdio.h>

int main() {
    int mes;

    printf("Digite o numero correspondente ao mes atual: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("Janeiro: 01  Dia Mundial da PAZ\n");
            break;
        case 2:
            printf("Fevereiro: 12  Carnaval\n");
            break;
        case 3:
            printf("Março: 08  Dia Internacional da Mulher\n");
            break;
        case 4:
            printf("Abril: 22  Dia do Descobrimento do Brasil\n");
            break;
        case 5:
            printf("Maio: 12  Dia das Maes\n");
            break;
        case 6:
            printf("Junho: 05  Dia Internacional do Meio Ambiente\n");
            break;
        case 7:
            printf("Julho: Ferias escolares.\n");
            break;
        case 8:
            printf("Agosto: 11  Dia do Estudante/ Dia dos Pais\n");
            break;
        case 9:
            printf("Setembro: 07  Dia da Independencia do Brasil\n");
            break;
        case 10:
            printf("Outubro: 12  Dia das Crianças / Dia de Nossa Senhora Aparecida\n");
            break;
        case 11:
            printf("Novembro: 20  Dia Nacional da Consciencia Negra\n");
            break;
        case 12:
            printf("Dezembro: 25  Natal\n");
            break;
        default:
            printf("Numero de mes invalido.\n");
            break;
    }

    return 0;
}
