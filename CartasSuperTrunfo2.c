#include <stdio.h>

int main() {

    char nome[50];
    int populacao;
    int numero_de_pontos_turisticos;
    float area;
    float pib;
    char codigo_da_carta;
    char estado_da_cidade[50];
    float densidade_populacional;
    float pib_per_capita;

     printf("**Super Trunfo de Cidades Carta 1**\n");
    
    // 1. Entrada de dados do usuario - Usuario deve inserir os dados
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite o estado da cidade: \n");
    scanf("%s", estado_da_cidade);

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

    // Cálculo de atributos adicionais
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;
   
    
    
    // 2. Exibir os dados inseridos pelo usuario de forma organizada
    printf("\n--- Dados da carta 1 ---\n");
    printf("Nome da cidade: %s\n", nome);
    printf("Estado da cidade: %s\n", estado_da_cidade);
    printf("Populacao da cidade: %d\n", populacao);
    printf("Numero de pontos turisticos da cidade: %d\n", numero_de_pontos_turisticos);
    printf("Area da cidade: %.2f km2\n", area);
    printf("PIB da cidade: %.2f bilhoes\n", pib);
    printf("Codigo da carta da cidade: %c\n", codigo_da_carta);
    printf("Densidade populacional da cidade: %.6f hab/km2\n", densidade_populacional);
    printf("PIB per capita da cidade: %.7f reais\n", pib_per_capita);

    
    printf("**Super Trunfo de Cidades Carta 2**\n");
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite o estado da cidade: \n");
    scanf("%s", estado_da_cidade);

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

    // Cálculo de atributos adicionais da Carta 2
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    
    // 2. Exibir os dados inseridos pelo usuario de forma organizada da Carta 2
    printf("\n--- Dados da carta 2 ---\n");
    
    printf("Nome da cidade: %s\n", nome);
    printf("Estado da cidade: %s\n", estado_da_cidade);
    printf("Populacao da cidade: %d\n", populacao);
    printf("Numero de pontos turisticos da cidade: %d\n", numero_de_pontos_turisticos);
    printf("Area da cidade: %.2f km2\n", area);
    printf("PIB da cidade: %.2f bilhoes\n", pib);
    printf("Codigo da carta da cidade: %c\n", codigo_da_carta);
    printf("Densidade populacional da cidade: %.6f hab/km2\n", densidade_populacional);
    printf("PIB per capita da cidade: %.7f reais\n", pib_per_capita);
    
    return 0;
    
