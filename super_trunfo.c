#include <stdio.h>

int main() {

    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("=== SUPER TRUNFO - PAISES ===\n\n");

    // Entrada de dados
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Saída de dados
    printf("\n=== DADOS DA CARTA ===\n");
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);

    return 0;
}
