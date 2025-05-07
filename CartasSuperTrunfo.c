#include <stdio.h>

/**Desafio Super Trunfo - Países
Tema 1 - Cadastro das Cartas
Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
Siga os comentários para implementar cada parte do desafio.
Teste Diego Nunes**/

int main() {

    //Declaração de variáveis para inserir os atributos e dentro de cada atributo, inserir os valores de entrada 

    char codigo [3];
    char cidade [10] = "A a H";
    char estado  ['s'];
    char carta ['s'];
    int populacao, turistico;
    float area, PiB;

    
    /**Printf para imprimir no console as mensagens de saida do codigo
    scanf para inserir as entradas do usuario em cada atibuto do codigo solicitado
    nesse codigo, estamos utilizando especificadores de formato para poder escrever as entradas de usuarios**/

   //Informaçoes de entrada da carta do jogo
    
    printf("Digite as seguintes informaçoes da carta do jogo: (carta/codigo/população/area/cidade/estado/PiB/pontos turisticos) \n");
    printf("\n");

    printf("carta: ");
    scanf("%c", carta);
    
    printf("codigo da carta: ");
    scanf("%s", codigo);

    printf("numero da populacao: ");
    scanf("%d", &populacao);

    printf("área M²: ");
    scanf("%f", &area);

    printf("nome da cidade: ");
    scanf(" %s", cidade);

    printf("nome do estado: ");
    scanf(" %c", estado);

    printf("PiB: ");
    scanf("%f", &PiB);

    printf("pontos turisticos: ");
    scanf("%d", &turistico);
    printf("\n");

    //Informaçoes de entrada da proxima carta do jogo

    printf("carta: ");
    scanf(" %c", carta);

    printf("codigo da carta: ");
    scanf("%s", codigo);

    printf("numero da populacao: ");
    scanf("%d", &populacao);

    printf("área: ");
    scanf("%f", &area);

    printf("nome da cidade: ");
    scanf(" %s", cidade);

    printf("nome do estado: ");
    scanf(" %c", estado);

    printf("PiB: ");
    scanf("%f", &PiB);
    
    printf("pontos turisticos: ");
    scanf("%d", &turistico);
    printf("\n");

    return 0;

    /** Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PiB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.**/
}
