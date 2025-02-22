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


    
    //Comparação de cartas 
    printf("\n*** Comparação das Cartas ***\n");
    int carta1 = 0, carta2 = 0;

    printf("Carta %s- População: %d\n", codigo, populacao);
    printf("Carta %s- População: %d\n", codigo2, populacao2);
    if (populacao > populacao2) {
        printf("A carta %s tem a maior população que a carta %s\n +1 ponto pra carta %s\n", codigo, codigo2, codigo);
        carta1++;
    } else if (populacao < populacao2) {
        printf("A carta %s tem a maior população que a carta %s\n +1 ponto pra carta %s\n", codigo2, codigo, codigo2);
        carta2++;
    } else {
            printf("As cartas %s e %s têm a mesma população\n", codigo, codigo2);
    }

    printf("Carta %s- Área: %.2fkm²\n", codigo, area);
    printf("Carta %s- Área: %.2fkm²\n", codigo2, area2);
    if (area > area2) {
        printf("A carta %s tem a maior área que a carta %s\n +1 ponto pra carta %s\n", codigo, codigo2, codigo);
        carta1++;
    } else if (area < area2) {
        printf("A carta %s tem a maior área que a carta %s\n +1 ponto pra carta %s\n", codigo2, codigo, codigo2);
        carta2++;
    } else {
            printf("As cartas %s e %s têm a mesma área\n", codigo, codigo2);
    }  

    printf("Carta %s- PIB: R$:%.2f\n", codigo, pib);
    printf("Carta %s- PIB: R$:%.2f\n", codigo2, pib2);
    if (pib > pib2) {
        printf("A carta %s tem o maior PIB que a carta %s\n +1 ponto pra carta %s\n", codigo, codigo2, codigo);
        carta1++;
    } else if (pib < pib2) {
        printf("A carta %s tem o maior PIB que a carta %s\n +1 ponto pra carta %s\n", codigo2, codigo, codigo2);
        carta2++;
    } else {
            printf("As cartas %s e %s têm o mesmo PIB\n", codigo, codigo2);
    }
    
    printf("Carta %s- Número de pontos turísticos: %d\n", codigo, pontosTuristicos);
    printf("Carta %s- Número de pontos turísticos: %d\n", codigo2, pontosTuristicos2);
    if (pontosTuristicos > pontosTuristicos2) {
        printf("A carta %s tem mais pontos turísticos que a carta %s\n +1 ponto pra carta %s\n", codigo, codigo2, codigo);
        carta1++;
    } else if (pontosTuristicos < pontosTuristicos2) {
        printf("A carta %s tem mais pontos turísticos que a carta %s\n +1 ponto pra carta %s\n", codigo2, codigo, codigo2);
        carta2++;
    } else {
            printf("As cartas %s e %s têm o mesmo número de pontos turísticos\n", codigo, codigo2);
    }

    printf("Carta %s- Densidade Populacional: %.2fhab/km²\n", codigo, Densidade);
    printf("Carta %s- Densidade Populacional: %.2fhab/km²\n", codigo2, densidade2);
    printf("Obs: Ganha a carta com menor densidade populacional\n");
    if (Densidade > densidade2) {
        printf("A carta %s tem a maior densidade populacional que a carta %s\n +1 ponto pra carta %s\n", codigo, codigo2, codigo2);
        carta2++;
    } else if (Densidade < densidade2) {
        printf("A carta %s tem a maior densidade populacional que a carta %s\n +1 ponto pra carta %s\n", codigo2, codigo, codigo);
        carta1++;
    } else {
            printf("As cartas %s e %s têm a mesma densidade\n", codigo, codigo2);
    }

    printf("Carta %s- PIB per capita: R$:%.2f\n", codigo, PIBpercapita);
    printf("Carta %s- PIB per capita: R$:%.2f\n", codigo2, PIBpercapita2);
    if (PIBpercapita > PIBpercapita2) {
        printf("A carta %s tem o maior PIB per capita que a carta %s\n +1 ponto pra carta %s\n", codigo, codigo2, codigo);
        carta1++;
    } else if (PIBpercapita < PIBpercapita2) {
        printf("A carta %s tem o maior PIB per capita que a carta %s\n +1 ponto pra carta %s\n", codigo2, codigo, codigo2);
        carta2++;
    } else {
            printf("As cartas %s e %s têm o mesmo PIB per capita\n", codigo, codigo2);
    }

    printf("\n*** Resultado da Comparação ***\n");
    if (carta1 > carta2) {
        printf("A carta %s venceu com %d pontos!\n", codigo, carta1);
    } else if (carta1 < carta2) {
        printf("A carta %s venceu com %d pontos!\n", codigo2, carta2);
    } else if (carta1 == carta2) {
        printf("As cartas %s e %s empataram!\n", codigo, codigo2);
    }
   
    return 0;
}
