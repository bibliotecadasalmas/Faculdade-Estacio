#include <stdio.h>
    // Desafio Super Trunfo - Países
    // Tema 2 - Comparação das Cartas
int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[4], estado2[4], codigo1[4], codigo2[4], cidade1[50], cidade2[50]; // %s (string)
    int populacao1, populacao2, turismo1, turismo2; //%d
    int escolhaMenu, escolhaAtributo1, escolhaAtributo2; // Variavel de escolha
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, inverso_densidade1, inverso_densidade2, super_poder1, super_poder2; // %f
    float valorA, valorB, valorC, valorD; // Variavel de escolha

    //Menu interativo
    printf("Bem-vindo ao Jogo Super Trunfo. \n");
    printf("Por favor, digite o valor da opção desejada: \n");
    printf("[1] - Jogar\n");
    printf("[2] - Regras\n");
    printf("[3] - Sair...\n");
    scanf("%d", &escolhaMenu);

    switch (escolhaMenu) {
        case 1:
            printf("----------------------------------------------------------------------------------------------------------------\n");
            printf("Vamos começar o jogo!\n");
            printf("Informe o valor dos atributos de cada carta:\n");
            // Cadastro das Cartas:
            // A escrita devera ser realizado tudo junto e sem acentos, porque ainda não foi orientado a usar fgets ou adicionar uma biblioteca que lide com as regras de escrita "Português_Brasil"
            // Entrada de dados da Carta 1
            printf("--- Carta 1 ---\n");
            printf("Estado: ");
            scanf("%3s", estado1);
            printf("Código da Carta (a primeira letra do estado seguida de um número de 01 a 04 - ex: A01, B03): ");
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
            printf("\n--- Carta 2 ---\n");
            printf("Estado: ");
            scanf("%3s", estado2);
            printf("Código da Carta (a primeira letra do estado seguida de um número de 01 a 04 - ex: A01, B03): ");
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
            
            // Cálculo de Densidade Populacional
            densidade1 = populacao1 / area1;
            densidade2 = populacao2 / area2;
            inverso_densidade1 = 1 / densidade1;
            inverso_densidade2 = 1 / densidade2;
            /* Descrição:
            - Se a densidade for alta, a cidade está “apertada” (pouco espaço, muita gente);
            - Se a densidade for baixa, a cidade tem “mais espaço por pessoa”.
            
            Inverso da densidade - “Inverso” em matemática é 1 dividido pelo valor: inverso_densidade = 1 / densidade.
            Exemplo:
            - Cidade A: densidade = 1000 hab/km² → inverso = 0.001;
            - Cidade B: densidade = 10 hab/km² → inverso = 0.1.
            */

            // Calculo PIB per Capita
            capita1 = pib1 / populacao1;
            capita2 = pib2 / populacao2;

            // Calculo do Super Poderes
            super_poder1 = populacao1 + turismo1 + area1 + pib1 + capita1 + inverso_densidade1;
            super_poder2 = populacao2 + turismo2 + area2 + pib2 + capita2 + inverso_densidade2;
            
            //Escolha do atributo para comparar
            printf("\nAgora você tera que escolher 2 atributos para serem somados.\n");
            printf("[1] - População\n");
            printf("[2] - Área\n");
            printf("[3] - PIB\n");
            printf("[4] - Número de pontos Turísticos\n");
            printf("[5] - Densidade Populacional\n");
            printf("[6] - PIB per Capita\n");
            printf("[7] - Super Poder (soma de todos os atributos)\n");
            printf("\nEscolha o primeiro atributo: ");
            scanf("%d", &escolhaAtributo1);
            printf("\nEscolha o segundo atributo: ");
            scanf("%d", &escolhaAtributo2);
            if (escolhaAtributo1 == escolhaAtributo2) {
                printf("\nVocê escolheu o mesmo atributo duas vezes, por favor feche o programa e abra novamente para tentar outra vez.\n");
            } else if (((escolhaAtributo1 >= 1) && (escolhaAtributo1 <= 7)) && ((escolhaAtributo2 >= 1) && (escolhaAtributo2 <= 7))) {
                switch (escolhaAtributo1) {
                    case 1:
                        valorA = populacao1;
                        valorB = populacao2;
                    break;
                    case 2:
                        valorA = area1;
                        valorB = area2;
                    break;
                    case 3:
                        valorA = pib1;
                        valorB = pib2;
                    break;
                    case 4:
                        valorA = turismo1;
                        valorB = turismo2;
                    break;
                    case 5:
                        valorA = densidade1;
                        valorB = densidade2;
                    break;
                    case 6:
                        valorA = capita1;
                        valorB = capita2;
                    break;
                    case 7:
                        valorA = super_poder1;
                        valorB = super_poder2;
                    break;
                }
                switch (escolhaAtributo2) {
                    case 1:
                        valorC = populacao1;
                        valorD = populacao2;
                    break;
                    case 2:
                        valorC = area1;
                        valorD = area2;
                    break;
                    case 3:
                        valorC = pib1;
                        valorD = pib2;
                    break;
                    case 4:
                        valorC = turismo1;
                        valorD = turismo2;
                    break;
                    case 5:
                        valorC = densidade1;
                        valorD = densidade2;
                    break;
                    case 6:
                        valorC = capita1;
                        valorD = capita2;
                    break;
                    case 7:
                        valorC = super_poder1;
                        valorD = super_poder2;
                    break;
                }
                printf("\n--- RESULTADO ---\n");
                if (escolhaAtributo1 == 1) {
                    printf("Atributo 1 escolhido: População\n");
                } else if (escolhaAtributo1 == 2) {
                    printf("Atributo 1 escolhido: Área\n");
                } else if (escolhaAtributo1 == 3) {
                    printf("Atributo 1 escolhido: PIB\n");
                } else if (escolhaAtributo1 == 4) {
                    printf("Atributo 1 escolhido: Número de pontos Turísticos\n");
                } else if (escolhaAtributo1 == 5) {
                    printf("Atributo 1 escolhido: Densidade Populacional\n");
                } else if (escolhaAtributo1 == 6) {
                    printf("Atributo 1 escolhido: PIB per Capita\n");
                } else if (escolhaAtributo1 == 7) {
                    printf("Atributo 1 escolhido: Super Poder\n");
                }
                if (escolhaAtributo2 == 1) {
                    printf("Atributo 2 escolhido: População\n");
                } else if (escolhaAtributo2 == 2) {
                    printf("Atributo 2 escolhido: Área\n");
                } else if (escolhaAtributo2 == 3) {
                    printf("Atributo 2 escolhido: PIB\n");
                } else if (escolhaAtributo2 == 4) {
                    printf("Atributo 2 escolhido: Número de pontos Turísticos\n");
                } else if (escolhaAtributo2 == 5) {
                    printf("Atributo 2 escolhido: Densidade Populacional\n");
                } else if (escolhaAtributo2 == 6) {
                    printf("Atributo 2 escolhido: PIB per Capita\n");
                } else if (escolhaAtributo2 == 7) {
                    printf("Atributo 2 escolhido: Super Poder\n");
                }
                printf("CARTA 1 - %s (%s): %.2f + %.2f = %.2f\n", cidade1, estado1, valorA, valorC, valorA + valorC);
                printf("CARTA 2 - %s (%s): %.2f + %.2f = %.2f\n", cidade2, estado2, valorB, valorD, valorB + valorD);
                if ((valorA + valorC) > (valorB + valorD)) {
                    printf("Resultado: Carta 1 (%s) venceu com %.2f pontos!\n", cidade1, valorA + valorC);
                } else if ((valorA + valorC) < (valorB + valorD)) {
                    printf("Resultado: Carta 2 (%s) venceu com %.2f pontos!\n", cidade2, valorB + valorD);
                } else {
                    printf("Por incrível que pareça, deu empate!\n");
                }
                printf("\nObrigado por jogar o Super Trunfo das Cidades!\n");
            } else {
                printf("\nOpção inválida, por favor feche o programa e abra novamente para tentar outra vez.\n");
            }
        break;
        case 2:
            printf("\n--- REGRAS ---\n");
            printf("1. Cada jogador deve cadastrar duas cartas com os atributos de diferentes cidades.\n");
            printf("2. Cada carta deve conter os seguintes atributos: Estado, Código da Carta, Nome da Cidade, População, Área, PIB e Número de pontos Turísticos.\n");
            printf("3. A Densidade Populacional, PIB per Capita e Super Poder serão calculados automaticamente pelo sistema.\n");
            printf("4. O jogador deve escolher dois atributos diferentes para comparar entre as duas cartas.\n");
            printf("5. O jogador cuja soma dos valores dos atributos escolhidos for maior, vence a rodada.\n");
            printf("6. Em caso de empate, nenhuma carta vence a rodada.\n");
        break;
        case 3:
            printf("\nÉ uma pena... espero ve-lo novamente em breve.\n");
        break;
        default:
            printf("** Opção invalida, por favor feche o programa e abra novamente para tentar outra vez. **\n");
    }

    return 0; 
}
