#include <stdio.h>

/*
    Programa: Movimentação das Peças de Xadrez
    Nível: Novato

    Descrição:
    - O programa deverá simular a movimentação de três peças de xadrez: Bispo, Torre e Rainha;
    - Cada peça realizará um movimento fixo, utilizando uma estrutura de repetição diferente:
        - Bispo;
        - Torre;
        - Rainha;
    - Cada peça se moverá um número determinado de casas:
        - Bispo: 5 casas;
        - Torre: 5 casas;
        - Rainha: 8 casas.

    Regras de movimentação:
        - O Bispo deverá simular o movimento de cinco casas na diagonal para cima e à direita;
        - A Torre deverá simular o movimento de cinco casas para a direita;
        - A Rainha deverá simular o movimento de oito casas para a esquerda.

    Instruções para implementação:
    1. Declare variáveis (ou constantes) para representar o número de casas que cada peça pode se mover;
    2. Solicite ao usuário que escolha qual peça deseja mover:
        - [1] Bispo
        - [2] Torre
        - [3] Rainha
    3. Com base na escolha do usuário:
        - Execute o movimento da peça correspondente utilizando a estrutura de repetição indicada;
        - Exiba na tela uma mensagem descrevendo o movimento a cada iteração.
    4. Caso o usuário insira uma opção inválida, exiba uma mensagem de erro.

    Observação:
    - Este exercício tem como objetivo reforçar o uso e a diferença entre as estruturas de repetição 
      'while', 'do-while' e 'for', aplicando-as de forma prática e simbólica no contexto do xadrez.
*/

int main() {

    int escolha, bispo = 0, torre = 0, rainha = 0;
 
    printf("Movimentação das peças de xadrez\n");
    printf("Selecione uma peça que deseja mover:\n");
    printf("[1] Bispo\n");
    printf("[2] Torre\n");
    printf("[3] Rainha\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    
    switch (escolha)
    {
    case 1:
        // While
        while (bispo < 5)
        {
            printf("\nO Bispo movimenta-se diagonal para cima e à direita.");
            bispo++;
        }
        break;
    case 2:
        // Do-while
        do
        {
            printf("\nA Torre movimenta-se para à direita.");
            torre++;
        } while (torre < 5);
        break;
    case 3:
        // For
        for (; rainha < 8; rainha++)
        {
            printf("\nA Rainha movimenta-se se para esquerda.");
        }
    break;
    default:
        printf("\nOpção inválida!");
    break;
    }

    return 0;
}