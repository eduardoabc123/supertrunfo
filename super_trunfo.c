#include <stdio.h>

int main() {

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;


    // \n   Solicita informações da Carta 1
    printf("===========================\n");
    printf("  Super Trunfo - Carta 1\n");
    printf("===========================\n");

    printf("Digite uma letra (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (01-04): %c", estado1);
    scanf(" %s", &codigo1);
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


    // \n   Solicita informações da Carta 2
    printf("===========================\n");
    printf("  Super Trunfo - Carta 2\n");
    printf("===========================\n");

    printf("Digite uma letra (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (01-04): %c", estado2);
    scanf(" %s", &codigo2);
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

     // \n   Exibe informações das Cartas
    printf("===========================\n");
    printf("Super Trunfo - Cartas 1 e 2\n");
    printf("===========================\n");

    // \n   Exibe informaçoes carta 1 
    printf("Carta 1:\n");
    printf("Estado: %c\n", &estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao %i\n", populacao1);
    printf("Area: %f km2\n", area1);
    printf("PIB: %f Bilhoes de Reais\n", pib1);
    printf("Numero de Pontos Turisticos: %i\n", pturisticos1);

    // \n   Exibe informaçoes carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", &estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao %i\n", populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f Bilhoes de Reais\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", pturisticos2);

    return 0;
}
