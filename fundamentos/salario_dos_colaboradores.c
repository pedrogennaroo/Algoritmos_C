#include <stdio.h>

int main() {
    float salario_atual, percentual_aumento, novo_salario;
    
    printf("Digite o salario atual do colaborador: ");
    scanf("%f", &salario_atual);
    
    printf("Digite o percentual de aumento do salario (em porcentagem): ");
    scanf("%f", &percentual_aumento);
    
    percentual_aumento = percentual_aumento / 100.0;
    
    novo_salario = salario_atual + (salario_atual * percentual_aumento);
    
    printf("O novo salario do colaborador e: R$ %.2f\n", novo_salario);
    
    return 0;
}