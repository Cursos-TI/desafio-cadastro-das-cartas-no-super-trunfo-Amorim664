#include <stdio.h>
# include <stdlib.h>
# include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

  // Definição das variáveis

  int populacaoA, populacaoB, numeros_pontos_turisticosA, numeros_pontos_turisticosB;
  int resultado1;
  int resultado2;
  float pibA, pibB, areaA, areaB, calculo_densidadeA, calculo_densidadeB, pib_percapitaA, pib_percapitaB;
  char estadoA, estadoB;
  char primeiroatributo;
  char segundoatributo;
  char nome_da_cidadeA[20];
  char nome_da_cidadeB[20];
  char codigo_da_cidadeA[4];
  char codigo_da_cidadeB[4];
  int resultado_populacao, resultado_pontos_turisticos, resultado_pib, resultado_area, resultado_densidade, resultado_pib_percapita, resultado_estado, resultado_super_poder;
  unsigned int super_poderA, super_poderB;


  // Calculos (Densidade polulacional e PIB per capita) - Carta 01

  calculo_densidadeA = (float) populacaoA / areaA;
  pib_percapitaA = (float) pibA / populacaoA;
  super_poderA = (float) populacaoA + numeros_pontos_turisticosA + areaA + pibA + pib_percapitaA + calculo_densidadeA;

  // Calculos (Densidade polulacional e PIB per capita) - Carta 02

  calculo_densidadeB = (float) populacaoB / areaB;
  pib_percapitaB = (float) pibB / populacaoB;
  super_poderB = (float) populacaoB + numeros_pontos_turisticosB + areaB + pibB + pib_percapitaB + calculo_densidadeB;


  // Cadastro da carta 01
  printf("### CADASTRAR OS ATRIBUTOS ###\n");
  printf(" ### DADOS DA CARTA 01 ###\n");
  printf("##################################\n");
  printf("Informe uma letra entre [A a H]: \n");
  scanf("%s", &estadoA);
  printf("Informe o codigo da carta [digite estado + 01 a 04]: \n");
  scanf("%s", &codigo_da_cidadeA);
  printf("Informe o nome do estado: \n");
  scanf("%s", &nome_da_cidadeA);
  printf("Informe a quantidade da populacao: \n");
  scanf("%d", &populacaoA);
  printf("Informe a area em km ²: \n");
  scanf("%f", &areaA);
  printf("Informe a quantidade do PID: \n");
  scanf("%f", &pibA);
  printf("Informe a quantidade de pontos turisticos: \n");
  scanf("%d", &numeros_pontos_turisticosA);
  printf("############################################\n");

  // Confirmação de cadastro da carta 1

  printf("### DADOS DA CARTA 1 ###\n");
  printf("POPULACAO: %d\n", populacaoA);
  printf("AREA: %.2f\n",areaA);
  printf("PIB: %.2f\n", pibA);
  printf("PIB PERCAPITA: %.2f\n", pib_percapitaA);
  printf("PONTOS TURISTICOS: %d\n", numeros_pontos_turisticosA);
  printf("DENSIDADE DEMOGRAFICA: %.2f\n", calculo_densidadeA);
  printf("SUPER PODER: %d\n", super_poderA);
  printf("###############################\n");
  printf("### CADASTRO REALIZADO COM SUCESSO !\n");
  printf("###############################\n");

  // Cadastro da carta 02
  printf("### DADOS DA CARTA 02 ###\n");
  printf("##################################\n");
  printf("Informe uma letra entre [A a H]: \n");
  scanf("%s", &estadoB);
  printf("Informe o codigo da carta [digite estado + 01 a 04]: \n");
  scanf("%s", &codigo_da_cidadeB);
  printf("Informe o nome do estado: \n");
  scanf("%s", &nome_da_cidadeB);
  printf("Informe a quantidade da populacao: \n");
  scanf("%d", &populacaoB);
  printf("Informe a area em km ²: \n");
  scanf("%f", &areaB);
  printf("Informe a quantidade do PID: \n");
  scanf("%f", &pibB);
  printf("Informe a quantidade de pontos turisticos: \n");
  scanf("%d", &numeros_pontos_turisticosB);
  printf("###########################################\n");

  // Confirmação de cadastro da carta 2

  printf("### DADOS DA CARTA 2 ###\n");
  printf("POPULACAO: %d\n", populacaoB);
  printf("AREA: %.2f\n",areaB);
  printf("PIB: %.2f\n", pibB);
  printf("PIB PERCAPITA: %.2f\n", pib_percapitaB);
  printf("PONTOS TURISTICOS: %d\n", numeros_pontos_turisticosB);
  printf("DENSIDADE DEMOGRAFICA: %.2f\n", calculo_densidadeB);
  printf("SUPER PODER: %d\n", super_poderB);
  printf("###############################\n");
  printf("### CADASTRO REALIZADO COM SUCESSO !\n");
  printf("###############################\n");

  // Menu interativo 1
  printf("### MENU DE RESULTADOS COMPARATIVOS ###\n");
  printf("### ESCOLHA O PRIMEIRO ATRIBUTO ###\n");
  printf("#######################################\n");
  printf("A. Populacao. \n");
  printf("B. Area. \n");
  printf("C. PIB. \n");
  printf("D. PIB Percapita.\n");
  printf("E. Pontos turisticos. \n");
  printf("F. Densidade demografica.\n");
  printf("G. Super Poder.\n");
  printf("H. Sair do Jogo.\n");
  printf("########################################\n");

  printf("Escolha a comparacao (A a H) : \n");
  scanf("%s", &primeiroatributo);

  printf("#########################################\n");

  switch (primeiroatributo) {

    case 'A':
    case 'a':
      printf("### OPCAO ESCOLHIDA: POPULACAO CARTA 1 ###\n");
      resultado1 = populacaoA > populacaoB ? 1 : 0;
      break;
    case 'B':
    case 'b':
      printf("### OPCAO ESCOLHIDA: AREA CARTA 1 ###\n");
      resultado1 = areaA > areaB ? 1 : 0;
      break;
    case 'C':
    case 'c':
      printf("### OPCAO ESCOLHIDA: PIB CARTA 1 ###\n");
      resultado1 = pibA > pibB ? 1 : 0;
      break;
    case 'D':
    case 'd':
      printf("### OPCAO ESCOLHIDA: PIB PERCAPITA CARTA 1 ###\n");
      resultado1 = pib_percapitaA > pib_percapitaB ? 1 : 0;
      break;
    case 'E':
    case 'e':
      printf("### OPCAO ESCOLHIDA: PONTOS TURISTICOS CARTA 1 ###\n");
      resultado1 = numeros_pontos_turisticosA > numeros_pontos_turisticosB ? 1 : 0;
      break;
    case 'F':
    case 'f':
      printf("### OPCAO ESCOLHIDA: DENSIDADE DEMOGRAFICA CARTA 1 ###\n");
      resultado1 = calculo_densidadeA < calculo_densidadeB ? 1 : 0;
      break;
    case 'G':
    case 'g':
      printf("OPCAO ESCOLHIDA: SUPER PODER CARTA 1 ###\n");
      resultado1 = super_poderA > super_poderB ? 1 : 0;
      break;
    case 'H':
    case 'h':
      printf("### OPCAO ESCOLHIDA: SAIR DO JOGO ###\n");
      printf("Voce saiu do jogo ...\n");
      break;
      default:
      printf("Opcao INVALIDA\n");
      break;
  }


  // Menu interativo 1
  printf("#######################################\n");
  printf("### MENU DE RESULTADOS COMPARATIVOS ###\n");
  printf("### ESCOLHA O SEGUNDO ATRIBUTO ###\n");
  printf("#######################################\n");
  printf("A. Populacao. \n");
  printf("B. Area. \n");
  printf("C. PIB. \n");
  printf("D. PIB Percapita.\n");
  printf("E. Pontos turisticos. \n");
  printf("F. Densidade demografica.\n");
  printf("G. Super Poder.\n");
  printf("H. Sair do Jogo.\n");
  printf("########################################\n");

  printf("Escolha a comparacao (A a H) : \n");
  scanf("%s", &segundoatributo);

  printf("#########################################\n");

  switch (segundoatributo) {

    case 'A':
    case 'a':
      printf("### OPCAO ESCOLHIDA: POPULACAO CARTA 1 ###\n");
      resultado1 = populacaoA > populacaoB ? 1 : 0;
      break;
    case 'B':
    case 'b':
      printf("### OPCAO ESCOLHIDA: AREA CARTA 1 ###\n");
      resultado1 = areaA > areaB ? 1 : 0;
      break;
    case 'C':
    case 'c':
      printf("### OPCAO ESCOLHIDA: PIB CARTA 1 ###\n");
      resultado1 = pibA > pibB ? 1 : 0;
      break;
    case 'D':
    case 'd':
      printf("### OPCAO ESCOLHIDA: PIB PERCAPITA CARTA 1 ###\n");
      resultado1 = pib_percapitaA > pib_percapitaB ? 1 : 0;
      break;
    case 'E':
    case 'e':
      printf("### OPCAO ESCOLHIDA: PONTOS TURISTICOS CARTA 1 ###\n");
      resultado1 = numeros_pontos_turisticosA > numeros_pontos_turisticosB ? 1 : 0;
      break;
    case 'F':
    case 'f':
      printf("### OPCAO ESCOLHIDA: DENSIDADE DEMOGRAFICA CARTA 1 ###\n");
      resultado1 = calculo_densidadeA < calculo_densidadeB ? 1 : 0;
      break;
    case 'G':
    case 'g':
      printf("OPCAO ESCOLHIDA: SUPER PODER CARTA 1 ###\n");
      resultado1 = super_poderA > super_poderB ? 1 : 0;
      break;
    case 'H':
    case 'h':
      printf("### OPCAO ESCOLHIDA: SAIR DO JOGO ###\n");
      printf("Voce saiu do jogo ...\n");
      break;
      default:
      printf("Opcao INVALIDA\n");
      break;
  }

  // Logica de resolução

  if (resultado1 && resultado2) {
    printf("PARABENS !, Voce venceu !\n");
  }else if (resultado1 != resultado2){
    printf("Voce EMPATOU!\n");
  }else {
    printf("Infelizmente voce PERDEU!\n");
  }


  return 0;


}

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
