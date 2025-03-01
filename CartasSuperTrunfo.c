#include <stdio.h>


int main(){
    //Primeira carta
    char estado, estado1;
    char codigo[4], codigo1[4];
    char nome[50], nome1[50];
    int populacao, populacao1;
    float area, area1;
    float densidade, densidade1;
    float pib, pib1;
    float capita, capita1;
    int turistico, turistico1; 
    float superpoder, superpoder1;  

 
    printf("Digite qual será a letra da pirmeira carta (A-H):\n");
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

    printf("Digite qual será a letra da segunda carta (A-H):\n");
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
    superpoder = populacao + area + pib + turistico + capita + (1 / densidade);

    densidade1 = populacao1 / area1;
    capita1 = (pib1 * 1e9) / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + turistico1 + capita1 + (1 / densidade1);



    printf("\nParabéns, primeira carta cadastrada com sucesso :\n");
    printf("Estado: %c.\n", estado);
    printf("Código da carta: %s.\n", codigo);
    printf("Nome da cidade: %s.\n", nome);
    printf("População do estado: %d.\n", populacao);
    printf("Área em km²: %.2f km².\n", area);
    printf("Densidade populacional: %.2f habitantes por km².\n", densidade);
    printf("PIB: %.2f bilhões de reais.\n", pib);
    printf("PIB per capita: %.2f reais.\n", capita);
    printf("Número de pontos turísticos: %d.\n", turistico);
    printf("Poder da carta : %f pontos\n", superpoder);



    printf("\nParabéns, segunda carta cadastrada com sucesso :\n");
    printf("Estado: %c.\n", estado1);
    printf("Código da carta: %s.\n", codigo1);
    printf("Nome da cidade: %s.\n", nome1);
    printf("População do estado: %d.\n", populacao1);
    printf("Área em km²: %.2f km².\n", area1);
    printf("Densidade populacional: %.2f habitantes por km².\n", densidade1);
    printf("PIB: %.2f bilhões de reais.\n", pib1);
    printf("PIB per capita: %.2f reais.\n", capita1);
    printf("Número de pontos turísticos: %d.\n", turistico1);
    printf("Poder da carta : %f pontos\n", superpoder1);


    
    int opcao;
    do {
        printf("\nESCOLHA UMA OPÇÃO\n");
        printf("1. Comparar a populaçao entre as cartas\n");
        printf("2. Comparar a área entre as cartas\n");
        printf("3. Comparar a densidade entre as cartas\n");
        printf("4. Comparar o pib entre as cartas\n");
        printf("5. Comparar o PIB per capita entre as cartas\n");
        printf("6. Comparar os pontos turísticos entre as cartas\n");
        printf("7. Comparar o superpoder entre as cartas\n");
        printf("0. Sair do menu\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
            if (populacao > populacao1){
                printf("O estado de %s é mais populoso pois possui %d habitantes, enquanto o estado %s possui %d.\n", nome, populacao, nome1, populacao1);
            }else if (populacao < populacao1){
                printf("O estado de %s é mais populoso pois possui %d habitantes, enquanto o estado %s possui %d.\n", nome1, populacao1, nome, populacao);
            }else {
                printf("A população dos dois estados são iguais.\n");
            }
            break;
            
            case 2:
            if (area > area1){
                printf("A área de %s é maior, com %.2f km², enquanto %s possui %.2f km².\n", nome, area, nome1, area1);
            }else if (area < area1){
                printf("A área de %s é maior, com %.2f km², enquanto %s possui %.2f km².\n", nome1, area1, nome, area);
            }else {
                printf("As cartas possuem uma área igual");
            }
            break;

            

            return 0;
}