#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.    
    char codigo1[4];
    char nome1[20];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    char codigo2;
    char nome2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da primeira carta")
    scanf(" %c", &codigo1)
    
    printf("Digite o nome da cidade")
    scanf(" %c", nome1)

    printf("População")
    scanf(" %d", populacao1)

    printf("Pontos turísticos")
    scanf(" %d", pontos_turisticos1)

    
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
