#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração dos tributos da carta
    char input[50];
    char nome[50];
    char codCidade[4];
    int populacao, numPontosTuristicos;
    float area, pib, densidade, pib_per_capita;

    // Cadastro dos atributos cartas
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome);

    printf("Digite o código da cidade: \n");
    scanf(" %s", codCidade);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao);

    printf("Digite a area da cidade (em km²): \n");
    scanf(" %f", &area);
    
    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &numPontosTuristicos);

    // Caluco das propriedades calculadas
    if (area > 0)
    {
        densidade = populacao / area;
    }
    else
    {
        densidade = 0;
    }

    if (populacao > 0)
    {
        pib_per_capita = pib / populacao;
    }
    else
    {
        pib_per_capita = 0;
    }

    // Exibição dos atributos das cartas
    printf("\n");
    printf("Dados da cidade:\n");
    printf("Nome: %s\n", nome);
    printf("Código: %s\n", codCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos turísticos: %d\n", numPontosTuristicos);
    printf("Densidade populacional: %.2f pessoas / km²\n", densidade);
    printf("PIB per capita: R$ %.2f por pessoa\n", pib_per_capita);

    return 0;
}
