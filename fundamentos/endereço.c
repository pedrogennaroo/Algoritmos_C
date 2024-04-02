#include <stdio.h>
/*
Informações sobre o endereço
*/
int main()
{
    char logradouro[] = "Rua Riachuelo";
    int numero = 2244;
    char CEP[] = "13419-311";
    char Bairro[] = "Jardim Elite";
    char Cidade[] = "Piracicaba";
    char estado[] = "Sao Paulo";
    
    printf("---Meu endereco---");
    printf("\n Logradouro: %s", logradouro);
    printf("\n Numero: %d", numero);
    printf("\n CEP: %d", CEP);
    printf("\n Bairro: %s", Bairro);
    printf("\n Cidade: %s", Cidade);
    printf("\n Estado: %s", estado);



    return 0;
}