#include <stdio.h>
#include <string.h>

int main() {

    // variáveis da carta 1
    char estado1[20] = "SP";
    char codigo1[20] = "A01";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 25;

    // calculos da carta 1
    float densidade1 = populacao1 / area1;
    float pibCapita1 = pib1 / populacao1;

    // variáveis da carta 2
    char estado2[20] = "RJ";
    char codigo2[20] = "B01";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.33;
    float pib2 = 400.10;
    int pontos2 = 18;

    // calculos da carta 2
    float densidade2 = populacao2 / area2;
    float pibCapita2 = pib2 / populacao2;

    // exibindo dados
    printf("=== CARTA 1 ===\n");
    printf("Cidade: %s\n", cidade1);
    printf("Estado: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.6f\n", pibCapita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.6f\n", pibCapita2);

    // comparação — fixado em POPULACAO
    printf("\n=== Comparacao (Atributo: Populacao) ===\n");

    if(populacao1 > populacao2) {
        printf("A carta vencedora eh: %s (%s)\n", cidade1, estado1);
        printf("%d vs %d\n", populacao1, populacao2);
    } else {
        printf("A carta vencedora eh: %s (%s)\n", cidade2, estado2);
        printf("%d vs %d\n", populacao1, populacao2);
    }

    return 0;
}
