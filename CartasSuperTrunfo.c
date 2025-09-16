#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Definição das variáveis

    int populacaoA, populacaoB, numeros_pontos_turisticosA, numeros_pontos_turisticosB, opcao;
    float pibA, pibB, areaA, areaB, calculo_densidadeA, calculo_densidadeB, pib_percapitaA, pib_percapitaB;
    char estadoA, estadoB;
    char nome_da_cidadeA[20];
    char nome_da_cidadeB[20];
    char codigo_da_cidadeA[4];
    char codigo_da_cidadeB[4];
    int resultado_populacao, resultado_pontos_turisticos, resultado_pib, resultado_area, resultado_densidade, resultado_pib_percapita, resultado_estado, resultado_super_poder;
    unsigned int super_poderA, super_poderB;

    // Definição da leitura dos dados do usuário - uso o printf e scanf - Carta 01

    printf("-----DADOS DA CARTA 01------\n");

    printf("Informe uma letra entre [A a H]: ");
    scanf("%s", &estadoA);
    printf("Informe o codigo da carta [digite estado + 01 a 04]: ");
    scanf("%s", &codigo_da_cidadeA);
    printf("Informe o nome do estado: ");
    scanf("%s", &nome_da_cidadeA);
    printf("Informe a quantidade da populacao: ");
    scanf("%d", &populacaoA);
    printf("Informe a area em km ²: ");
    scanf("%f", &areaA);
    printf("Informe a quantidade do PID: ");
    scanf("%f", &pibA);
    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &numeros_pontos_turisticosA);

    // Calculos (Densidade polulacional e PIB per capita) - Carta 01

    calculo_densidadeA = (float) populacaoA / areaA;
    pib_percapitaA = (float) pibA / populacaoA;
    super_poderA = (float) populacaoA + numeros_pontos_turisticosA + areaA + pibA + pib_percapitaA + calculo_densidadeA;


    // Definição da impressão dos dados - carta 01

    printf("-----RESULTADO DA CARTA 01-------\n");
    printf(" Carta 1:\n");
    printf(" Estado: %c\n Codigo: %s\n Nome da cidade: %s\n Populacao: %d\n Area: %.2f Km²\n PIB: %.2f\n Numeros de Pontos Turisticos: %d\n Densidade populacional: %.2f hab/km²\n Pib per capita: %.2f reais\n", estadoA, codigo_da_cidadeA, nome_da_cidadeA, populacaoA, areaA, pibA, numeros_pontos_turisticosA, calculo_densidadeA, pib_percapitaA);
    printf("---------------------------------\n");

    // Definição da leitura dos dados do usuário - uso o printf e scanf - Carta 02

    printf("------DADOS DA CARTA 02------\n");

    printf("Informe uma letra entre [A a H]: ");
    scanf("%s", &estadoB);
    printf("Informe o codigo da carta [digite estado + 01 a 04]: ");
    scanf("%s", &codigo_da_cidadeB);
    printf("Informe o nome do estado: ");
    scanf("%s", &nome_da_cidadeB);
    printf("Informe a quantidade da populacao: ");
    scanf("%d", &populacaoB);
    printf("Informe a area em km ²: ");
    scanf("%f", &areaB);
    printf("Informe a quantidade do PID: ");
    scanf("%f", &pibB);
    printf("Informe a quantidade de pontos turisticos: ");
    scanf("%d", &numeros_pontos_turisticosB);

    // Calculos (Densidade polulacional e PIB per capita) - Carta 02

    calculo_densidadeB = (float) populacaoB / areaB;
    pib_percapitaB = (float) pibB / populacaoB;
    super_poderB = (float) populacaoB + numeros_pontos_turisticosB + areaB + pibB + pib_percapitaB + calculo_densidadeB;


    // Analise comparativa


    /*
    resultado_area = areaA < areaB;
    resultado_densidade = calculo_densidadeA < calculo_densidadeB;
    resultado_estado = estadoA < estadoB;
    resultado_pib = pibA < pibB;
    resultado_pib_percapita = pib_percapitaA < pib_percapitaB;
    resultado_pontos_turisticos = numeros_pontos_turisticosA < numeros_pontos_turisticosB;
    resultado_populacao = populacaoA < populacaoB;
    resultado_super_poder = super_poderA < super_poderB;
    */


    // Definição da impressão dos dados - carta 02

    printf("-------RESULTADO DA CARTA 02-------\n");
    printf(" Carta 2:\n");
    printf(" Estado: %c\n Codigo: %s\n Nome da cidade: %s\n Populacaoo: %d\n Area: %.2f Km²\n PIB: %.2f\n Numeros de Pontos Turisticos: %d\n Densidade Populacional: %.2f hab/km²\n Pib per capita: %.2f reais\n", estadoB, codigo_da_cidadeB, nome_da_cidadeB, populacaoB, areaB, pibB, numeros_pontos_turisticosB, calculo_densidadeB, pib_percapitaB);
    printf("------------------------------------\n");

  // Menu de interativel

  printf("### MENU DE RESULTADOS COMPARATIVOS ###\n");
  printf("Escolha a opcao de analise:\n");
  printf("1. Analise comparativa de populacao. \n");
  printf("2. Analise comparativa de Area. \n");
  printf("3. Analise comparativa do PIB. \n");
  printf("4. Analise comparativa de quantidade de pontos turisticos. \n");
  printf("5. Analise comparativa da densidade demografica.\n");
  printf("6. Analise comparativa geral.\n");
  printf("7. Sair do Jogo. \n");
  printf("Escolha:\n ");
  scanf("%d", &opcao);

