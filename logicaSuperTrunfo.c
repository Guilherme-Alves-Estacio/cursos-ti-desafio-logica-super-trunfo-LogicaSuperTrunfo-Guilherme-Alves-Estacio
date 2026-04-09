#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    char estado, codigo[4], nomeCidade[50];
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib, densidadePopulacional, pibPerCapita;

    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    printf("Digite o estado da carta 1:\n");
    scanf(" %c", &estado);
    printf("Digite o codigo da carta 1:\n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade da carta 1:\n");
    scanf("%s", nomeCidade);
    printf("Digite a populacao da carta 1:\n");
    scanf("%d", &populacao);
    printf("Digite a area da carta 1 (em km²): \n");
    scanf("%f", &area);
    printf("Digite o PIB da carta 1 (em bilhões de reais): \n");
    scanf("%f", &pib);
    printf("Digite o número de Pontos Turísticos da carta 1: \n");
    scanf("%d", &pontosTuristicos);

    // Calcular a densidade populacional
    densidadePopulacional = (float)populacao / area;
    // Calcular o inverso da desidade populacional
    float inversoDensidade = 1.0 / densidadePopulacional;
    // Calcular o PIB per capita
    pibPerCapita = (pib * 1000000000) / (float)populacao;
    // Calcular o Super Poder
    float superPoder1 = populacao + area + pib + pontosTuristicos + pibPerCapita + inversoDensidade;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.1f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f bilhões de reais por pessoa\n", pibPerCapita);

    printf("\nDigite o estado da carta 2:\n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta 2:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2:\n");
    scanf("%s", nomeCidade2);
    printf("Digite a populacao da carta 2:\n");
    scanf("%d", &populacao2);
    printf("Digite a area da carta 2 (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2 (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o número de Pontos Turísticos da carta 2: \n");
    scanf("%d", &pontosTuristicos2);

    // Calcular a densidade populacional
    densidadePopulacional2 = (float)populacao2 / area2;
    // Calcular o inverso da desidade populacional
    float inversoDensidade2 = 1.0 / densidadePopulacional2;
    // Calcular o PIB per capita
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;
    // Calcular o Super Poder
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f bilhões de reais por pessoa\n", pibPerCapita2);

    // Comparar as Cartas
    printf("\nComparação de Cartas:\n");

    printf("*** Escolha um atributo para comparar *** \n 1 - População\n 2 - Área\n 3 - PIB\n 4 - Pontos Turísticos\n 5 - Densidade Populacional\n 6 - PIB per Capita\n 7 - Super Poder \n");
    printf("Opção: ");
    int opcao;
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (populacao > populacao2)
        {
            printf("Carta 1 (%s) Venceu!!! Por ter maior população: (%d).\n", nomeCidade, populacao);
        }
        else if (populacao < populacao2)
        {
            printf("Carta 2 (%s) Venceu!!! Por ter maior população: (%d).\n", nomeCidade2, populacao2);
        }
        else
        {
            printf("Ambas as cartas têm a mesma população.\n");
        }
        break;
    case 2:

        if (area > area2)
        {
            printf("Carta 1 (%s) Venceu!!! Por ter maior área: (%.2f km²).\n", nomeCidade, area);
        }
        else if (area < area2)
        {
            printf("Carta 2 (%s) Venceu!!! Por ter maior área: (%.2f km²).\n", nomeCidade2, area2);
        }
        else
        {
            printf("Ambas as cartas têm a mesma área.\n");
        }
        break;
    case 3:

        if (pib > pib2)
        {
            printf("Carta 1 (%s) Venceu!!! Por ter maior PIB: (%.2f bilhões de reais).\n", nomeCidade, pib);
        }
        else if (pib < pib2)
        {
            printf("Carta 2 (%s) Venceu!!! Por ter maior PIB: (%.2f bilões de reais).\n", nomeCidade2, pib2);
        }
        else
        {
            printf("Ambas as cartas têm o mesmo PIB.\n");
        }
        break;
    case 4:
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("Carta 1 (%s) Venceu!!! Por ter mais Pontos Turísticos: (%d).\n", nomeCidade, pontosTuristicos);
        }
        else if (pontosTuristicos < pontosTuristicos2)
        {
            printf("Carta 2 (%s) Venceu!!! Por ter mais Pontos Turísticos: (%d).\n", nomeCidade2, pontosTuristicos2);
        }
        else
        {
            printf("Ambas as cartas têm o mesmo número de Pontos Turísticos.\n");
        }
        break;
    case 5:

        if (densidadePopulacional < densidadePopulacional2)
        {
            printf("Carta 1 (%s) Venceu!!! Por ter menor densidade populacional: (%.2f habitantes/km²).\n", nomeCidade, densidadePopulacional);
        }
        else if (densidadePopulacional > densidadePopulacional2)
        {
            printf("Carta 2 (%s) Venceu!!! Por ter menor densidade populacional: (%.2f habitantes/km²).\n", nomeCidade2, densidadePopulacional2);
        }
        else
        {
            printf("Ambas as cartas têm a mesma densidade populacional.\n");
        }
        break;
    case 6:
        if (pibPerCapita > pibPerCapita2)
        {
            printf("Carta 1 (%s) Venceu!!! Por ter maior PIB per Capita: (%.2f bilhões de reais por pessoa).\n", nomeCidade, pibPerCapita);
        }
        else if (pibPerCapita < pibPerCapita2)
        {
            printf("Carta 2 (%s) Venceu!!! Por ter maior PIB per Capita: (%.2f bilhões de reais por pessoa).\n", nomeCidade2, pibPerCapita2);
        }
        else
        {
            printf("Ambas as cartas têm o mesmo PIB per Capita.\n");
        }
        break;
    case 7:
        if (superPoder1 > superPoder2)
        {
            printf("Carta 1 (%s) Venceu!!! Por ter maior Super Poder: (%.2f).\n", nomeCidade, superPoder1);
        }
        else if (superPoder1 < superPoder2)
        {
            printf("Carta 2 (%s) Venceu!!! Por ter maior Super Poder: (%.2f).\n", nomeCidade2, superPoder2);
        }
        else
        {
            printf("Ambas as cartas têm o mesmo Super Poder.\n");
        }
        break;
    default:
        printf("Opção inválida.\n");
    }

    return 0;
}