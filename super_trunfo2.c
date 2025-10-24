#include <stdio.h>

int main() {

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;

    //  Solicita informações da Carta 1
    printf("===========================\n");
    printf("  Super Trunfo - Carta 1\n");
    printf("===========================\n");

    printf("Digite uma letra (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (01-04): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);
    printf("Digite a Área da cidade (Em km²): ");
    scanf("%f", &area1);
    printf("Qual o PIB (Em Bilhões): "); 
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pturisticos1);

    // Solicita informações da Carta 2
    printf("\n===========================\n");
    printf("  Super Trunfo - Carta 2\n");
    printf("===========================\n");

    printf("Digite uma letra (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (01-04): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a Área da cidade (Em km²): ");
    scanf("%f", &area2);
    printf("Qual o PIB (Em Bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pturisticos2);

    // Calcula densidade e PIB per capita
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // Calcula Super Poder
    float superpoder1 = (float)populacao1 + area1 + pib1 + pturisticos1 + pibpercapita1 + (1 / densidade1);
    float superpoder2 = (float)populacao2 + area2 + pib2 + pturisticos2 + pibpercapita2 + (1 / densidade2);

    // Exibe informações básicas
    printf("\n===========================\n");
    printf("       Cartas Cadastradas\n");
    printf("===========================\n");

    printf("\nCarta 1 - %s (%c%s)\n", cidade1, estado1, codigo1);
    printf("População: %lu | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f | PIB per Capita: %.2f\n",
           populacao1, area1, pib1, pturisticos1, densidade1, pibpercapita1);

    printf("\nCarta 2 - %s (%c%s)\n", cidade2, estado2, codigo2);
    printf("População: %lu | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d | Densidade: %.2f | PIB per Capita: %.2f\n",
           populacao2, area2, pib2, pturisticos2, densidade2, pibpercapita2);

    // Opcoes Menu Interativo
    int opcao;
    printf("\n===========================\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("===========================\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n===========================\n");
    printf("Resultado da Comparação:\n");
    printf("===========================\n");

    // Switch Menu
    switch (opcao) {
        case 1:
            printf("Atributo escolhido: População\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (area2 > area1)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (pib2 > pib1)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pturisticos1);
            printf("%s: %d\n", cidade2, pturisticos2);

            if (pturisticos1 > pturisticos2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (pturisticos2 > pturisticos1)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica (menor vence)\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            if (densidade1 < densidade2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo escolhido: PIB per Capita\n");
            printf("%s: %.2f\n", cidade1, pibpercapita1);
            printf("%s: %.2f\n", cidade2, pibpercapita2);

            if (pibpercapita1 > pibpercapita2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (pibpercapita2 > pibpercapita1)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Atributo escolhido: Super Poder\n");
            printf("%s: %.2f\n", cidade1, superpoder1);
            printf("%s: %.2f\n", cidade2, superpoder2);

            if (superpoder1 > superpoder2)
                printf("Vencedora: Carta 1 (%s)\n", cidade1);
            else if (superpoder2 > superpoder1)
                printf("Vencedora: Carta 2 (%s)\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    return 0;
}
