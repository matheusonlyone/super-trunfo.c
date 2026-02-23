#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
struct Carta {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

int main() {

    struct Carta carta1, carta2;

    // ===============================
    // Cadastro da Carta 1
    // ===============================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);

    printf("Codigo: ");
    scanf(" %s", carta1.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // ===============================
    // Cadastro da Carta 2
    // ===============================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);

    printf("Codigo: ");
    scanf(" %s", carta2.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ===============================
    // ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO
    // ===============================
    // 1 = População
    // 2 = Área
    // 3 = PIB
    // 4 = Densidade Populacional
    // 5 = PIB per capita

    int atributoEscolhido = 1;  // <<< ALTERE AQUI PARA TROCAR O ATRIBUTO

    printf("\n=== Comparacao de Cartas ===\n");

    if (atributoEscolhido == 1) {

        printf("\nAtributo: Populacao\n");

        printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);

        if (carta1.populacao > carta2.populacao)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    }

    else if (atributoEscolhido == 2) {

        printf("\nAtributo: Area\n");

        printf("Carta 1 - %s (%s): %.2f\n", carta1.cidade, carta1.estado, carta1.area);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.cidade, carta2.estado, carta2.area);

        if (carta1.area > carta2.area)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    }

    else if (atributoEscolhido == 3) {

        printf("\nAtributo: PIB\n");

        printf("Carta 1 - %s (%s): %.2f\n", carta1.cidade, carta1.estado, carta1.pib);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.cidade, carta2.estado, carta2.pib);

        if (carta1.pib > carta2.pib)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    }

    else if (atributoEscolhido == 4) {

        printf("\nAtributo: Densidade Populacional\n");

        printf("Carta 1 - %s (%s): %.2f\n", carta1.cidade, carta1.estado, carta1.densidade);
        printf("Carta 2 - %s (%s): %.2f\n", carta2.cidade, carta2.estado, carta2.densidade);

        // REGRA ESPECIAL: menor densidade vence
        if (carta1.densidade < carta2.densidade)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    }

    else if (atributoEscolhido == 5) {

        printf("\nAtributo: PIB per capita\n");

        printf("Carta 1 - %s (%s): %.6f\n", carta1.cidade, carta1.estado, carta1.pibPerCapita);
        printf("Carta 2 - %s (%s): %.6f\n", carta2.cidade, carta2.estado, carta2.pibPerCapita);

        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        else
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    }

    return 0;
}
