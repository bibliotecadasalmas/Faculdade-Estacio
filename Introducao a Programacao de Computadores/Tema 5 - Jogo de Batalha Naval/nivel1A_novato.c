#include <stdio.h>

int main() {

    // Variaveis
    int escolha, escolha1A, escolha1B, escolha1C, escolha1D, escolha1E, escolha1F, escolha2A, escolha2B, escolha2C, escolha2D, escolha2E, escolha2F;
    int i, j, escolhaColuna, escolhaLinha;
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Menu principal
    printf("\nTABULEIRO BATALHA NAVAL\n");
    printf("[1] Jogar\n");
    printf("[2] Regras\n");
    printf("[3] Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

    // Escolha Caso
    switch (escolha)
    {
    case 1:
        // Mostrando a tabela 
        printf("\nTABULEIRO BATALHA NAVAL\n\n");
        // Coluna - Letras
        printf("   ");
        for (j = 0; j < 10; j++)
        {
            printf("%c ", coluna[j]);
        }
        printf("\n");
        // Linha - Numeros
        for (i = 1; i <= 10; i++)
        {
            printf("%2d", i);
            for (j = 0; j < 10; j++)
            {
                printf(" 0");
            }
            printf("\n");
        }

        // Escolha do 1º Jogador
        printf("\nJogador 1\n");
        printf("Selecione a linha da 1ª posição: ");
        scanf("%d", &escolha1A);
        printf("Selecione a coluna da 1ª posição: ");
        scanf("%d", &escolha1B);
        printf("\nSelecione a linha da 2ª posição: ");
        scanf("%d", &escolha1C);
        printf("\nSelecione a coluna da 2ª posição: ");
        scanf("%d", &escolha1D);
        printf("\nSelecione a linha da 3ª posição: ");
        scanf("%d", &escolha1E);
        printf("\nSelecione a coluna da 3ª posição: ");
        scanf("%d", &escolha1F);
        // Escolha do 2º Jogador
        printf("Jogador 2\n");
        printf("\nSelecione a linha da 1ª posição: ");
        scanf("%d", &escolha2A);
        printf("\nSelecione a coluna da 1ª posição: ");
        scanf("%d", &escolha2B);
        printf("\nSelecione a linha da 2ª posição: ");
        scanf("%d", &escolha2C);
        printf("\nSelecione a coluna da 2ª posição: ");
        scanf("%d", &escolha2D);
        printf("\nSelecione a linha da 3ª posição: ");
        scanf("%d", &escolha2E);
        printf("\nSelecione a coluna da 3ª posição: ");
        scanf("%d", &escolha2F);

        // Determinando as condições
        if (((escolha1A >= 1) && (escolha1A <= 10)) && ((escolha1B >= 1) && (escolha1B <= 10)) && ((escolha1C >= 1) && (escolha1C <= 10)) && ((escolha1D >= 1) && (escolha1D <= 10)) && ((escolha1E >= 1) && (escolha1E <= 10)) && ((escolha1F >= 1) && (escolha1F <= 10)))
        {
            if ((((escolha2A >= 1) && (escolha2A <= 10)) && ((escolha2B >= 1) && (escolha2B <= 10)) && ((escolha2C >= 1) && (escolha2C <= 10)) && ((escolha2D >= 1) && (escolha2D <= 10)) && ((escolha2E >= 1) && (escolha2E <= 10)) && ((escolha2F >= 1) && (escolha2F <= 10))))
            {
                // Determinando que o índice da coluna começará com a Letras "A"
                printf("\n   ");
                for (j = 0; j < 10; j++)
                {
                    // Ao determinar que a variavel "j" começasse com o valor 0 (zero), determina que o seu valor inicial de cada coluna começará com a letra "a" na tabela do "print" a seguir
                    printf("%c ", coluna[j]);
                }
                printf("\n");
                // Determinando que o índice da linha começará com o Números "1"
                for (i = 1; i <= 10; i++)
                {
                    // Ao determinar que a variavel "i" começasse com o valor 1 (um), determina que o seu valor inicial de cada linha começará com o número "1" na tabela do "print" a seguir
                    printf("%2d", i);

                    for (j = 1; j <= 10; j++)
                    {
                        if (((i == escolha1A) && (j == escolha1B)) && ((i == escolha1C) && (j == escolha1D)) && ((i == escolha1E) && (j == escolha1F)))
                        {
                            printf(" 1");
                        } else if (((i == escolha2A) && (j == escolha2B)) && ((i == escolha2C) && (j == escolha2D)) && ((i == escolha2E) && (j == escolha2F)))
                        {
                            printf(" 2");
                        } else {
                        printf(" 0");
                        }
                    }
                    printf("\n");
                }
                printf("\n");
            } else {
                printf("Jogador 2 escreveu posição do ataque incorreto para o limite determinado de 10x10 do tabuleiro.");
            }
        } else {
            printf("Jogador 1 escreveu posição do navio incorreto para o limite determinado de 10x10 do tabuleiro.");
        }
        break;
    case 2:
        printf("REGRAS\n");
        printf("\nTABULEIRO BATALHA NAVAL\n\n");
        // Coluna - Letras
        printf("   ");
        for (j = 0; j < 10; j++)
        {
            printf("%c ", coluna[j]);
        }
        printf("\n");
        // Linha - Numeros
        for (i = 1; i <= 10; i++)
        {
            printf("%2d", i);
            for (j = 0; j < 10; j++)
            {
                printf(" 0");
            }
            printf("\n");
        }
        printf("\nBem-vindo ao jogo Batalha Naval!\n\n");
        printf("Este jogo foi desenvolvido para dois jogadores.\n");
        printf("O Jogador 1 começará posicionando até 3 navios em um tabuleiro de 10x10.\n");
        printf("Em seguida, o Jogador 2 tentará adivinhar as posições dos navios e realizar os ataques.\n\n");
        printf("Vence o Jogador 2 se acertar 2 ataques, ou o Jogador 1 se conseguir desviar de 2 tentativas.\n");
        break;
    case 3:
        printf("\nÉ uma pena, espero que volte logo.");
        break;
    default:
        printf("\nValor incorreto!!! Por favor, reinicie o jogo e tente novamente.");
    }
    
    return 0;
}