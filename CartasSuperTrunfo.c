#include <stdio.h>

int main(){
    char estado ;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float densidade;
    float pib;
    float capita;
    int turistico;

    char estado1 ;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float densidade1;
    float pib1;
    float capita1;
    int turistico1;   

    printf("Digite qual será a letra do seu estado (A-H):\n");
    scanf(" %c", &estado);
    printf("Selecione o código para a carta (A01-A04):\n");
    scanf("%s", codigo);
    printf("Digite qual o nome do estado:\n");
    scanf(" %[^\n]", nome);
    printf("Digite qual é a população desse estado:\n");
    scanf("%d", &populacao);
    printf("Digite a área do estado em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib);
    printf("Digite quantos pontos turísticos tem o estado:\n");
    scanf("%d", &turistico);

    printf("Digite qual será a letra do seu estado (A-H):\n");
    scanf(" %c", &estado1);
    printf("Selecione o código para a carta (A01-A04):\n");
    scanf("%s", codigo1);
    printf("Digite qual o nome do estado:\n");
    scanf(" %[^\n]", nome1);
    printf("Digite qual é a população desse estado:\n");
    scanf("%d", &populacao1);
    printf("Digite a área do estado em km²:\n");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turísticos tem o estado:\n");
    scanf("%d", &turistico1);

    densidade = populacao / area;

    capita = (pib * 1e9) / populacao;

    densidade1 = populacao1 / area1;

    capita1 = (pib1 * 1e9) / populacao1;

    printf("Parabéns, primeira carta cadastrada com sucesso :\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População do estado: %d\n", populacao);
    printf("Área em km²: %.2f km²\n", area);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("PIB per capita: %.2f reais\n", capita);
    printf("Número de pontos turísticos: %d\n", turistico);

    printf("Parabéns, segunda carta cadastrada com sucesso :\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População do estado: %d\n", populacao1);
    printf("Área em km²: %.2f km²\n", area1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("PIB per capita: %.2f reais\n", capita1);
    printf("Número de pontos turísticos: %d\n", turistico1);


    return 0;
}
