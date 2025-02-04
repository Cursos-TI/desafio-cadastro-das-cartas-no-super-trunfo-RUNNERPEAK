#include <stdio.h>

int main(){
    char estado ;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int turistico;

    printf("Digite qual será a letra do seu estado (A-H):\n");
    scanf("%c", &estado);
    printf("Selecione o código para a carta (A01-A04):\n");
    scanf("%s", &codigo);
    printf("Digite qual o nome do estado:\n");
    scanf("%s", &nome);
    printf("Digite qual é a população desse estado:\n");
    scanf("%d", &populacao);
    printf("Digite a área do estado em km²:\n");
    scanf("%f", &area);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib);
    printf("Digite quantos pontos turísticos tem o estado:\n");
    scanf("%d", &turistico);

    printf("Parabéns, cidade cadastrada com sucesso :\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População do estado: %d\n", populacao);
    printf("Área em km²: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", turistico);


    return 0;
}
