#include <stdio.h>

//comparando as cartas do jogo para definir qual estado vai vencer.

int main() {
    // Dados da Carta 1 - Pernambuco
    char estado1[] = "PE";
    char cidade1[] = "Recife";
    int populacao1 = 1653461;           // População de Recife
    float area1 = 218.435;              // Área de Recife em km²
    float pib1 = 46.3;                  // PIB em bilhões (valor estimado)
    int pontosTuristicos1 = 25;

    // Dados da Carta 2 - Ceará
    char estado2[] = "CE";
    char cidade2[] = "Fortaleza";
    int populacao2 = 2686612;           // População de Fortaleza
    float area2 = 313.14;               // Área de Fortaleza em km²
    float pib2 = 67.5;                  // PIB em bilhões (valor estimado)
    int pontosTuristicos2 = 30;

    // Cálculo da Densidade Populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Cálculo do PIB per capita
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibir os dados das cartas
    printf("=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f\n\n", pibPerCapita1);

    printf("=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f\n\n", pibPerCapita2);

    // COMPARAÇÃO por POPULAÇÃO (maior valor é o vencedor)
    printf("Comparando por Populacao:\n");
    printf("%s: %d\n", cidade1, populacao1);
    printf("%s: %d\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}