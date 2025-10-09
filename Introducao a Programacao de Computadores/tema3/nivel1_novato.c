#include <stdio.h>
    // Desafio Super Trunfo - Países
    // Tema 2 - Comparação das Cartas
int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[4], estado2[4], codigo1[4], codigo2[4], cidade1[50], cidade2[50]; //%s (string)
    int populacao1, populacao2, turismo1, turismo2; //%d
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, inverso_densidade1, inverso_densidade2, super_poder1, super_poder2; //%f

    // Cadastro das Cartas:
    // Entrada de dados da Carta 1
    // A escrita devera ser realizado tudo junto e sem acentos, porque ainda não foi orientado a usar fgets ou adicionar um biblioteca que lide com as regras de escrita "Português_Brasil"
    printf("Carta 1: \n");
    printf("Estado: ");
    scanf("%3s", estado1);
    printf("Código da Carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade (escreva tudo junto e sem acento): ");
    scanf("%49s", cidade1);
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
    printf("Estado: ");
    scanf("%3s", estado2);
    printf("Código da Carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade (escreva tudo junto e sem acento): ");
    scanf("%49s", cidade2);
    printf("População (número de habitantes da cidade): ");
    scanf("%d", &populacao2);
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
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);

    // Saída de dados da carta 2
    printf("\n--- Dados da Carta 2 --\n");
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    /* DENSIDADE POPULACIONAL
    - Se a densidade for alta, a cidade está “apertada” (pouco espaço, muita gente);
    - Se a densidade for baixa, a cidade tem “mais espaço por pessoa”.
    Inverso da densidade - “Inverso” em matemática é 1 dividido pelo valor: inverso_densidade = 1 / densidade.
    Exemplo:
    - Cidade A: densidade = 1000 hab/km² → inverso = 0.001;
    - Cidade B: densidade = 10 hab/km² → inverso = 0.1.
    */
    inverso_densidade1 = 1 / densidade1;
    inverso_densidade2 = 1 / densidade2;

    // Super Poderes - Calculo dos Super Poderes
    super_poder1 = populacao1 + turismo1 + area1 + pib1 + capita1 + inverso_densidade1;
    super_poder2 = populacao2 + turismo2 + area2 + pib2 + capita2 + inverso_densidade2;

    // Comparação de Cartas:
    printf("\nCombate de atributos: Super Poder\n");
    printf("CARTA 1 - %s (%s): %.2f\n", cidade1, estado1, super_poder1);
    printf("CARTA 2 - %s (%s): %.2f\n", cidade2, estado2, super_poder2);
    if (super_poder1 > super_poder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0; 
}