#include <stdio.h>

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1, pib2;
  
    // Área para entrada de dados
    // Entrada de dados da Carta 1
    printf("Carta 1: \n");
    printf("Estado (uma letra de 'A' a 'H' - representando um dos oito estados): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): ");
    scanf(" %3s", codigo1);
    printf("Nome da Cidade (escreva tudo junto): ");
    scanf(" %49s", cidade1);
    printf("População (número de habitantes da cidade): ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (o Produto Interno Bruto da cidade): ");
    scanf("%f", &pib1);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &turismo1);
    
    // Entrada de dados da Carta 2
    printf("\nCarta 2: \n");
    getchar ();
    printf("Estado (uma letra de 'A' a 'H' - representando um dos oito estados): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49s", cidade2);
    printf("População (número de habitantes da cidade): ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (o Produto Interno Bruto da cidade): ");
    scanf("%f", &pib2);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &turismo2);
    
    // Área para exibição dos dados da cidade
    // Saída de dados da carta 1
    printf("\n--- Dados da Carta 1 --\n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", turismo1);
    
    // Saída de dados da carta 2
    printf("\n--- Dados da Carta 2 --\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos Turísticos: %d", turismo2);

return 0;
} 