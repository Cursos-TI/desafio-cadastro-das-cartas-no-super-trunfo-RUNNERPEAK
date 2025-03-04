#include <stdio.h>


int main(){

    //DADOS QUE SERÃO COLETADOS DAS CARTAR, 1 E 2.
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

    //DADOS QUE SERÃO DIGITADOS PELA PESSOA, E VÃO SER LIDOS E ARMAZENADOS - CORRESPONDEM A PRIMEIRA CARTA.
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

    //DADOS QUE SERÃO DIGITADOS PELA PESSOA, E VÃO SER LIDOS E ARMAZENADOS - CORRESPONDEM A SEGUNDA CARTA.
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


    //CÁLCULOS REFERENTE ÀS VARIÁVEIS DENSIDADE POPULACIONAL, RENDA P/ CAPITA, E SUPERPODER DAS CARTAS.
    densidade = populacao / area;
    capita = (pib * 1e9) / populacao;
    superpoder = populacao + area + pib + turistico + capita + (1 / densidade);

    densidade1 = populacao1 / area1;
    capita1 = (pib1 * 1e9) / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + turistico1 + capita1 + (1 / densidade1);


    //SAÍDA REFERENTE OS DADOS CADASTRADOS DA PRIMEIRA CARTA.
    printf("\nParabéns, primeira carta cadastrada com sucesso :\n");
    printf("Estado: %c.\n", estado);
    printf("Código da carta: %s.\n", codigo);
    printf("Nome da cidade: %s.\n", nome);
    printf("População do estado: %'d.\n", populacao);
    printf("Área em km²: %'.2f km².\n", area);
    printf("Densidade populacional: %'.2f habitantes por km².\n", densidade);
    printf("PIB: %'.2f bilhões de reais.\n", pib);
    printf("PIB per capita: %'.2f reais.\n", capita);
    printf("Número de pontos turísticos: %d.\n", turistico);
    printf("Poder da carta : %'.2f pontos\n", superpoder);


    //SAÍDA REFERENTE OS DADOS CADASTRADOS DA SEGUNDA CARTA.
    printf("\nParabéns, segunda carta cadastrada com sucesso :\n");
    printf("Estado: %c.\n", estado1);
    printf("Código da carta: %s.\n", codigo1);
    printf("Nome da cidade: %s.\n", nome1);
    printf("População do estado: %'d.\n", populacao1);
    printf("Área em km²: %'.2f km².\n", area1);
    printf("Densidade populacional: %'.2f habitantes por km².\n", densidade1);
    printf("PIB: %'.2f bilhões de reais.\n", pib1);
    printf("PIB per capita: %'.2f reais.\n", capita1);
    printf("Número de pontos turísticos: %d.\n", turistico1);
    printf("Poder da carta : %'.2f pontos\n", superpoder1);


    //MENU INTERATIVO PARA QUEM JOGAR, ESCOLHER O QUE DESEJA COMPARAR ENTRE AS CARTAS.
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
        printf("0. Sair do menu\n\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        //COMPARAÇÃO COM O IF, ONDE TERÁ UMA SAÍDA INFORMANDO QUAL CARTA GANHOU POR TER MAIS HABITANTES.
        switch (opcao){
            case 1:
            if (populacao > populacao1){
                printf("O estado de %s é mais populoso pois possui %'d habitantes, enquanto o estado %s possui %'d.\n", nome, populacao, nome1, populacao1);
                printf("Carta 1 (%s) venceu!\n", nome);
            }else if (populacao < populacao1){
                printf("O estado de %s é mais populoso pois possui %'d habitantes, enquanto o estado %s possui %'d.\n", nome1, populacao1, nome, populacao);
                printf("Carta 2 (%s) venceu!\n", nome1);
            }else {
                printf("A população dos dois estados são iguais, portanto empate!\n");
            }
            break;
            
            //COMPARAÇÃO COM O IF, ONDE TERÁ UMA SAÍDA INFORMANDO QUAL CARTA GANHOU POR TER MAIOR ÁREA.
            case 2:
            if (area > area1){
                printf("A área de %s é maior, com %'.2f km², enquanto %s possui %'.2f km².\n", nome, area, nome1, area1);
                printf("Carta 1 (%s) venceu!\n", nome);
            }else if (area < area1){
                printf("A área de %s é maior, com %'.2f km², enquanto %s possui %'.2f km².\n", nome1, area1, nome, area);
                printf("Carta 2 (%s) venceu!\n", nome1);
            }else {
                printf("As cartas possuem uma área igual, portanto empate!\n");
            }
            break;

            //COMPARAÇÃO COM O IF, ONDE TERÁ UMA SAÍDA INFORMANDO QUAL CARTA GANHOU POR TER MENOR DENSIDADE.
            case 3:
            if (densidade < densidade1){
                printf("A densidade populacional de %s é menor, com %'.2f habitantes por km², enquanto %s possui uma densidade de %'.2f habitantes por km².\n", nome, densidade, nome1, densidade1);
                printf("Carta 1 (%s) venceu!\n", nome);
            }else if (densidade > densidade1){
                printf("A densidade populacional de %s é menor, com %'.2f habitantes por km², enquanto %s possui uma densidade de %'.2f habitantes por km².\n", nome1, densidade1, nome, densidade);
                printf("Carta 2 (%s) venceu!\n", nome1);
            }else {
                printf("Ambas possuem densidade igual, portanto empate!\n");
            }
            break;
            
            //COMPARAÇÃO COM O IF, ONDE TERÁ UMA SAÍDA INFORMANDO QUAL CARTA GANHOU POR TER MAIOR PIB.
            case 4:
            if(pib > pib1){
                printf("O PIB de %s é de %'.2f bilhões de reais, enquanto o de %s é de %'.2f bilhões de reais.\n", nome, pib, nome1, pib1);
                printf("Carta 1 (%s) venceu!\n", nome);
            }else if (pib < pib1){
                printf("O PIB de %s é de %'.2f bilhões de reais, enquanto o de %s é de %'.2f bilhões de reais.\n", nome1, pib1, nome, pib);
                printf("Carta 2 (%s) venceu!\n", nome1);
            }else {
                printf("Ambas possuem PIB igual, portante empate!\n");
            }
            break;

            //COMPARAÇÃO COM O IF, ONDE TERÁ UMA SAÍDA INFORMANDO QUAL CARTA GANHOU POR TER MAIOR RENDA PER CAPITA.
            case 5:
            if(capita > capita1){
                printf("O PIB per capita de %s é de %'.2f reais, enquanto o de %s é de %'.2f reais.\n", nome, capita, nome1, capita1);
                printf("Carta 1 (%s) venceu!\n", nome);               
            }else if (capita < capita1){
                printf("O PIB per capita de %s é de %'.2f reais, enquanto o de %s é de %'.2f reais.\n", nome1, capita1, nome, capita);
                printf("Carta 2 (%s) venceu!\n", nome1);
            }else {
                printf("Ambas possuem PIB per capita igual, empate!\n");
            }
            break;

            //COMPARAÇÃO COM O IF, ONDE TERÁ UMA SAÍDA INFORMANDO QUAL CARTA GANHOU POR TER MAIS PONTOS TURÍSTICOS.
            case 6:
            if(turistico > turistico1){
                printf("A cidade de %s possui %d pontos turisticos, enquanto %s possui %d\n", nome, turistico, nome1, turistico1);
                printf("Carta 1 (%s) venceu!\n", nome); 
            }else if (turistico < turistico1){   
                printf("A cidade de %s possui %d pontos turisticos, enquanto %s possui %d\n", nome1, turistico1, nome, turistico);
                printf("Carta 2 (%s) venceu!\n", nome1);        
            }else {
                printf("Ambas possuem o mesmo número de pontos turísticos, empate !\n");
            }
            break;
 
            //COMPARAÇÃO COM O IF, ONDE TERÁ UMA SAÍDA INFORMANDO QUAL CARTA GANHOU POR TER MAIS "SUPERPODER".
            case 7 :
            if (superpoder > superpoder1){
                printf("O superpoder de %s é de %'.2f, enquanto %s possui %'.2f.\n", nome, superpoder, nome1, superpoder1);
                printf("Carta 1 (%s) venceu!\n", nome);
            }else if (superpoder < superpoder1){
                printf("O superpoder de %s é de %'.2f, enquanto %s possui %'.2f.\n", nome1, superpoder1, nome, superpoder);
                printf("Carta 2 (%s) venceu!\n", nome1);
            }else {
                printf("Ambas possuem poder igual, empate!");
            }
            break;

            //SAÍDA DO MENU.
            case 0:
            printf("Saindo do menu!");
            break;

            //CASO SEJA DIGITADO UMA OPÇÃO INVÁLIDA.
            default:
            printf("Opção inválida, escolha uma disponível");
            break;

        }

        //FIM DO LOOP DO-WHILE 
    }while (opcao != 0);

            return 0;
}