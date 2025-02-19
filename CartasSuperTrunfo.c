#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigo[10];
    char nome[50];
    int populacao;
    float pib;
    float area;
    int pontosTuristicos;
    float Densidade;
    float PIBpercapita;

    //Apenas um titulo
    printf("*** Cadastro de Cartas ***\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** Cadastro da Primeira Carta ***\n");
    
    printf("Insira a letra que represente o estado da cidade:\n");
    scanf("%s", estado);
    printf("Insira o código da cidade:\n");
    scanf("%s", codigo);
    printf("Insira o nome da cidade:\n");
    scanf("%s", nome);
    printf("Insira a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Insira a área da cidade em km²:\n");
    scanf("%f", &area);
    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("Insira o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos);

    //Calculo da Densidade Populacional e PIB per capita
    Densidade = populacao / area;
    PIBpercapita = pib / populacao;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n*** Dados da Carta-%s***\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População da cidade: %d\n", populacao);
    printf("Área da cidade: %.3fkm²\n", area);
    printf("PIB da cidade: R$%.2f\n", pib);
    printf("Número de pontos turísticos da cidade: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade);
    printf("PIB per capita: R$%.2f\n", PIBpercapita);

    //Cadastro da segunda carta

    char estado2;
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float pib2;
    float area2;
    int pontosTuristicos2;
    float densidade2;
    float PIBpercapita2;

    printf("\n*** Cadastro da Segunda Carta ***\n");

    printf("Insira a letra que represente o estado da cidade:\n");
    scanf("%s", estado2);
    printf("Insira o código da cidade:\n");
    scanf("%s", codigo2);
    printf("Insira o nome da cidade:\n");
    scanf("%s", nome2);
    printf("Insira a população da cidade:\n");
    scanf("%d", &populacao2);
    printf("Insira a área da cidade em km²:\n");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    PIBpercapita2 = pib2 / populacao2;

    printf("\n*** Dados da Carta-%s***\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População da cidade: %d\n", populacao2);
    printf("Área da cidade: %.3fkm²\n", area2);
    printf("PIB da cidade: R$%.2f\n", pib2);
    printf("Número de pontos turísticos da cidade: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$%.2f\n", PIBpercapita2);

    return 0;
}
