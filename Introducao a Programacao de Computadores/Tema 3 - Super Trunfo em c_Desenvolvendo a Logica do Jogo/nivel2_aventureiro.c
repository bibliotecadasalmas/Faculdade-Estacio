#include <stdio.h>
    // Desafio Super Trunfo - Países
    // Tema 2 - Comparação das Cartas
int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[4], estado2[4], codigo1[4], codigo2[4], cidade1[50], cidade2[50]; // %s (string)
    int populacao1, populacao2, turismo1, turismo2; //%d
    int escolhaMenu, escolhaAtributo; // Escolha de string
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, inverso_densidade1, inverso_densidade2, super_poder1, super_poder2, valorA, valorB; // %f

    //Menu interativo
    printf("Bem-vindo ao Jogo Super Trunfo. \n");
    printf("Por favor, digite o valor da opção desejada: \n");
    printf("[1] - Jogar\n");
    printf("[2] - Regras\n");
    printf("[3] - Sair...\n");
    scanf("%d", &escolhaMenu);

    switch (escolhaMenu) {
        case 1:
            printf("Vamos começar o jogo!\n");
            printf("Informe o valor dos atributos de cada carta:\n");
            // Cadastro das Cartas:
            // A escrita devera ser realizado tudo junto e sem acentos, porque ainda não foi orientado a usar fgets ou adicionar um biblioteca que lide com as regras de escrita "Português_Brasil"
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
            printf("\nEscolha o atributo de combate: \n");
            printf("[1] - População\n");
            printf("[2] - Área\n");
            printf("[3] - PIB\n");
            printf("[4] - Número de pontos Turísticos\n");
            printf("[5] - Densidade Populacional\n");
            printf("[6] - PIB per Capita\n");
            printf("[7] - Super Poder (soma de todos os atributos)\n");
            scanf("%d", &escolhaAtributo);

            switch (escolhaAtributo) {
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
                default:
                    printf("Opção inválida, por favor feche o programa e abra novamente para tentar outra vez.\n");
            }

            printf("CARTA 1 - %s (%s): %.2f\n", cidade1, estado1, valorA);
            printf("CARTA 2 - %s (%s): %.2f\n", cidade2, estado2, valorB);

            if (valorA > valorB) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (valorA < valorB) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Por incrível que pareça, deu empate!\n");
            }
        break;
        case 2:
            printf("--- REGRAS ---\n");
            printf("1. O jogador deve cadastrar os atributos de duas cartas, que representam cidades brasileiras.\n");
            printf("2. Os atributos são: Estado, Código da Carta, Nome da Cidade, População, Área, PIB e Número de pontos Turísticos.\n");
            printf("3. O jogador deve escolher um atributo para comparar entre as duas cartas.\n");
            printf("4. O jogador com o maior valor no atributo escolhido vence a rodada.\n");
            printf("5. Em caso de empate, nenhuma carta vence.\n");
            printf("6. O jogo pode ser reiniciado para novas rodadas.\n");
            printf("Divirta-se e boa sorte!\n");
        break;
        case 3:
            printf("É uma pena... espero ve-lo novamente em breve.\n");
        break;
        default:
            printf("** Opção invalida, por favor feche o programa e abra novamente para tentar outra vez. **\n");
    }

    return 0; 
}
