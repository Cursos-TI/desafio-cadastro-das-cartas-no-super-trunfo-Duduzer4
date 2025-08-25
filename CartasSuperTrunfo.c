#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2, turistico1, turistico2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibp1, pibp2;


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Carta 1\n");

    printf("Digite seu Estado");
    scanf(" %c" , &estado1);
    printf("Digite seu codigo");
    scanf("%s", codigo1);
    printf("Digite o nome da sua Cidade");
    scanf("%s" , cidade1);
    printf("Populacao da Cidade");
    scanf("%d" , &populacao1);
    printf("Area da cidade");
    scanf("%f" , &area1);
    printf("PIB da Cidade");
    scanf("%f" , &pib1);
    printf("Turistico da Cidade");
    scanf("%d" , &turistico1);

    printf("Carta 2\n");

    printf("Digite seu Estado");
    scanf(" %c" , &estado2);
    printf("Digite seu codigo");
    scanf("%s" , codigo2);
    printf("Digite o nome da sua Cidade");
    scanf("%s" , cidade2);
    printf("Populacao da Cidade");
    scanf("%d" , &populacao2);
    printf("Area da cidade");
    scanf("%f" , &area2);
    printf("PIB da Cidade");
    scanf("%f" , &pib2);
    printf("Turistico da Cidade");
    scanf("%d" , &turistico2);

    densidade1 = (float) (populacao1 / area1);
    densidade2 = (float) (populacao2 / area2);
    pibp1 = (float) (pib1 / populacao1);
    pibp1 = (float) (pib2 / populacao2);



    printf("carta 01\n:");

    printf("Estado1 : %c\n", estado1);
    printf("Codigo1 : %s\n", codigo1);
    printf("Cidade1 : %s\n", cidade1);
    printf("Populacao1 : %d - Turistico1: %d\n", populacao1, turistico1);
    printf("Area1 : %f\n", area1);
    printf("Pib1 : %f\n", pib1);
    printf("Densidade Populacional1 : %f\n", densidade1);
    printf("Pib Percapita1 : %f\n", pibp1);

    printf("carta 02\n:");

    printf("Estado2: %c\n", estado2);
    printf("Codigo2: %s\n", codigo2);
    printf("Cidade2: %s\n", cidade2);
    printf("Populacao2: %d - Turistico2: %d\n", populacao2, turistico2);
    printf("Area2: %f\n", area2);
    printf("Pib2: %f\n", pib2);
    printf("Densidade Populacional2 : %f\n", densidade2);
    printf("Pib Percapita2 : %f\n", pibp2);
    
        
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

