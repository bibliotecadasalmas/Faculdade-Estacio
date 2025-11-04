#include <stdio.h>

int main() {

    // Variáveis
    int escolha;
    int escolha1[3][2], escolha2[3][2]; // cada jogador tem 3 posições (linha e coluna)
    int i, j;
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

printf("\nTABULEIRO (10x10)\n\n");
    printf("   ");
    for (j = 0; j < 10; j++) printf("%c ", coluna[j]);
    printf("\n");
    for (i = 1; i <= 10; i++) {
        printf("%2d", i);
        for (j = 0; j < 10; j++) printf(" 0");
        printf("\n");
    }


        return 0;
}