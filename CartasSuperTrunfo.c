#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // == Área para definição das variáveis para armazenar as propriedades das cidades == 
  
  // Variáveis Carta 1
  char estado1; // Por exemplo A
  char codigo1[4]; // Por exemplo A01
  char nomeCidade1[50]; // Buffer maior para nomes de cidade com espaço
  unsigned long int populacao1; // Por exemplo 12325000
  float area1; // Por exemplo 1521.11
  float pib1; // Por exemplo 699.28
  int pontosTuristicos1; // Por exemplo 50

  // Variáveis Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // Variáveis para cálculos
  float densidade1, pibPerCapita1, superPoder1;
  float densidade2, pibPerCapita2, superPoder2;

  // Variáveis de resultado
  int resultadoPopulacao;
  int resultadoArea;
  int resultadoPIB;
  int resultadoPontosTuristicos;
  int resultadoDensidade;
  int resultadoPIBPerCapita;
  int resultadoSuperPoder;

  // == Área para entrada de dados ==

  // Entrada dados Carta 1
  printf("Cadastro da Carta 1\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado1); // Espaço antes do %c evita pegar o ENTER anterior

  printf("Codigo da carta (ex: A01): ");
  scanf("%s", codigo1);  // %s lê até encontrar espaço

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomeCidade1);  // lê até o ENTER, permite nomes com espaço

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // Entrada dados Carta 2
  printf("Cadastro da Carta 2\n");

  printf("Estado (A-H): ");
  scanf(" %c", &estado2); // Espaço antes do %c evita pegar o ENTER anterior

  printf("Codigo da carta (ex: A02): ");
  scanf("%s", codigo2);  // %s lê até encontrar espaço

  printf("Nome da cidade: ");
  scanf(" %[^\n]", nomeCidade2);  // lê até o ENTER, permite nomes com espaço

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  // == Área para calculos ==
  // Cálculos Carta 1
  densidade1 = populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;
  superPoder1 = 
        (float) populacao1 +
        area1 +
        pib1 +
        pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidade1);

  // Cálculos Carta 2
  densidade2 = populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;
  superPoder2 = 
        (float) populacao2 +
        area2 +
        pib2 +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidade2);

  // Comparações
  resultadoPopulacao = populacao1 > populacao2;
  resultadoArea = area1 > area2;
  resultadoPIB = pib1 > pib2;
  resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
  resultadoDensidade = densidade1 < densidade2;
  resultadoPIBPerCapita = pibPerCapita1 > pibPerCapita2;
  resultadoSuperPoder = superPoder1 > superPoder2;

  // == Área para exibição dos dados da cidade ==

  // Exibição Carta 1
  printf("\n--- Carta 1 ---\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km2\n", area1);  // %.2f limita para 2 casas decimais
  printf("PIB: %.2f\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
  printf("PIB per Capita: %.2f\n", pibPerCapita1);
  printf("Super Poder: %.2f\n", superPoder1);

  // Exibição Carta 2
  printf("\n--- Carta 2 ---\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);  // %.2f limita para 2 casas decimais
  printf("PIB: %.2f\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per Capita: %.2f\n", pibPerCapita2);
  printf("Super Poder: %.2f\n", superPoder2);

  // Exibição Comparações
  printf("\nComparacao de Cartas:\n");
  printf("Populacao: Carta 1 é maior que Carta 2 (%d)\n", resultadoPopulacao);
  printf("Area: Carta 1 é maior que Carta 2 (%d)\n", resultadoArea);
  printf("PIB: Carta 1 é maior que Carta 2 (%d)\n", resultadoPIB);
  printf("Pontos Turisticos: Carta 1 é maior que Carta 2 (%d)\n", resultadoPontosTuristicos);
  printf("Densidade Populacional: Carta 1 é menor que Carta 2 (%d)\n", resultadoDensidade);
  printf("PIB per Capita: Carta 1 é maior que Carta 2 (%d)\n", resultadoPIBPerCapita);
  printf("Super Poder: Carta 1 é maior que Carta 2 (%d)\n", resultadoSuperPoder);

return 0;
} 
