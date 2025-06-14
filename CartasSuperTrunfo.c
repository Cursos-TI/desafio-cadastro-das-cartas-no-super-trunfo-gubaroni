#include <stdio.h>

int main() {
    char Estado1[50], Cidade1[50], CodigoCarta1[50];
    int Populacao1, pontosturistico1;
    float Pib1, Area1;

    char Estado2[50], Cidade2[50], CodigoCarta2[50];
    int Populacao2, pontosturistico2;
    float Pib2, Area2;

    printf("=== Dados do Primeiro Local ===\n");
    printf("Digite seu Estado: \n");
    scanf("%49s", Estado1);

    printf("Digite a Cidade: \n");
    scanf("%49s", Cidade1);

    printf("Digite o codigo da Carta: \n");
    scanf("%49s", CodigoCarta1);

    printf("Digite o numero da Populacao: \n");
    scanf("%d", &Populacao1);

    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &pontosturistico1);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib1);

    printf("Digite a Area: \n");
    scanf("%f", &Area1);

    printf("\n=== Dados do Segundo Local ===\n");
    printf("Digite seu Estado: \n");
    scanf("%49s", Estado2);

    printf("Digite a Cidade: \n");
    scanf("%49s", Cidade2);

    printf("Digite o codigo da Carta: \n");
    scanf("%49s", CodigoCarta2);

    printf("Digite o numero da Populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite o numero de Pontos Turisticos: \n");
    scanf("%d", &pontosturistico2);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib2);

    printf("Digite a Area: \n");
    scanf("%f", &Area2);

    printf("\n=== Resultados ===\n");
    printf("Primeiro Local:\n");
    printf("Estado: %s\n - Cidade: %s\n - Carta: %s\n", Estado1, Cidade1, CodigoCarta1);
    printf("Populacao: %d\n - Pontos Turisticos: %d\n", Populacao1, pontosturistico1);
    printf("PIB: %.2f\n - Area: %.2f\n", Pib1, Area1);

    printf("\nSegundo Local:\n");
    printf("Estado: %s\n - Cidade: %s\n - Carta: %s\n", Estado2, Cidade2, CodigoCarta2);
    printf("Populacao: %d\n - Pontos Turisticos: %d\n", Populacao2, pontosturistico2);
    printf("PIB: %.2f\n - Area: %.2f\n", Pib2, Area2);

    return 0;
}
