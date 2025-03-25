#include <stdio.h>

int main() {
    char estado1[50], estado2[50];
    char codigo1[50], codigo2[50];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos da cidade: \n ");
    scanf("%d", &pontosturisticos1);

    // Dados da segunda carta 

    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos da cidade: \n ");
    scanf("%d", &pontosturisticos2);

    printf("\n CARTA 1:\n ");

    printf("estado: %s \n", estado1);
    printf("codigo da carta: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area da cidade: %.0f km\u00b2 \n", area1);
    printf("Pib da cidade: %.0f \n", pib1);
    printf("Pontos turisticos: %d \n", pontosturisticos1);


    printf("\n CARTA 2:\n ");

    printf("estado: %s \n", estado2);
    printf("codigo da carta: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area da cidade: %.0f km\u00b2 \n", area2);
    printf("Pib da cidade: %.0f \n", pib2);
    printf("Pontos turisticos: %d \n", pontosturisticos2);
    
    return 0;


}

    
