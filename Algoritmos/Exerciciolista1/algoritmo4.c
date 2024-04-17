#include <stdio.h>

float calcularParcela(float valorImovel, int numParcelas) {
    float parcela = valorImovel / numParcelas;
    return parcela;
}

int main() {
    float valorImovel;
    int numParcelas;

    printf("Digite o valor do imovel: ");
    scanf("%f", &valorImovel);

    printf("Digite o numero de parcelas desejado: ");
    scanf("%d", &numParcelas);

    float parcela = calcularParcela(valorImovel, numParcelas);
    printf("O valor da parcela mensal e: %.2f\n", parcela);
    printf("A quantidade de meses para pagar e de: %d\n", numParcelas);

    return 0;
}

