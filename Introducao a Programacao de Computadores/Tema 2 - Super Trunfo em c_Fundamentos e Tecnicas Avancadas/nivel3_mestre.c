#include <stdio.h>

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[50], cidade2[50]; //%c ou %s
    unsigned long int populacao1, populacao2; //%lu
    int turismo1, turismo2; //%d
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, super_poder1, super_poder2, inverso_densidade1, inverso_densidade2; //%f

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
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (o Produto Interno Bruto da cidade): ");
    scanf("%f", &pib1);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &turismo1);

    // Entrada de dados da Carta 2
    printf("\nCarta 2: \n");
    printf("Estado (uma letra de 'A' a 'H' - representando um dos oito estados): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49s", cidade2);
    printf("População (número de habitantes da cidade): ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (o Produto Interno Bruto da cidade): ");
    scanf("%f", &pib2);
    printf("Número de pontos Turísticos: ");
    scanf("%d", &turismo2);

    // Área para exibição dos dados da cidade
    // Cálculo de Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    capita1 = pib1 / populacao1;
    capita2 = pib2 / populacao2;

    // Saída de dados da carta 1
    printf("\n--- Dados da Carta 1 --\n");
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);

    // Saída de dados da carta 2
    printf("\n--- Dados da Carta 2 --\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    // Super Poderes
    //Calculo dos Super Poderes
    inverso_densidade1 = 1 / densidade1;
    inverso_densidade2 = 1 / densidade2;

    /*DENSIDADE POPULACIONAL
    - Se a densidade for alta, a cidade está “apertada” (pouco espaço, muita gente);
    - Se a densidade for baixa, a cidade tem “mais espaço por pessoa”.
    
    Inverso da densidade - “Inverso” em matemática é 1 dividido pelo valor: inverso_densidade = 1 / densidade.
    Exemplo:
    - Cidade A: densidade = 1000 hab/km² → inverso = 0.001;
    - Cidade B: densidade = 10 hab/km² → inverso = 0.1.
    */

    super_poder1 = populacao1 + turismo1 + area1 + pib1 + capita1 + inverso_densidade1;
    super_poder2 = populacao2 + turismo2 + area2 + pib2 + capita2 + inverso_densidade2;

    // Resultado do Combate
    printf("\n--- Combate De Super Poderes ---\n");
    printf("Quando a 'CARTA 1' vencer = 1\n");
    printf("Quando a 'CARTA 2' vencer = 0\n");
    printf("\n-- Resultado do Combate --\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Número de pontos Turísticos: %d\n", turismo1 > turismo2);
    printf("Densidade Populacional: %d\n", densidade1 > densidade2);
    printf("PIB per Capita: %d\n", capita1 > capita2);
    printf("Super Poder Total: %d\n", super_poder1 > super_poder2);

    return 0; 
}