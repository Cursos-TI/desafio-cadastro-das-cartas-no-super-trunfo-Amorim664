#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Definição das variáveis

    int população, números_pontos_turisticos;
    float pib, área;
    char estado, nome_da_cidade [20], código_da_cidade [4];

    // Definição da leitura dos dados do usuário - uso o printf e scanf - Carta 01

    printf("-----DADOS DA CARTA 01------\n");

    printf("Informe uma letra entre [A à H]: ");
    scanf("%s", &estado);

    printf("Informe o código da carta [digite estado + 01 à 04]: ");
    scanf("%s", &código_da_cidade);

    printf("Informe o nome do estado: ");
    scanf("%s", &nome_da_cidade);

    printf("Informe a quantidade da população: ");
    scanf("%d", &população);

    printf("Informe a área em km ²: ");
    scanf("%f", &área);

    printf("Informe a quantidade do PID: ");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &números_pontos_turisticos);

    // Definição da impressão dos dados - carta 01


    printf("-----RESULTADO DA CARTA 01-------\n");
    printf(" Carta 1:\n");
    printf(" Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f Km²\n PIB; %.2f\n Números de Pontos Turísticos: %d\n ", estado, código_da_cidade, nome_da_cidade, população, área, pib, números_pontos_turisticos);
    printf("---------------------------------\n");

    // Definição da leitura dos dados do usuário - uso o printf e scanf - Carta 02

    printf("------DADOS DA CARTA 02------\n");

    printf("Informe uma letra entre [A à H]: ");
    scanf("%s", &estado);

    printf("Informe o código da carta [digite estado + 01 à 04]: ");
    scanf("%s", &código_da_cidade);

    printf("Informe o nome do estado: ");
    scanf("%s", &nome_da_cidade);

    printf("Informe a quantidade da população: ");
    scanf("%d", &população);

    printf("Informe a área em km ²: ");
    scanf("%f", &área);

    printf("Informe a quantidade do PID: ");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &números_pontos_turisticos);

    // Definição da impressão dos dados - carta 02

    printf("-------RESULTADO DA CARTA 02-------\n");
    printf(" Carta 2:\n");
    printf(" Estado: %c\n Código: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f Km²\n PIB; %.2f\n Números de Pontos Turísticos: %d\n ", estado, código_da_cidade, nome_da_cidade, população, área, pib, números_pontos_turisticos);
    printf("------------------------------------\n");


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
