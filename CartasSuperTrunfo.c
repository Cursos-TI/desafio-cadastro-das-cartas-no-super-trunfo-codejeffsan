#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.    
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;

    // Variáveis do nivel aventureiro
    float densidade1, densidade2, pibper1, pibper2;

    // Variáveis do nivel mestre0
    float SuperPoderA = populacao1 + area1 + pib1 + pontos_turisticos1 + pibper1 + (1 / densidade1); 
    float SuperPoderB = populacao2 + area2 + pib2 + pontos_turisticos2 + pibper2 + (1 / densidade2);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro da primeira carta
    printf("Digite o código da primeira cidade: \n");
    scanf("%3s", codigo1);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %19s", nome1);

    printf("População(somente números inteiros, sem ponto ou vírgula): \n");
    scanf(" %d", &populacao1);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontos_turisticos1);

    printf("Area em km2 (use pontos para números decimais): \n");
    scanf(" %f", &area1);

    printf("PIB (use pontos para números decimais): \n");
    scanf(" %f", &pib1);

    densidade1 = populacao1 / area1;
    pibper1 = pib1 / populacao1;

    // Cadastro da segunda carta

    printf("Digite o código da seguunda cidade: \n");
    scanf(" %3s", codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf(" %19s", nome2);

    printf("População(somente números inteiros, sem ponto ou vírgula): \n");
    scanf(" %d", &populacao2);

    printf("Pontos turísticos: \n");
    scanf(" %d", &pontos_turisticos2);

    printf("Area em km2 (use pontos para números decimais): \n");
    scanf(" %f", &area2);

    printf("PIB (use pontos para números decimais): \n");
    scanf(" %f", &pib2);

    densidade2 = populacao2 / area2;
    pibper2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 1\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibper1);

    printf("\nCarta 2\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f", pibper2);

    // Comparação de Atributos    printf("\nO Super Poder da carta 1 é maior queo da carta 2? %d\n", SuperPoderA > SuperPoderB);

    return 0;
}
// Dicas Adicionais:
// - Certifique-se de validar as entradas do usuário para garantir que os dados sejam consistentes.
// - Considere criar funções auxiliares para organizar melhor o código, como uma função para cadastrar uma carta e outra para exibir os dados.
// - Teste o programa com diferentes entradas para garantir que tudo funcione conforme o esperado.