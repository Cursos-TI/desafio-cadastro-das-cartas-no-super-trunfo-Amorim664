#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Definição das variáveis

    int populacaoA, populacaoB, numeros_pontos_turisticosA, numeros_pontos_turisticosB;
    float pibA, pibB, areaA, areaB, calculo_densidadeA, calculo_densidadeB, pib_percapitaA, pib_percapitaB;
    char estadoA, estadoB;
    char nome_da_cidadeA[20], nome_da_cidadeB[20], codigo_da_cidadeA[4], codigo_da_cidadeB[4];
    int resultado_populacao, resultado_pontos_turisticos, resultado_pib, resultado_area, resultado_densidade, resultado_pib_percapita, resultado_estado, resultado_super_poder;
    unsigned int super_poderA, super_poderB;

    // Definição da leitura dos dados do usuário - uso o printf e scanf - Carta 01

    printf("-----DADOS DA CARTA 01------\n");

    printf("Informe uma letra entre [A à H]: ");
    scanf("%s", &estadoA);

    printf("Informe o código da carta [digite estado + 01 à 04]: ");
    scanf("%s", &codigo_da_cidadeA);

    printf("Informe o nome do estado: ");
    scanf("%s", &nome_da_cidadeA);

    printf("Informe a quantidade da população: ");
    scanf("%d", &populacaoA);

    printf("Informe a área em km ²: ");
    scanf("%f", &areaA);

    printf("Informe a quantidade do PID: ");
    scanf("%f", &pibA);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &numeros_pontos_turisticosA);

    // Calculos (Densidade polulacional e PIB per capita) - Carta 01

    calculo_densidadeA = (float) populacaoA / areaA;
    pib_percapitaA = (float) pibA / populacaoA;
    super_poderA = (float) populacaoA + numeros_pontos_turisticosA + areaA + pibA + pib_percapitaA + calculo_densidadeA;


    // Definição da impressão dos dados - carta 01

    printf("-----RESULTADO DA CARTA 01-------\n");
    printf(" Carta 1:\n");
    printf(" Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f Km²\n PIB: %.2f\n Números de Pontos Turísticos: %d\n Densidade populacional: %.2f hab/km²\n Pib per capita: %.2f reais\n", estadoA, codigo_da_cidadeA, nome_da_cidadeA, populacaoA, areaA, pibA, numeros_pontos_turisticosA, calculo_densidadeA, pib_percapitaA);
    printf("---------------------------------\n");

    // Definição da leitura dos dados do usuário - uso o printf e scanf - Carta 02

    printf("------DADOS DA CARTA 02------\n");

    printf("Informe uma letra entre [A à H]: ");
    scanf("%s", &estadoB);

    printf("Informe o código da carta [digite estado + 01 à 04]: ");
    scanf("%s", &codigo_da_cidadeB);

    printf("Informe o nome do estado: ");
    scanf("%s", &nome_da_cidadeB);

    printf("Informe a quantidade da população: ");
    scanf("%d", &populacaoB);

    printf("Informe a área em km ²: ");
    scanf("%f", &areaB);

    printf("Informe a quantidade do PID: ");
    scanf("%f", &pibB);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &numeros_pontos_turisticosB);

    // Calculos (Densidade polulacional e PIB per capita) - Carta 02

    calculo_densidadeB = (float) populacaoB / areaB;
    pib_percapitaB = (float) pibB / populacaoB;
    super_poderB = (float) populacaoB + numeros_pontos_turisticosB + areaB + pibB + pib_percapitaB + calculo_densidadeB;


    // Analise comparativa


    resultado_area = areaA < areaB;
    resultado_densidade = calculo_densidadeA < calculo_densidadeB;
    resultado_estado = estadoA < estadoB;
    resultado_pib = pibA < pibB;
    resultado_pib_percapita = pib_percapitaA < pib_percapitaB;
    resultado_pontos_turisticos = numeros_pontos_turisticosA < numeros_pontos_turisticosB;
    resultado_populacao = populacaoA < populacaoB;
    resultado_super_poder = super_poderA < super_poderB;

    
    // Definição da impressão dos dados - carta 02

    printf("-------RESULTADO DA CARTA 02-------\n");
    printf(" Carta 2:\n");
    printf(" Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f Km²\n PIB: %.2f\n Números de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n Pib per capita: %.2f reais\n", estadoB, codigo_da_cidadeB, nome_da_cidadeB, populacaoB, areaB, pibB, numeros_pontos_turisticosB, calculo_densidadeB, pib_percapitaB);
    printf("------------------------------------\n");

    // Resultado da comparação

    printf("------RESULTADO DA COMPARAÇÃO DAS CARTAS---------\n ");
    printf("(1 - Carta 01 venceu) se (0 - Carta 02 venceu) População:  %d\n", resultado_populacao);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) Área: %d\n", resultado_area);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) PIB: %d\n", resultado_pib);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) Pontos Turísticos: %d\n", resultado_pontos_turisticos);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) Densidade Populacional: %d\n", resultado_densidade);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) PIB per capita: %d\n", resultado_pib_percapita);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) Super Poder: %d\n",resultado_super_poder);
    
    return 0;

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
}
