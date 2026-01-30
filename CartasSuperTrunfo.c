#include <stdio.h>

int main(){
  printf("desafio super trunfo!\n");

    char nome[50];
    int populacao;
    int numero_de_pontos_turisticos;
    float area;
    float pib;
    char codigo_da_carta;
    char estado_da_cidade[50];

     // 1. Entrada de dados do usuario - Usuario deve inserir os dados
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite o estado da cidade: \n");
    scanf("%s", &estado_da_cidade);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao);
    
    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    
    printf("Digite a area da cidade: \n");
    scanf("%f", &area);
   
    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);
    
    printf("Digite o codigo da carta da cidade: \n");
    scanf(" %c", &codigo_da_carta);


} 