// Analise logica utilizando o Switch e utilizando a estrutura if - else


  switch (opcao) {

    case 1:

      printf("Opcao definida: ANALISE COMPARATIVA POPULACIONAL!\n");
      if (populacaoA > populacaoB) {
        printf("Populacao - Carta 01 - (%s) VENCEU !\n", nome_da_cidadeA);
      }else if (populacaoA == populacaoB) {
        printf("Dados da população e EMPATE!\n");
      }else {
        printf("Populacao - Carta 02 - (%s) VENCEU !\n", nome_da_cidadeB);
      }break;

    case 2:

      printf("Opcao definida: ANALISE COMPARATIVA DA AREA!\n");
      if (areaA > areaB) {
        printf("Area - Carta 01 - (%s) VENCEU!\n ", nome_da_cidadeA);
      }else if (areaA == areaB) {
        printf("Dados da area e EMPATE!\n");
      }else {
        printf("Area- Carta 02 - (%s) VENCEU!\n", nome_da_cidadeB);
      }break;

    case 3:

      printf("Opcao definida: ANALISE COMPARATIVA DO PIB!\n");
      if (pibA > pibB) {
        printf("PIB - Carta 01 (%s) VENCEU!\n", nome_da_cidadeA);
      }else if (pibA == pibB) {
        printf("Dados do PIB e EMPATE!\n");
      }else {
        printf("PIB - Carta 02 (%s) VENCEU!\n", nome_da_cidadeB);
      }break;

    case 4:

      printf("Opcao definida: ANALISE COMPARATIVA PONTOS TURISTICOS!\n");
      if (numeros_pontos_turisticosA > numeros_pontos_turisticosB) {
        printf("Pontos Turisticos - Carta 01 (%s) VENCEU!\n", nome_da_cidadeA);
      }else if (numeros_pontos_turisticosA == numeros_pontos_turisticosB) {
        printf("Dados dos numeros de pontos turisticos e EMPATE!\n");
      }else {
        printf("Pontos Turisticos - Carta 02 (%s) VENCEU!\n", nome_da_cidadeB);
      }break;

    case 5:

      printf("Opcao definida: ANALISE COMPARATIVA DENSIDADE DEMOGRAFICA!\n");
      if (calculo_densidadeA < calculo_densidadeB) {
        printf("Densidade Demografica - Carta 01 (%s) VENCEU!\n", nome_da_cidadeA);
      }else if (calculo_densidadeA == calculo_densidadeB) {
        printf("Dados da densidade demografica e EMPATE!\n");
      }else {
        printf("Densidade Demografica - Carta 02 (%s) VENCEU!\n", nome_da_cidadeB);
      }break;

    case 6:

      printf("Opcao definida: ANALISE COMPARATIVA GERAL!\n");
      if (populacaoA > populacaoB) {
        printf("Populacao - Carta 01 (%s) VENCEU!\n",nome_da_cidadeA);
      }else if (populacaoA == populacaoB) {
        printf("Dados de populacao e EMPATE!\n");
      }else if (populacaoB > populacaoA) {
        printf("Populacao - Carta 02 (%s) VENCEU!\n", nome_da_cidadeB);
      }if (areaA > areaB) {
        printf("Area - Carta 01 - (%s) VENCEU!\n ", nome_da_cidadeA);
      }else if (areaA == areaB) {
        printf("Dados da area e EMPATE!\n");
      }else if (areaB > areaA) {
        printf("Area- Carta 02 - (%s) VENCEU!\n", nome_da_cidadeB);
      }if (pibA > pibB) {
        printf("PIB - Carta 01 (%s) VENCEU!\n", nome_da_cidadeA);
      }else if (pibA == pibB) {
        printf("Dados do PIB e EMPATE!\n");
      }else if (pibB > pibA){
        printf("PIB - Carta 02 (%s) VENCEU!\n", nome_da_cidadeB);
      }if (numeros_pontos_turisticosA > numeros_pontos_turisticosB) {
        printf("Pontos Turisticos - Carta 01 (%s) VENCEU!\n", nome_da_cidadeA);
      }else if (numeros_pontos_turisticosA == numeros_pontos_turisticosB) {
        printf("Dados dos numeros de pontos turisticos e EMPATE!\n");
      }else if (numeros_pontos_turisticosB > numeros_pontos_turisticosA){
        printf("Pontos Turisticos - Carta 02 (%s) VENCEU!\n", nome_da_cidadeB);
      }if (calculo_densidadeA < calculo_densidadeB) {
        printf("Densidade Demografica - Carta 01 (%s) VENCEU!\n", nome_da_cidadeA);
      }else if (calculo_densidadeA == calculo_densidadeB) {
        printf("Dados da densidade demografica e EMPATE!\n");
      }else if (calculo_densidadeB < calculo_densidadeA) {
        printf("Densidade Demografica - Carta 02 (%s) VENCEU!\n", nome_da_cidadeB);
      }break;

    case 7:

      printf("Sair do Jogo...!\n");
      break;
    default:
      printf("Opcao invalida !\n");
  }


  // Teste de logica

  /*if (populacaoA > populacaoB){
    printf("População: Carta 1 - (%s) Venceu!\n", nome_da_cidadeA);
  }else{
    printf("População: Carta 2 - (%s) Venceu!\n", nome_da_cidadeB);
  }

  if (areaA > areaB){
    printf("Área: Carta 1 - (%s) Venceu!\n", nome_da_cidadeA);
  }else{
    printf("Área: Carta 2 - (%s) Venceu!\n", nome_da_cidadeB);
  }

  if (pibA > pibB){
    printf("PIB: Carta 1 - (%s) Venceu!\n", nome_da_cidadeA);
  }else{
    printf("PIB: Carta 2 - (%s) Venceu!\n", nome_da_cidadeB);
  }

  if (numeros_pontos_turisticosA > numeros_pontos_turisticosB){
    printf("Pontos Turísticos: Carta 1 - (%s) Venceu!\n", nome_da_cidadeA);
  }else{
    printf("Pontos Turísticos: Carta 2 - (%s) Venceu!\n", nome_da_cidadeB);
  }

  if (calculo_densidadeA < calculo_densidadeB){
    printf("Densidade Populacional: Carta 1 - (%s) Venceu!\n", nome_da_cidadeA);
  }else{
    printf("Densidae Populacional: Carta 2 - (%s) Venceu!\n", nome_da_cidadeB);
  }

  if (pib_percapitaA > pib_percapitaB){
    printf("PIB per Capita: Carta 1 - (%s) Venceu!\n", nome_da_cidadeA);
  }else{
    printf("PIB per Capita: Carta 2 - (%s) Venceu!\n", nome_da_cidadeB);
  }*/


    // Resultado da comparação

    /*
    printf("------RESULTADO DA COMPARAÇÃO DAS CARTAS---------\n ");
    printf("(1 - Carta 01 venceu) se (0 - Carta 02 venceu) População:  %d\n", resultado_populacao);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) Área: %d\n", resultado_area);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) PIB: %d\n", resultado_pib);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) Pontos Turísticos: %d\n", resultado_pontos_turisticos);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) Densidade Populacional: %d\n", resultado_densidade);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) PIB per capita: %d\n", resultado_pib_percapita);
    printf(" (1 - Carta 01 venceu) se (0 - Carta 02 venceu) Super Poder: %d\n",resultado_super_poder);
    */




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