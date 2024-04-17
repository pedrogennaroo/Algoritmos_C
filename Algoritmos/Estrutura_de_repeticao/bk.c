#include <stdio.h>

int main() {
    int num_itens;
    float total = 0.0;
    float valor_desconto = 0.0;

    printf("bem vindo ao BK! quantos itens voce deseja comprar? ");
    scanf("%d", &num_itens);

    if (num_itens > 0) {
        printf("insira o preco de cada item:\n");
        for (int i = 1; i <= num_itens; i++) {
            float preco;
            printf("Preco do item %d: ", i);
            scanf("%f", &preco);
            total += preco;
        }

        char resposta;
        printf("voce tem um cupom de desconto? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 's') {
            printf("insira o valor do desconto: ");
            scanf("%f", &valor_desconto);
            total -= valor_desconto;
        }

        printf("o total da sua compra, com desconto, eh: R$%.2f\n", total);
    }

    return 0;
}