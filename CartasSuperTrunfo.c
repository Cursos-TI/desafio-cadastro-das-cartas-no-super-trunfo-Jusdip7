#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[10];
    char codigo[10];
    char nome[50];
    int populacao;
    float pib;
    float area;
    int pontosTuristicos;
    float Densidade;
    float PIBpercapita;
    float Super1;

    //Apenas um titulo
    printf("*** Cadastro de Cartas ***\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** Cadastro da Primeira Carta ***\n");
    
    printf("Insira a letra que represente o estado da cidade:\n");
    scanf(" %c", estado);
    printf("Insira o código da cidade:\n");
    scanf(" %s", codigo);
    printf("Insira o nome da cidade:\n");
    scanf(" %s", nome);
    printf("Insira a população da cidade:\n");
    scanf(" %d", &populacao);
    printf("Insira a área da cidade em km²:\n");
    scanf(" %f", &area);
    printf("Insira o PIB da cidade:\n");
    scanf(" %f", &pib);
    printf("Insira o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosTuristicos);

    //Calculo da Densidade Populacional e PIB per capita e super
    Densidade = populacao / area;
    PIBpercapita = pib / populacao;

    Super1 = populacao + area + pib + pontosTuristicos + 1/Densidade + PIBpercapita;

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
    printf("Super: %.2f\n", Super1);

    //Cadastro da segunda carta

    char estado2[10];
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float pib2;
    float area2;
    int pontosTuristicos2;
    float densidade2;
    float PIBpercapita2;
    float Super2;

    printf("\n*** Cadastro da Segunda Carta ***\n");

    printf("Insira a letra que represente o estado da cidade:\n");
    scanf(" %c", estado2);
    printf("Insira o código da cidade:\n");
    scanf(" %s", codigo2);
    printf("Insira o nome da cidade:\n");
    scanf(" %s", nome2);
    printf("Insira a população da cidade:\n");
    scanf(" %d", &populacao2);
    printf("Insira a área da cidade em km²:\n");
    scanf(" %f", &area2);
    printf("Insira o PIB da cidade:\n");
    scanf(" %f", &pib2);
    printf("Insira o número de pontos turísticos da cidade:\n");
    scanf(" %d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    PIBpercapita2 = pib2 / populacao2;

    Super2 = populacao2 + area2 + pib2 + pontosTuristicos2 + 1/densidade2 + PIBpercapita2;

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
    printf("Super: %.2f\n", Super2);

    // Comparação das Cartas:
    int opcao1, opcao2, resultado1, resultado2;

    printf("\n*** Hora da Comparação! ***\n");

    do {
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super\n");
    printf("Digite o número da opção desejada:\n");
    scanf(" %d", &opcao1);

    switch (opcao1)
    {
    case 1:
    printf("População da cidade %s: %d\n", nome, populacao);
    printf("População da cidade %s: %d\n", nome2, populacao2);
    resultado1 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
    printf("Área da cidade %s: %.3fkm²\n", nome, area);
    printf("Área da cidade %s: %.3fkm²\n", nome2, area2);
    resultado1 = area > area2 ? 1 : 0;
        break;

    case 3:
    printf("PIB da cidade %s: R$%.2f\n", nome, pib);
    printf("PIB da cidade %s: R$%.2f\n", nome2, pib2);
    resultado1 = pib > pib2 ? 1 : 0;
        break;

    case 4:
    printf("Número de pontos turísticos da cidade %s: %d\n", nome, pontosTuristicos);
    printf("Número de pontos turísticos da cidade %s: %d\n", nome2, pontosTuristicos2);
    resultado1 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
        break;

    case 5:
    printf("Densidade populacional da cidade %s: %.2f hab/km²\n", nome, Densidade);
    printf("Densidade populacional da cidade %s: %.2f hab/km²\n", nome2, densidade2);
    resultado1 = Densidade < densidade2 ? 1 : 0;
        break;

    case 6:
    printf("PIB per capita da cidade %s: R$%.2f\n", nome, PIBpercapita);
    printf("PIB per capita da cidade %s: R$%.2f\n", nome2, PIBpercapita2);
    resultado1 = PIBpercapita > PIBpercapita2 ? 1 : 0;
        break;

    case 7:
    printf("Super da cidade %s: %.2f\n", nome, Super1);
    printf("Super da cidade %s: %.2f\n", nome2, Super2);
    resultado1 = Super1 > Super2 ? 1 : 0;
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    }
    } while (opcao1 < 1 || opcao1 > 7);

    do {
    printf("\nEscolha outro atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super\n");
    printf("Digite o número da opção desejada:\n");
    scanf(" %d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Você não pode escolher o mesmo atributo novamente!\n");
    } else {
    switch (opcao2)
    {
    case 1:
    printf("População da cidade %s: %d\n", nome, populacao);
    printf("População da cidade %s: %d\n", nome2, populacao2);
    resultado2 = populacao > populacao2 ? 1 : 0;
        break;

    case 2:
    printf("Área da cidade %s: %.3fkm²\n", nome, area);
    printf("Área da cidade %s: %.3fkm²\n", nome2, area2);
    resultado2 = area > area2 ? 1 : 0;
        break;

    case 3:
    printf("PIB da cidade %s: R$%.2f\n", nome, pib);
    printf("PIB da cidade %s: R$%.2f\n", nome2, pib2);
    resultado2 = pib > pib2 ? 1 : 0;
        break;

    case 4:
    printf("Número de pontos turísticos da cidade %s: %d\n", nome, pontosTuristicos);
    printf("Número de pontos turísticos da cidade %s: %d\n", nome2, pontosTuristicos2);
    resultado2 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
        break;

    case 5:
    printf("Densidade populacional da cidade %s: %.2f hab/km²\n", nome, Densidade);
    printf("Densidade populacional da cidade %s: %.2f hab/km²\n", nome2, densidade2);
    resultado2 = Densidade < densidade2 ? 1 : 0;
        break;

    case 6:
    printf("PIB per capita da cidade %s: R$%.2f\n", nome, PIBpercapita);
    printf("PIB per capita da cidade %s: R$%.2f\n", nome2, PIBpercapita2);
    resultado2 = PIBpercapita > PIBpercapita2 ? 1 : 0;
        break;

    case 7:
    printf("Super da cidade %s: %.2f\n", nome, Super1);
    printf("Super da cidade %s: %.2f\n", nome2, Super2);
    resultado2 = Super1 > Super2 ? 1 : 0;
        break;
    
    default:
        printf("Opção inválida!\n");
        break;
    } 
    } 
    } while (opcao1 == opcao2 || opcao2 < 1 || opcao2 > 7);

    printf("\n*** Resultado da Comparação ***\n");
    if (resultado1 && resultado2) 
    {
        printf("O jogador 1 venceu!");
    } else if (resultado1 != resultado2)
    {
        printf("Empate!");
    } else 
    {
        printf("O jogador 2 venceu!");
    }
    return 0;
}
