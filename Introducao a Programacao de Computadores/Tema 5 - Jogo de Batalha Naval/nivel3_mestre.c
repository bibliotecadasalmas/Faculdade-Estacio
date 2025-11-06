#include <stdio.h>

#define LINHA 10
#define COLUNA 10

int main() {

    int i, j, escolha;

    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            printf(" 0");
        }
        printf("\n");
    }

    printf("Selecione a habilidade: ");
    scanf("%d", escolha);
    
    switch (escolha)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }

}