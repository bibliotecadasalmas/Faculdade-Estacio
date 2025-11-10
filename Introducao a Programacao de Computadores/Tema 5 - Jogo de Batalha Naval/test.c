#include <stdio.h>


#define LINHA 10 
#define COLUNA 10 
#define I 3
#define J 2

int main() {
    
    int exemplo1[I][J], exemplo2[I][J], jogador1[I][J], jogador2[I][J];
    int i, j, k, escolha, marcado;
    char indiceLetra[COLUNA];

    // Tabela 1
    printf(" == Tabela Exemplo == \n");
    printf("\n    ");
    for (j = 0; j < COLUNA; j++)
    {
        printf("%c ", indiceLetra[j] = 'A' + j);
    }
    printf("\n");
    for (i = 1; i <= LINHA; i++)
    {
        printf("%2d ", i);
        for (j = 0; j < COLUNA; j++)
        {
            printf(" ~");
        }
        printf("\n");
    }
    printf("\n");

    printf("\nO [ATAQUE EXPLOSIVO] - É possivel realizar até %d ataques em qualquer parte do mapa.\n", I);
    marcado = 0;
    exemplo1[1][0] = 1;
    exemplo2[1][1] = 1;

    printf(" == Tabela 2 == \n");
    printf("\n    ");
    for (j = 0; j < COLUNA; j++)
    {
        printf("%c ", indiceLetra[j] = 'A' + j);
    }
    printf("\n");
    for (i = 1; i <= LINHA; i++)
    {
        printf("%2d ", i);
        for (j = 1; j <= COLUNA; j++)
        {
            for (k = 0; k < I; k++)
            {
                if ((i == exemplo1[1][0]) && (j == exemplo1[1][1]))
                {
                    printf(" X");
                    marcado = 1;
                    break;
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
/*
    switch (escolha)
    {
        case 1:
            // === Jogador 1 ===
            printf("\n");
            printf("\nJogador 1 - Posicione seus navios (%d posições)\n", I); // Aqui a variavel 'I' esta se referindo a quantidade de 'navios' a ser inserido
            printf("As posições dos navio serão marcados pelo simbolo 'O'.\n");
            for (i = 1; i <= I; i++)
            {
                printf("%dª Posição (linha 1-%d): ", i, LINHA);
                scanf("%d", &jogador1[i][0]);
                printf("%dª Posição (coluna 1-%d): ", i, COLUNA);
                scanf("%d", &jogador1[i][1]);
            }

            // === Jogador 2 ===
            printf("\n == JOGADOR 2 ==\n");
            printf("Escolha o tipo de ataque:\n");
            printf("\n[1] - ATAQUES EXPLOSIVOS\n");
            printf("\n[2] - ATAQUE EM CONE");
            printf("\n[3] - ATAQUE EM CRUZ");
            printf("\n[4] - ATAQUE EM OCTAEDRO");
            printf("\nEscolha a sua forma de ataque: ");
            scanf("%d", &escolha);

            while ((escolha < 1) || (escolha > 4))
            {
                printf("\nMeu colega...");
                printf("\nMe ajuda a de ajudar! Não existe esse tipo de ataque.\n");
                printf("\nEscolha a sua forma de ataque certo: ");
                scanf("%d", &escolha);
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
    }
*/
    return 0;
}

