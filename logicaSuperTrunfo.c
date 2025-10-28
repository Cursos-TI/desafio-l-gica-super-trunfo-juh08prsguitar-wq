/*
    ===============================================================
    UNIVERSIDADE ESTÁCIO
    Curso: Tecnologia em Análise e Desenvolvimento de Sistemas
    Disciplina: Lógica de Programação
    Desafio: Lógica Super Trunfo - Nível Novato
    Aluno: Gilberto Júnior
    ===============================================================
*/

#include <stdio.h>

int main() {
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    printf("\n--- CARTA 1 ---\n");
    printf("Estado (sigla): ");
    scanf(" %[^\n]", estado1);
    printf("Código da carta: ");
    scanf(" %[^\n]", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado (sigla): ");
    scanf(" %[^\n]", estado2);
    printf("Código da carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    pibPerCapita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;
    pibPerCapita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;

    printf("\n========================================\n");
    printf("Comparação de cartas (Atributo: População)\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\n--- Dados complementares ---\n");
    printf("%s (%s): Densidade = %.2f hab/km² | PIB per capita = %.6f\n", cidade1, estado1, densidade1, pibPerCapita1);
    printf("%s (%s): Densidade = %.2f hab/km² | PIB per capita = %.6f\n", cidade2, estado2, densidade2, pibPerCapita2);

    printf("========================================\n");
    printf("Fim da comparação - Nível Novato\n");
    printf("========================================\n");

    return 0;
}

