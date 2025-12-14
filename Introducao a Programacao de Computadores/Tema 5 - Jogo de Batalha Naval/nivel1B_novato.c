#include <stdio.h>

int main() {

    // Variáveis
    int escolha;
    int escolha1[3][2], escolha2[3][2]; // cada jogador tem 3 posições (linha e coluna)
    int i, j;
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Menu principal
    printf("\n=== BATALHA NAVAL ===\n");
    printf("[1] Jogar\n");
    printf("[2] Regras\n");
    printf("[3] Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        // Mostrando o tabuleiro vazio
        printf("\nTABULEIRO (10x10)\n\n");
        printf("   ");
        for (j = 0; j < 10; j++) printf("%c ", coluna[j]);
        printf("\n");
        for (i = 1; i <= 10; i++) {
            printf("%2d", i);
            for (j = 0; j < 10; j++) printf(" 0");
            printf("\n");
        }

        // === Jogador 1 ===
        printf("\nJogador 1 - Posicione seus navios (3 posições)\n");
        for (i = 0; i < 3; i++) {
            printf("Posição %d (linha 1-10): ", i + 1);
            scanf("%d", &escolha1[i][0]);
            printf("Posição %d (coluna 1-10): ", i + 1);
            scanf("%d", &escolha1[i][1]);
        }

        // === Jogador 2 ===
        printf("\nJogador 2 - Escolha suas tentativas (3 ataques)\n");
        for (i = 0; i < 3; i++) {
            printf("Ataque %d (linha 1-10): ", i + 1);
            scanf("%d", &escolha2[i][0]);
            printf("Ataque %d (coluna 1-10): ", i + 1);
            scanf("%d", &escolha2[i][1]);
        }

        // === Validação e resultado ===
        printf("\n=== RESULTADO DO TABULEIRO ===\n\n");
        printf("   ");
        for (j = 0; j < 10; j++) printf("%c ", coluna[j]);
        printf("\n");

        for (i = 1; i <= 10; i++) {
            printf("%2d", i);
            for (j = 1; j <= 10; j++) {
                int marcado = 0;

                // Verifica se é posição do jogador 1
                for (int k = 0; k < 3; k++) {
                    if (i == escolha1[k][0] && j == escolha1[k][1]) {
                        printf(" 1");
                        marcado = 1;
                        break;
                    }
                }

                // Verifica se é posição do jogador 2 (ataque)
                if (!marcado) {
                    for (int k = 0; k < 3; k++) {
                        if (i == escolha2[k][0] && j == escolha2[k][1]) {
                            printf(" 2");
                            marcado = 1;
                            break;
                        }
                    }
                }

                if (!marcado) printf(" 0");
            }
            printf("\n");
        }
        printf("\n");
        break;

    case 2:
        printf("\n=== REGRAS ===\n\n");
        printf("1. O jogo é para dois jogadores.\n");
        printf("2. O Jogador 1 posiciona até 3 navios no tabuleiro 10x10.\n");
        printf("3. O Jogador 2 tenta adivinhar as posições e atacar.\n");
        printf("4. Vence o Jogador 2 se acertar 2 ataques,\n");
        printf("   ou o Jogador 1 se conseguir desviar 2 vezes.\n\n");
        break;

    case 3:
        printf("\nSaindo do jogo... até a próxima!\n");
        break;

    default:
        printf("\nValor incorreto! Reinicie o jogo e tente novamente.\n");
    }

    return 0;
}