/*
    ===============================================================
    UNIVERSIDADE ESTÁCIO
    Curso: Tecnologia em Análise e Desenvolvimento de Sistemas
    Disciplina: Lógica de Programação
    Desafio: Lógica Super Trunfo - Nível Mestre
    Aluno: Gilberto Júnior
    ===============================================================
*/

#include <stdio.h>

int main() {
    // ===============================================
    // Declaração de variáveis
    // ===============================================
    char estado1[50], estado2[50];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    int atributo1, atributo2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;

    // ===============================================
    // Cadastro das cartas
    // ===============================================
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

    // ===============================================
    // Cálculos automáticos
    // ===============================================
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    pibPerCapita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;
    pibPerCapita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;

    // ===============================================
    // Menu dinâmico - escolha dos atributos
    // ===============================================
    printf("\n--- MENU DE ATRIBUTOS ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");

    printf("\nEscolha o 1º atributo para comparar: ");
    scanf("%d", &atributo1);

    // Validação para não repetir o mesmo atributo
    do {
        printf("Escolha o 2º atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1) {
            printf("Você já escolheu esse atributo! Escolha outro.\n");
        }
    } while (atributo2 == atributo1);

    printf("\n========================================\n");
    printf("Comparando cartas:\n");
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Carta 2 - %s (%s)\n", cidade2, estado2);
    printf("========================================\n");

    // ===============================================
    // Comparação do 1º atributo (ternário + switch)
    // ===============================================
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = 1 / densidade1; valor1_carta2 = 1 / densidade2; break; // menor vence
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
        default: printf("Atributo 1 inválido!\n");
    }

    // ===============================================
    // Comparação do 2º atributo (ternário + switch)
    // ===============================================
    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = 1 / densidade1; valor2_carta2 = 1 / densidade2; break; // menor vence
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
        default: printf("Atributo 2 inválido!\n");
    }

    // ===============================================
    // Soma dos atributos e resultado final
    // ===============================================
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\n--- RESULTADO FINAL ---\n");
    printf("%s: Soma dos atributos = %.2f\n", cidade1, soma1);
    printf("%s: Soma dos atributos = %.2f\n", cidade2, soma2);

    (soma1 > soma2) ? printf("\nCarta 1 (%s) venceu!\n", cidade1) :
    (soma2 > soma1) ? printf("\nCarta 2 (%s) venceu!\n", cidade2) :
    printf("\n Empate!\n");

    printf("========================================\n");
    printf("Fim do jogo - Nível Mestre\n");
    printf("========================================\n");

    return 0;
}
