#include <stdio.h>

/*Desafio Super Trunfo - Países
 Tema 2 - Comparação das Cartas
 Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
 Siga os comentários para implementar cada parte do desafio.

-- Requisitos funcionais --

Escolha de Dois Atributos:

O sistema deve permitir que o jogador escolha dois atributos numéricos diferentes para a comparação das cartas,
através de menus interativos.
Implemente a lógica necessária para garantir que o jogador não possa selecionar o mesmo atributo duas vezes.

Comparação com Múltiplos Atributos: Implemente a lógica para comparar as duas cartas com base nos dois atributos escolhidos.
Para cada atributo, a regra geral é: vence a carta com o maior valor. A exceção continua sendo a Densidade Demográfica,
onde vence a carta com o menor valor.

Soma dos Atributos: Após comparar os dois atributos individualmente,
o sistema deve somar os valores dos atributos para cada carta.
A carta com a maior soma vence a rodada.

Tratamento de Empates: Implemente a lógica para tratar empates.
Se a soma dos atributos das duas cartas for igual, exiba a mensagem "Empate!".

Menus Dinâmicos: Crie menus interativos e dinâmicos usando switch.
"Dinâmicos" significa que, por exemplo, após o jogador escolher o primeiro atributo,
esse atributo não deve mais aparecer como opção para a escolha do segundo atributo.

Exibição Clara do Resultado: Mostre o resultado da comparação de forma clara e organizada, incluindo:

O nome dos dois países.
Os dois atributos usados na comparação.
Os valores de cada atributo para cada carta.
A soma dos atributos para cada carta.
Qual carta venceu (ou se houve empate).
*/

char *obterNomeAtributo(int opcao)
{
    switch (opcao)
    {
    case 1:
        return "População";
    case 2:
        return "Área";
    case 3:
        return "PIB per Capita";
    case 4:
        return "Pontos Turísticos";
    case 5:
        return "Densidade Populacional";
    case 6:
        return "Super Poder";
    default:
        return "Desconhecido - Opção Inválida. Tente novamente.";
    }
}

void funcDescobrirAtributos(int opcao1, int opcao2)
{
    opcao1 == 1 ? printf("1° Atributo escolhido: %s\n", obterNomeAtributo(opcao1)) : (opcao1 == 2 ? printf("1° Atributo escolhido: %s\n", obterNomeAtributo(opcao1)) : (opcao1 == 3 ? printf("1° Atributo escolhido: %s\n", obterNomeAtributo(opcao1)) : (opcao1 == 4 ? printf("1° Atributo escolhido: %s\n", obterNomeAtributo(opcao1)) : (opcao1 == 5 ? printf("1° Atributo escolhido: %s\n", obterNomeAtributo(opcao1)) : (opcao1 == 6 ? printf("1° Atributo escolhido: %s\n", obterNomeAtributo(opcao1)) : 0)))));

    opcao2 == 1 ? printf("2° Atributo escolhido: %s\n", obterNomeAtributo(opcao2)) : (opcao2 == 2 ? printf("2° Atributo escolhido: %s\n", obterNomeAtributo(opcao2)) : (opcao2 == 3 ? printf("2° Atributo escolhido: %s\n", obterNomeAtributo(opcao2)) : (opcao2 == 4 ? printf("2° Atributo escolhido: %s\n", obterNomeAtributo(opcao2)) : (opcao2 == 5 ? printf("2° Atributo escolhido: %s\n", obterNomeAtributo(opcao2)) : (opcao2 == 6 ? printf("2° Atributo escolhido: %s\n", obterNomeAtributo(opcao2)) : 0)))));
};

int comparar(float valor1, float valor2, int menorVence)
{
    if (valor1 == valor2)
        return 0;

    if (menorVence)
        return (valor1 < valor2) ? 1 : -1;
    else
        return (valor1 > valor2) ? 1 : -1;
}

void mostrarResultado(int resultado, int numeroBatalha, char atributo[])
{
    if (resultado > 0)
        printf("Batalha %d° Atributo - (%s): Carta 1 venceu!\n", numeroBatalha, atributo);
    else if (resultado < 0)
        printf("Batalha %d° Atributo - (%s): Carta 2 venceu!\n", numeroBatalha, atributo);
    else
        printf("Batalha %d° Atributo - (%s): Empate!\n", numeroBatalha, atributo);
}

