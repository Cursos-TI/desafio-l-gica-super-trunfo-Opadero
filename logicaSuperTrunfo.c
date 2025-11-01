#include <stdio.h>
#include <string.h>

int main() {
    // Cartas cadastradas (fixas)
    char nome1[30] = "Brasil";
    char nome2[30] = "Japao";

    int populacao1 = 210000000;
    int populacao2 = 126000000;

    float area1 = 8516000.0f;
    float area2 = 377975.0f;

    float pib1 = 1800000000000.0f; // em unidades simplificadas
    float pib2 = 5000000000000.0f;

    int pontos1 = 15;
    int pontos2 = 12;

    // cálculos derivados
    float densidade1 = populacao1 / area1;   // população / área
    float densidade2 = populacao2 / area2;

    float percapita1 = pib1 / populacao1;    // PIB per capita
    float percapita2 = pib2 / populacao2;

    int opc1, opc2;
    float val1_card1 = 0.0f, val1_card2 = 0.0f;
    float val2_card1 = 0.0f, val2_card2 = 0.0f;
    char nomeAttr1[40], nomeAttr2[40];

    // MENU 1 - escolher primeiro atributo
    printf("===== SUPER TRUNFO - FINAL =====\n\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB Per Capita\n");
    printf("Escolha (1-6): ");
    if (scanf("%d", &opc1) != 1) {
        printf("Entrada invalida!\n");
        return 0;
    }

    // Obter valores do primeiro atributo com switch
    switch(opc1) {
        case 1:
            strcpy(nomeAttr1, "Populacao");
            val1_card1 = populacao1; val1_card2 = populacao2;
            break;
        case 2:
            strcpy(nomeAttr1, "Area");
            val1_card1 = area1; val1_card2 = area2;
            break;
        case 3:
            strcpy(nomeAttr1, "PIB");
            val1_card1 = pib1; val1_card2 = pib2;
            break;
        case 4:
            strcpy(nomeAttr1, "Pontos Turisticos");
            val1_card1 = pontos1; val1_card2 = pontos2;
            break;
        case 5:
            strcpy(nomeAttr1, "Densidade Demografica");
            val1_card1 = densidade1; val1_card2 = densidade2;
            break;
        case 6:
            strcpy(nomeAttr1, "PIB Per Capita");
            val1_card1 = percapita1; val1_card2 = percapita2;
            break;
        default:
            printf("Opcao invalida para o primeiro atributo!\n");
            return 0;
    }

    // MENU 2 - escolher segundo atributo (nao pode ser o mesmo)
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    // exibimos opções (dinâmico: mostramos, mas o check abaixo evita repetir)
    if (opc1 != 1) printf("1 - Populacao\n");
    if (opc1 != 2) printf("2 - Area\n");
    if (opc1 != 3) printf("3 - PIB\n");
    if (opc1 != 4) printf("4 - Pontos Turisticos\n");
    if (opc1 != 5) printf("5 - Densidade Demografica\n");
    if (opc1 != 6) printf("6 - PIB Per Capita\n");
    printf("Escolha (1-6): ");
    if (scanf("%d", &opc2) != 1) {
        printf("Entrada invalida!\n");
        return 0;
    }

    // verificar repeticao
    if (opc2 == opc1) {
        printf("Nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Obter valores do segundo atributo com switch
    switch(opc2) {
        case 1:
            strcpy(nomeAttr2, "Populacao");
            val2_card1 = populacao1; val2_card2 = populacao2;
            break;
        case 2:
            strcpy(nomeAttr2, "Area");
            val2_card1 = area1; val2_card2 = area2;
            break;
        case 3:
            strcpy(nomeAttr2, "PIB");
            val2_card1 = pib1; val2_card2 = pib2;
            break;
        case 4:
            strcpy(nomeAttr2, "Pontos Turisticos");
            val2_card1 = pontos1; val2_card2 = pontos2;
            break;
        case 5:
            strcpy(nomeAttr2, "Densidade Demografica");
            val2_card1 = densidade1; val2_card2 = densidade2;
            break;
        case 6:
            strcpy(nomeAttr2, "PIB Per Capita");
            val2_card1 = percapita1; val2_card2 = percapita2;
            break;
        default:
            printf("Opcao invalida para o segundo atributo!\n");
            return 0;
    }

    // Exibir cabeçalho claro com nomes e valores
    printf("\n=== COMPARACAO ===\n");
    printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);

    // Mostrar o detalhe do primeiro atributo
    printf("Atributo 1: %s\n", nomeAttr1);
    printf("%s = ", nome1);
    // formato especial para populacao (inteiro) e pontos (inteiro), mas mantemos simples: %.2f
    printf("%.2f\n", val1_card1);
    printf("%s = ", nome2);
    printf("%.2f\n\n", val1_card2);

    // Mostrar o detalhe do segundo atributo
    printf("Atributo 2: %s\n", nomeAttr2);
    printf("%s = ", nome1);
    printf("%.2f\n", val2_card1);
    printf("%s = ", nome2);
    printf("%.2f\n\n", val2_card2);

    // Comparacao individual por atributo (regra: maior vence; EXCECAO: densidade - menor vence)
    int ganho1_attr1 = 0; // 1 = card1 venceu, 2 = card2 venceu, 0 = empate
    int ganho1_attr2 = 0;

    // para atributo 1
    if (opc1 == 5) { // densidade -> menor vence
        if (val1_card1 < val1_card2) ganho1_attr1 = 1;
        else if (val1_card2 < val1_card1) ganho1_attr1 = 2;
        else ganho1_attr1 = 0;
    } else {
        if (val1_card1 > val1_card2) ganho1_attr1 = 1;
        else if (val1_card2 > val1_card1) ganho1_attr1 = 2;
        else ganho1_attr1 = 0;
    }

    // para atributo 2
    if (opc2 == 5) { // densidade -> menor vence
        if (val2_card1 < val2_card2) ganho1_attr2 = 1;
        else if (val2_card2 < val2_card1) ganho1_attr2 = 2;
        else ganho1_attr2 = 0;
    } else {
        if (val2_card1 > val2_card2) ganho1_attr2 = 1;
        else if (val2_card2 > val2_card1) ganho1_attr2 = 2;
        else ganho1_attr2 = 0;
    }

    // Exibir resultados individuais
    printf("Resultado por atributo:\n");
    // Atributo 1
    if (ganho1_attr1 == 1) printf("%s venceu em %s\n", nome1, nomeAttr1);
    else if (ganho1_attr1 == 2) printf("%s venceu em %s\n", nome2, nomeAttr1);
    else printf("%s e %s empataram em %s\n", nome1, nome2, nomeAttr1);
    // Atributo 2
    if (ganho1_attr2 == 1) printf("%s venceu em %s\n", nome1, nomeAttr2);
    else if (ganho1_attr2 == 2) printf("%s venceu em %s\n", nome2, nomeAttr2);
    else printf("%s e %s empataram em %s\n", nome1, nome2, nomeAttr2);

    // Soma dos atributos para decidir o vencedor final
    float soma_card1 = val1_card1 + val2_card1;
    float soma_card2 = val1_card2 + val2_card2;

    printf("\nSoma dos atributos:\n");
    printf("%s = %.2f\n", nome1, soma_card1);
    printf("%s = %.2f\n", nome2, soma_card2);

    // Resultado final (usa operador ternário para imprimir)
    (soma_card1 > soma_card2) ? printf("\nVencedora: %s\n", nome1) :
    (soma_card2 > soma_card1) ? printf("\nVencedora: %s\n", nome2) :
                                printf("\nEmpate!\n");

    return 0;
}
