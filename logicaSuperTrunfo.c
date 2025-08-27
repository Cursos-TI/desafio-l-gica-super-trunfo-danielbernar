#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado [3];
    char codigo_da_carta [4];
    char nome_da_cidade [50];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;
    int populacaoA, populacaoB;

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("novo comit: \n")

    printf ("estado: \n");
    scanf ("%s", estado);

    printf ("codigo da carta: \n");
    scanf ("%s", codigo_da_carta);

    printf ("nome da cidade: \n");
    scanf ("%s", nome_da_cidade);

    printf ("populacao: \n");
    scanf ("%d", &populacao);

    printf ("area: \n");
    scanf ("%f", &area);

    printf ("pib: \n");
    scanf ("%f", &pib);

    printf ("numero de pontos turisticos: \n");
    scanf ("%d", &numero_de_pontos_turisticos);

    printf("estado: %s\n - codigo da carta: %s\n - nome da cidade: %s\n", estado, codigo_da_carta, nome_da_cidade);
    printf("populacao: %d\n - area: %.2f\n - pib: %.2f\n - numero de pontos turisticos: %d\n", populacao, area, pib, numero_de_pontos_turisticos); 
    
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    if (populacaoA > populacaoB) {
        printf("Cidade 1 tem maior população.\n");
    } else {
        printf("Cidade 2 tem maior população.\n");
    }

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf ("a cidade vencedora é: %s\n", nome_da_cidade);

    return 0;
}
