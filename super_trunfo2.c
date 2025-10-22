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
    printf("Codigo da carta (01-04): %c", estado1);
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: ");
    scanf("%i", &populacao1);
    printf("Digite a Area da cidade (Em km2): ");
    scanf("%f", &area1);
    printf("Qual o PIB: "); 
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%i", &pturisticos1);


    // Solicita informações da Carta 2
    printf("===========================\n");
    printf("  Super Trunfo - Carta 2\n");
    printf("===========================\n");

    printf("Digite uma letra (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (01-04): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade: ");
    scanf("%i", &populacao2);
    printf("Digite a Area da cidade (Em km2): ");
    scanf("%f", &area2);
    printf("Qual o PIB (Em Bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%i", &pturisticos2);

    // faz calculos de densidade e pib per capita
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;
    float pibpercapita1 = (pib1 * 1000000000) / populacao1;
    float pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // calculos super poder
    float superpoder1 = (float)populacao1 + area1 + pib1 + pturisticos1 + pibpercapita1 + (1 / densidade1);
    float superpoder2 = (float)populacao2 + area2 + pib2 + pturisticos2 + pibpercapita2 + (1 / densidade2);


    // comparação entre cartas
    int comppopulacao = populacao1 > populacao2;
    int comparea = area1 > area2;
    int comppib = pib1 > pib2;
    int comppontos = pturisticos1 > pturisticos2;
    int compdensidade = densidade1 < densidade2; // menor vence
    int comppibpercapita = pibpercapita1 > pibpercapita2;
    int compsuperpoder = superpoder1 > superpoder2;

    // Exibe informações das Cartas
    printf("===========================\n");
    printf("Super Trunfo - Cartas 1 e 2\n");
    printf("===========================\n");

    //  Exibe informaçoes carta 1 
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao %i\n", populacao1);
    printf("Area: %f km2\n", area1);
    printf("PIB: %f Bilhoes de Reais\n", pib1);
    printf("Numero de Pontos Turisticos: %i\n", pturisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB Per Capita %f\n", pibpercapita1);

    //  Exibe informaçoes carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao %i\n", populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f Bilhoes de Reais\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", pturisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB Per Capita %f\n", pibpercapita2);


    // Comparacao Cartas
    printf("\n===========================\n");
    printf("  Comparacao de Cartas:\n");
    printf("===========================\n\n");

    // População
    printf("Comparacao de cartas (Atributo: Populacao)\n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
    if (populacao1 > populacao2)
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    else if (populacao2 > populacao1)
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    else
        printf("Resultado: Empate!\n\n");

    // Área
    printf("Comparacao de cartas (Atributo: Area)\n");
    printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
    printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
    if (area1 > area2)
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    else if (area2 > area1)
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    else
        printf("Resultado: Empate!\n\n");

    // PIB
    printf("Comparacao de cartas (Atributo: PIB)\n");
    printf("Carta 1 - %s: %.2f Bilhoes\n", cidade1, pib1);
    printf("Carta 2 - %s: %.2f Bilhoes\n", cidade2, pib2);
    if (pib1 > pib2)
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    else if (pib2 > pib1)
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    else
        printf("Resultado: Empate!\n\n");

    // Pontos Turísticos
    printf("Comparacao de cartas (Atributo: Pontos Turisticos)\n");
    printf("Carta 1 - %s: %d\n", cidade1, pturisticos1);
    printf("Carta 2 - %s: %d\n", cidade2, pturisticos2);
    if (pturisticos1 > pturisticos2)
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    else if (pturisticos2 > pturisticos1)
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    else
        printf("Resultado: Empate!\n\n");

    // Densidade Populacional (menor vence)
    printf("Comparacao de cartas (Atributo: Densidade Populacional)\n");
    printf("Carta 1 - %s: %.2f hab/km2\n", cidade1, densidade1);
    printf("Carta 2 - %s: %.2f hab/km2\n", cidade2, densidade2);
    if (densidade1 < densidade2)
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    else if (densidade2 < densidade1)
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    else
        printf("Resultado: Empate!\n\n");

    // PIB per Capita
    printf("Comparacao de cartas (Atributo: PIB per Capita)\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, pibpercapita1);
    printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);
    if (pibpercapita1 > pibpercapita2)
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    else if (pibpercapita2 > pibpercapita1)
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    else
        printf("Resultado: Empate!\n\n");

    // Super Poder
    printf("Comparacao de cartas (Atributo: Super Poder)\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, superpoder1);
    printf("Carta 2 - %s: %.2f\n", cidade2, superpoder2);
    if (superpoder1 > superpoder2)
        printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1);
    else if (superpoder2 > superpoder1)
        printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);
    else
        printf("Resultado: Empate!\n\n");

    return 0;
}
