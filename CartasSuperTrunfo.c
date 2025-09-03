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

    // Definição da leitura dos dados do usuário - uso o printf

    printf("Informe uma letra entre [A à H]: ");
    scanf("%s", &estado);

    printf("Informe o código da carta [digite estado + 01 à 04]: ");
    scanf("%s", &código_da_cidade);

    printf("Informe o nome do estado: ");
    scanf("%s", &nome_da_cidade);






    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
