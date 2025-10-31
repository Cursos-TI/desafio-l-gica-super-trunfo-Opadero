#include <stdio.h>
#include <string.h>

int main() {
    // Declaração de variáveis do tipo string e inteiros/floats
    char estado1[20] = "SP";
    char codigo1[5] = "A1";
    char cidade1[30] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 12;

    char estado2[20] = "RJ";
    char codigo2[5] = "B2";
    char cidade2[30] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.33;
    float pib2 = 400.10;
    int pontos2 = 8;

    // Calculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibcap1 = pib1 / populacao1;
    float pibcap2 = pib2 / populacao2;

    int opcao;

    // Menu interativo com switch
    printf("===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    // Switch para escolher qual comparação será feita
    switch(opcao) {

        case 1:
            printf("\nComparando População:\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 2:
            printf("\nComparando Área:\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 3:
            printf("\nComparando PIB:\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 4:
            printf("\nComparando Pontos Turisticos:\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        case 5:
            printf("\nComparando Densidade Demografica (MENOR VENCE):\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            // Densidade é invertido
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
        break;

        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}
