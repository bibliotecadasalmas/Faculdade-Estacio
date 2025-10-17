#include <stdio.h>

int main() {

    int escolha1, escolha2, escolha3, bispoInicio, bispoFinal, torreInicio, torreFinal, rainhaInicio, rainhaFinal;
 
    bispoInicio = 0;
    bispoFinal = 5;
    torreInicio = 0;
    torreFinal = 5;
    rainhaInicio = 0;
    rainhaFinal = 8;

    // 1º Movimentação - com "while"
    printf("Movimentação das peças de xadrez\n");
    printf("Selecione a 1º peça que deseja mover:\n");
    printf("[1] Bispo\n");
    printf("[2] Torre\n");
    printf("[3] Rainha\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);
    
    if (escolha1 == 1)
    {
        while (bispoInicio < bispoFinal)
        {
            printf("\nO Bispo movimenta-se diagonal para cima e à direita.");
            bispoInicio++;
        }
        printf("\n");
    } else if (escolha1 == 2) {
        while (torreInicio < torreFinal)
        {
            printf("\nA Torre movimenta-se para à direita.");
            torreInicio++;
        }
        printf("\n");
    } else if (escolha1 == 3) {
        while (rainhaInicio < rainhaFinal)
        {
            printf("\nA Rainha movimenta-se se para esquerda.");
            rainhaInicio++;
        }
        printf("\n");
    } else {
        printf("\nOpção invalidada!\n");
        printf("\n");
    }
 
    // 2º Movimentação - com "do-while"
    if (bispoInicio > 0) // Bispo foi a 1ª peça escolhida
    {
        printf("\nSelecione a 2º peça que deseja mover:\n");
        printf("[1] Torre\n");
        printf("[2] Rainha\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
        if (escolha2 == 1)
        {
            do
            {
                printf("\nA Torre movimenta-se para à direita.");
                torreInicio++;
            } while (torreInicio < torreFinal);
            printf("\n");
        } else if (escolha2 == 2) {
            do
            {
                printf("\nA Rainha movimenta-se se para esquerda.");
                rainhaInicio++;
            } while (rainhaInicio < rainhaFinal);
            printf("\n");
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    } else if (torreInicio > 0) { // Torre foi a 1ª peça escolhida
        printf("\nSelecione a 2º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("[2] Rainha\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
        if (escolha2 == 1)
        {
            do
            {
                printf("\nO Bispo movimenta-se diagonal para cima e à direita.");
                bispoInicio++;
            } while (bispoInicio < bispoFinal);
            printf("\n");
        } else if (escolha2 == 2) {
            do
            {
                printf("\nA Rainha movimenta-se se para esquerda.");
                rainhaInicio++;
            } while (rainhaInicio < rainhaFinal);
            printf("\n");
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    } else if (rainhaInicio > 0) { // Rainha foi a 1ª peça escolhida
        printf("\nSelecione a 2º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("[2] Torre\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
        if (escolha2 == 1)
        {
            do
            {
                printf("\nO Bispo movimenta-se diagonal para cima e à direita.");
                bispoInicio++;
            } while (bispoInicio < bispoFinal);
            printf("\n");
        } else if (escolha2 == 2) {
            do
            {
                printf("\nA Torre movimenta-se para à direita.");
                torreInicio++;
            } while (torreInicio < torreFinal);
            printf("\n");
        } else {
            printf("\nOpção invalidada!\n");
        }
    }

    // 3º movimentação
    if ((bispoInicio > 0) && (torreInicio > 0)) {
        printf("\nSelecione a 3º peça que deseja mover:\n");
        printf("[1] Rainha\n");
        printf("Escolha: ");
        scanf("%d", &escolha3);
        if (escolha3 == 1)
        {
            for (; rainhaInicio < rainhaFinal; rainhaInicio++)
                {
                    printf("\nA Rainha movimenta-se se para esquerda.");
                }

        } else {
            printf("\nOpção invalidada!\n");
        }
        printf("\n");
    } else if ((bispoInicio > 0 ) && (rainhaInicio > 0)) {
        printf("\nSelecione a 3º peça que deseja mover:\n");
        printf("[1] Torre\n");
        printf("Escolha: ");
        scanf("%d", &escolha3);
        if (escolha3 == 1)
        {
            for (; torreInicio < torreFinal; torreInicio++)
                {
                    printf("\nA Torre movimenta-se para à direita.");
                }
        } else {
            printf("\nOpção invalidada!\n");
        }
        printf("\n");
    } else if ((rainhaInicio > 0 ) && (torreInicio > 0)) {
        printf("\nSelecione a 3º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("Escolha: ");
        scanf("%d", &escolha3);
        if (escolha3 == 1)
        {
            for (; bispoInicio < bispoFinal; bispoInicio++)
                {
                    printf("\nO Bispo movimenta-se diagonal para cima e à direita.");
                }
        printf("\n");
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    }
    
    return 0;
}