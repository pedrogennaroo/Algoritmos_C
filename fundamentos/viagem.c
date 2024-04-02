/*
viagem
*/

#include <stdio.h>

int main() {
    float distancia, media_km_litro, valor_gasolina, valor_etanol;
    float consumo_gasolina, consumo_etanol, gasto_gasolina, gasto_etanol;
    
    printf("Digite a distancia da viagem em quilometros: ");
    scanf("%f", &distancia);
    
    printf("Digite a media de quilometros por litro do veiculo: ");
    scanf("%f", &media_km_litro);
    
    printf("Digite o valor do litro de gasolina: ");
    scanf("%f", &valor_gasolina);
    
    printf("Digite o valor do litro de etanol: ");
    scanf("%f", &valor_etanol);
    
    consumo_gasolina = distancia / media_km_litro;
    consumo_etanol = consumo_gasolina * 0.7; 
    
    gasto_gasolina = consumo_gasolina * valor_gasolina;
    gasto_etanol = consumo_etanol * valor_etanol;
    
    printf("O gasto total com gasolina sera de: R$ %.2f\n", gasto_gasolina);
    printf("O gasto total com etanol sera de: R$ %.2f\n", gasto_etanol);
    
    return 0;
}