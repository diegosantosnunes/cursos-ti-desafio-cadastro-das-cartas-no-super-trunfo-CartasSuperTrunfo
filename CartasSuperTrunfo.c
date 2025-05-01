#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Diego Nunes

int main() {

    //Declaração de variáveis para inserir os atributos e dentro de cada atributo, inserir os valores de entrada 

    char codigo [5];
    char cidade [10];
    char estado  ['a'];
    char carta = 's';
    int populacao, turistico;
    float area, pib;


    //Informaçoes de entrada da primeira carta do jogo
    //Printf para imprimir no console as mensagens de saida do codigo
    //scanf para inserir as entradas do usuario em cada atibuto do codigo solicitado
    //nesse codigo estamos utilizando especificadores de formato para poder escrever as entradas de usuarios

    printf("carta: ");
    scanf("%s", &carta);
    
    printf("codigo da carta: ");
    scanf(" %s", &codigo);
    //printf("codigo é: %s\n", codigo);


    printf("numero da populacao: ");
    scanf("%d", &populacao);
    //printf("o numero da populacao é: %d\n", populacao);

    printf("área: ");
    scanf("%f", &area);
    //printf("metragem da area é: %f\n", area);

    printf("nome da cidade: ");
    scanf(" %s", &cidade);
    //printf("nome da cidade é: %s\n", cidade);

    printf("nome do estado: ");
    scanf(" %c", &estado);
    //printf("estado é: %c\n", estado);

    printf("PIB: ");
    scanf("%f", &pib);
    //printf("numero do PIB é: %f\n", pib);

    printf("pontos turisticos: ");
    scanf("%f", &turistico);
    //printf("pontos turisticos é: %f\n", turistico);
    printf("\n");


    //Informaçoes de entrada da proxima carta do jogo

    printf("carta: ");
    scanf(" %c", &carta);

    printf("codigo da carta: ");
    scanf("%s", &codigo);
    //printf("codigo é: %s\n", codigo);

    printf("numero da populacao: ");
    scanf("%d", &populacao);
    //printf("o numero da populacao é: %d\n", populacao);

    printf("área: ");
    scanf("%f", &area);
    //printf("metragem da area é: %f\n", area);

    printf("nome da cidade: ");
    scanf(" %s", &cidade);
    //printf("nome da cidade é: %s\n", cidade);

    printf("nome do estado: ");
    scanf(" %c", &estado);
    //printf("estado é: %c\n", estado);

    printf("PIB: ");
    scanf("%f", &pib);
    //printf("numero do PIB é: %f\n", pib);

    printf("pontos turisticos: ");
    scanf("%f", &turistico);
    //printf("pontos turisticos é: %f\n", turistico);
    printf("\n");

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
