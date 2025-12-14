#include <stdio.h>

// O Objetivo é ter que fazer o menor possivel de manutenção no codigo
// Definindo as constantes
#define LINHA 10 // Índice Linha - Letras
#define COLUNA 10 // Índice Coluna - Númeral
#define I 3//  Representa a quantidade de 'navio' a ser colocado (pelo Jogador 1) ou quantidade de 'ataque' a ser lançado (pelo Jogador 2)
#define J 2// Representa a 'quantidade de cordenada (x e y)' a ser informado para se colocar cada navio (pelo Jogador 1) ou para lançar os 'ataque' (pelo Jogador 2)

int main() {

    // Variáveis
    // A 'matriz[i][j]' na variavel: o [i] representa a 'quantidade de navio' a ser colocado (pelo Jogador 1) ou 'quantidade de ataque' a ser lançado (pelo Jogador 2), enquanto o [j] representa a 'quantidade de cordenada (x e y)' necessario a ser informado para se colocar o navio (pelo Jogador 1) ou para lançar o 'ataque' (pelo Jogador 2)
    int jogador1[I][J], jogador2[I][J];
    int escolha;
    int i, j, k;
    char indiceLetra[COLUNA]; // Vetor a ser inserido no indice da matriz - Letras

    // === Menu principal ===
    printf("\n=== BATALHA NAVAL ===\n");
    printf("[1] Jogar\n");
    printf("[2] Regras\n");
    printf("[3] Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    
    switch (escolha)
    {
    case 1:
        // == Tabela Matriz ==
        printf("\n    "); // Indice Letra
        for (j = 0; j < COLUNA; j++)
        {
            printf("%c ", indiceLetra[j] = 'A' + j);
        }
        printf("\n");
        for (i = 0; i < LINHA; i++) // Indice Alfabeto
        {
            printf("%2d ", i + 1);
            for (j = 0; j < COLUNA; j++) // Preenchendo a matriz com '0'
            {
                printf(" ~");
            }
            printf("\n");
        }

        // === Jogador 1 ===
        printf("\nJogador 1 - Posicione os navios (%d posições)\n", I); // Aqui a variavel 'I' esta se referindo a quantidade de 'navios' a ser inserido
        printf("As posições dos navio serão marcados pelo simbolo 'O'.\n");
        for (i = 0; i < I; i++)
        {
            printf("%dª Posição (linha 1-%d): ", i + 1, LINHA);
            scanf("%d", &jogador1[i][0]);
            printf("%dª Posição (coluna 1-%d): ", i + 1, COLUNA);
            scanf("%d", &jogador1[i][1]);
        }

        // === Jogador 2 ===
        printf("\nJogador 2 - Escolha suas tentativas (%d ataques)\n", I); // Aqui a variavel 'I' esta se referindo a quantidade de 'ataques' a ser inserido
        
        for (i = 0; i < I; i++)
        {
            printf("%dª Ataque (linha 1-%d): ", i + 1, LINHA);
            scanf("%d", &jogador2[i][0]);
            printf("%dª Ataque (coluna 1-%d): ", i + 1, COLUNA);
            scanf("%d", &jogador2[i][1]);
        }

        // === Validação e resultado ===
        printf("\n=== RESULTADO DO TABULEIRO ===\n\n");
        printf("    ");
        for (j = 0; j < COLUNA; j++)
        {
            printf("%c ", indiceLetra[j] = 'A' + j);
        }
        printf("\n");
        // Na 'Tabela de Resultado', o for, o 'i' e o 'j' deverá ser igual a 1 porque quando inserimos as coordenas, ele informa que o inicio é [1][1] e não [0][0]
        for (i = 1; i <= LINHA; i++)
        {
            printf("%2d ", i);
            for (j = 1; j <= COLUNA; j++)
            {
                int marcado = 0; // Falso = 0
                // Verifica se é posição do jogador 2 atacou aqui
                for (k = 0; k < I; k++) // Esse laço 'for' informa apenas a quantidade de ataque
                {
                    if (i == jogador2[k][0] && j == jogador2[k][1])
                    {
                        printf(" X");
                        marcado = 1; // Verdadeiro = 1
                        break;
                    }
                }
                // Verifica se é posição do jogador 2 (ataque)
                if (!marcado) // 
                {
                    for (k = 0; k < I; k++) // Esse laço 'for' informa apenas a quantidade de navio
                    {
                        if (i == jogador1[k][0] && j == jogador1[k][1])
                        {
                            printf(" O");
                            marcado = 1;
                            break;
                        }
                    }
                }
                if (!marcado)
                {
                    printf(" ~");
                }
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