int main()
{
    char estado[3], codigo[4], nomeCidade[50];
    unsigned long int populacao;
    int pontosTuristicos;
    float area, densidadePopulacional, pibPerCapita;

    char estado2[3], codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, densidadePopulacional2, pibPerCapita2;

    printf("Digite o estado da carta 1: EX:(PE)\n");
    scanf("%2s", estado);
    printf("Digite o codigo da carta 1: EX:(P01)\n");
    scanf("%4s", codigo);
    printf("Digite o nome da cidade da carta 1: EX:(Olinda)\n");
    scanf("%s", nomeCidade);
    printf("Digite a populacao da carta 1: EX:(500000)\n");
    scanf("%lu", &populacao);
    printf("Digite a area da carta 1 (em km²): EX:(500)\n");
    scanf("%f", &area);
    printf("Digite o PIB da carta 1 (em bilhões de reais): EX:(50)\n");
    scanf("%f", &pibPerCapita);
    printf("Digite o número de Pontos Turísticos da carta 1: EX:(5)\n");
    scanf("%d", &pontosTuristicos);

    // Calcular a densidade populacional
    densidadePopulacional = (float)populacao / area;
    // Calcular o inverso da desidade populacional
    float inversoDensidade = 1.0 / densidadePopulacional;
    // Calcular o PIB per capita
    pibPerCapita = (pibPerCapita * 1000000000) / (float)populacao;
    // Calcular o Super Poder
    float superPoder1 = populacao + area + pibPerCapita + pontosTuristicos + pibPerCapita + inversoDensidade;

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n habitantes", populacao);
    printf("Área: %.1f km²\n", area);
    printf("PIB per Capita: %.2f bilhões de reais por pessoa\n", pibPerCapita);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.1f habitantes/km²\n", densidadePopulacional);

    printf("\nDigite o estado da carta 2: EX:(PE)\n");
    scanf("%2s", estado2);
    printf("Digite o codigo da carta 2: EX:(P02)\n");
    scanf("%4s", codigo2);
    printf("Digite o nome da cidade da carta 2: EX:(Recife)\n");
    scanf("%s", nomeCidade2);
    printf("Digite a populacao da carta 2: EX:(1000000)\n");
    scanf("%lu", &populacao2);
    printf("Digite a area da carta 2 (em km²): EX:(1000)\n");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2 (em bilhões de reais): EX:(100)\n");
    scanf("%f", &pibPerCapita2);
    printf("Digite o número de Pontos Turísticos da carta 2: EX:(10)\n");
    scanf("%d", &pontosTuristicos2);

    // Calcular a densidade populacional
    densidadePopulacional2 = (float)populacao2 / area2;
    // Calcular o inverso da desidade populacional
    float inversoDensidade2 = 1.0 / densidadePopulacional2;
    // Calcular o PIB per capita
    pibPerCapita2 = (pibPerCapita2 * 1000000000) / (float)populacao2;
    // Calcular o Super Poder
    float superPoder2 = populacao2 + area2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n habitantes", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB per Capita: %.2f bilhões de reais por pessoa\n", pibPerCapita2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.1f habitantes/km²\n", densidadePopulacional2);

    // Comparar as Cartas
    printf("\nComparação de Cartas:\n");

    printf("\n*** Escolha o PRIMEIRO atributo da para comparar ***\n");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB per Capita");
    printf("\n4 - Pontos Turísticos");
    printf("\n5 - Densidade Populacional");
    printf("\n6 - Super Poder\n");

    printf("\nOpção: ");
    int opcao1;
    scanf("%d", &opcao1);

    printf("\n*** Escolha o SEGUNDO atributo da para comparar ***\n");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB per Capita");
    printf("\n4 - Pontos Turísticos");
    printf("\n5 - Densidade Populacional");
    printf("\n6 - Super Poder\n");

    printf("\nOpção: ");
    int opcao2;
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("Opção inválida. Você deve escolher dois atributos diferentes.\n");
        return 0;
    }
    else
    {

        funcDescobrirAtributos(opcao1, opcao2);

        int resultadoOpcao1;
        int resultadoOpcao2;

        switch (opcao1)
        {
        case 1:
            resultadoOpcao1 = comparar(populacao, populacao2, 0);
            break;
        case 2:
            resultadoOpcao1 = comparar(area, area2, 0);
            break;
        case 3:
            resultadoOpcao1 = comparar(pibPerCapita, pibPerCapita2, 0);
            break;
        case 4:
            resultadoOpcao1 = comparar(pontosTuristicos, pontosTuristicos2, 0);
            break;
        case 5:
            resultadoOpcao1 = comparar(densidadePopulacional, densidadePopulacional2, 1);
            break;
        case 6:
            resultadoOpcao1 = comparar(superPoder1, superPoder2, 0);
            break;

        default:
            printf("Opção inválida para o primeiro atributo. Tente novamente.\n");
            break;
        }

        switch (opcao2)
        {
        case 1:
            resultadoOpcao2 = comparar(populacao, populacao2, 0);
            break;
        case 2:
            resultadoOpcao2 = comparar(area, area2, 0);
            break;
        case 3:
            resultadoOpcao2 = comparar(pibPerCapita, pibPerCapita2, 0);
            break;
        case 4:
            resultadoOpcao2 = comparar(pontosTuristicos, pontosTuristicos2, 0);
            break;
        case 5:
            resultadoOpcao2 = comparar(densidadePopulacional, densidadePopulacional2, 1);
            break;
        case 6:
            resultadoOpcao2 = comparar(superPoder1, superPoder2, 0);
            break;

        default:
            printf("Opção inválida para o segundo atributo. Tente novamente.\n");
            break;
        }

        printf("\n========================================\n");
        printf("        🆚 COMPARAÇÃO DE CARTAS\n");
        printf("========================================\n");

        printf("\n%s  VS  %s\n", nomeCidade, nomeCidade2);

        char *atributo1 = obterNomeAtributo(opcao1);
        char *atributo2 = obterNomeAtributo(opcao2);

        printf("\nAtributos escolhidos:\n");
        printf("1º: %s\n", atributo1);
        printf("2º: %s\n", atributo2);

        printf("\n----------- VALORES DOS ATRIBUTOS -----------\n");

        // ATRIBUTO 1
        printf("\n%s:\n", atributo1);
        switch (opcao1)
        {
        case 1:
            printf("Carta 1: %lu | Carta 2: %lu\n", populacao, populacao2);
            break;
        case 2:
            printf("Carta 1: %.2f | Carta 2: %.2f\n", area, area2);
            break;
        case 3:
            printf("Carta 1: %.2f | Carta 2: %.2f\n", pibPerCapita, pibPerCapita2);
            break;
        case 4:
            printf("Carta 1: %d | Carta 2: %d\n", pontosTuristicos, pontosTuristicos2);
            break;
        case 5:
            printf("Carta 1: %.2f | Carta 2: %.2f\n", densidadePopulacional, densidadePopulacional2);
            break;
        case 6:
            printf("Carta 1: %.2f | Carta 2: %.2f\n", superPoder1, superPoder2);
            break;
        }

        // ATRIBUTO 2
        printf("\n%s:\n", atributo2);
        switch (opcao2)
        {
        case 1:
            printf("Carta 1: %lu | Carta 2: %lu\n", populacao, populacao2);
            break;
        case 2:
            printf("Carta 1: %.2f | Carta 2: %.2f\n", area, area2);
            break;
        case 3:
            printf("Carta 1: %.2f | Carta 2: %.2f\n", pibPerCapita, pibPerCapita2);
            break;
        case 4:
            printf("Carta 1: %d | Carta 2: %d\n", pontosTuristicos, pontosTuristicos2);
            break;
        case 5:
            printf("Carta 1: %.2f | Carta 2: %.2f\n", densidadePopulacional, densidadePopulacional2);
            break;
        case 6:
            printf("Carta 1: %.2f | Carta 2: %.2f\n", superPoder1, superPoder2);
            break;
        }

        printf("\n======= RESULTADO DAS BATALHAS =======\n");

        mostrarResultado(resultadoOpcao1, 1, atributo1);
        mostrarResultado(resultadoOpcao2, 2, atributo2);

        // SUA LÓGICA ORIGINAL (mantida)
        int somaDosAtributos = resultadoOpcao1 + resultadoOpcao2;

        printf("\n------- SOMA DOS RESULTADOS -------\n");
        printf("Carta 1: %d Vitoria(s)\n ", (resultadoOpcao1 > 0) + (resultadoOpcao2 > 0));
        printf("Carta 2: %d Vitoria(s)\n ", (resultadoOpcao1 < 0) + (resultadoOpcao2 < 0));

        printf("\n=========== RESULTADO FINAL ===========\n");

        if (somaDosAtributos > 0)
            printf("🏆 Carta 1 (%s) venceu!\n", nomeCidade);
        else if (somaDosAtributos < 0)
            printf("🏆 Carta 2 (%s) venceu!\n", nomeCidade2);
        else
            printf("🤝 Empate!\n");

        printf("========================================\n");
    }
}