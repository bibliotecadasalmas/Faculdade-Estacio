#include <stdio.h>

// Definindo a Recursividade de cada peça
void bispoMover(int casas) {
    if (casas > 0)
    {
        printf("diagonal para cima e à direita\n");
        bispoMover(casas - 1);
    }
}
void torreMover(int casas) {
    if (casas > 0)
    {
        printf("direita\n");
        torreMover(casas - 1);
    }
}
void rainhaMover(int casas) {
    if (casas > 0)
    {
        printf("esquerda\n");
        rainhaMover(casas - 1);
    }
}
void cavaloMover(int casas) {
    if (casas > 0)
    {
        if (casas > 1)
        {
            printf("cima\n");
        }
        if (casas == 1)
        {
            printf("direita\n");
        }
        cavaloMover(casas - 1);
    }
}

// Área das variáveis para armazenar o movimento das peças
int main() {

    int escolha1, escolha2, escolha3, escolha4, bispoCasas, bispoInicio, bispoFinal, torreCasas, torreInicio, torreFinal, rainhaCasas, rainhaInicio, rainhaFinal, cavaloCasas, cavaloInicio, cavaloFinal;
    
    // Eu achei melhor ter uma área especifica para decidir a quantidade de movimento de peças do que ficar alterando uma por uma no código todo, pois leva se muito tempo para fazer isso
    bispoCasas = 5;
    bispoInicio = 0;
    bispoFinal = 1;
    torreCasas = 5;
    torreInicio = 0;
    torreFinal = 1;
    rainhaCasas = 8;
    rainhaInicio = 0;
    rainhaFinal = 1;
    cavaloCasas = 3;
    cavaloInicio = 0;
    cavaloFinal = 1;

    // # 1º Movimentação - com "while"
    printf("Movimentação das peças de xadrez\n");
    printf("Selecione a 1º peça que deseja mover:\n");
    printf("[1] Bispo\n");
    printf("[2] Torre\n");
    printf("[3] Rainha\n");
    printf("[4] Cavalo\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);
    
    // Bispo 1º escolha
    if (escolha1 == 1)
    {
        while (bispoInicio < bispoFinal)
        {
            printf("\n");
            bispoMover(bispoCasas);
            bispoInicio++;
        }
    // Torre 1º escolha
    } else if (escolha1 == 2) {
        while (torreInicio < torreFinal)
        {
            printf("\n");
            torreMover(torreCasas);
            torreInicio++;
        }
    // Rainha 1º escolha
    } else if (escolha1 == 3) {
        while (rainhaInicio < rainhaFinal)
        {
            printf("\n");
            rainhaMover(rainhaCasas);
            rainhaInicio++;
        }
    // Cavalo 1º escolha
    } else if (escolha1 == 4) {
        while (cavaloInicio < cavaloFinal)
        {
            printf("\n");
            cavaloMover(cavaloCasas);
            cavaloInicio++;
        }
    } else {
        printf("\nOpção invalidada!\n");
        printf("\n");
    }
 
    // # 2º Movimentação - com "do-while"
    // Bispo foi a 1ª peça escolhida
    if (bispoInicio > 0)
    {
        printf("\nSelecione a 2º peça que deseja mover:\n");
        printf("[1] Torre\n");
        printf("[2] Rainha\n");
        printf("[3] Cavalo\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
        if (escolha2 == 1)
        {
            do
            {
                printf("\n");
                torreMover(torreCasas);
                torreInicio++;
            } while (torreInicio < torreFinal);
        } else if (escolha2 == 2) {
            do
            {
                printf("\n");
                rainhaMover(rainhaCasas);
                rainhaInicio++;
            } while (rainhaInicio < rainhaFinal);
        } else if (escolha2 == 3) {
            do
            {
                printf("\n");
                cavaloMover(cavaloCasas);
                cavaloInicio++;
            } while (cavaloInicio < cavaloFinal);
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Torre foi a 1ª peça escolhida
    } else if (torreInicio > 0) {
        printf("\nSelecione a 2º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("[2] Rainha\n");
        printf("[3] Cavalo\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
        if (escolha2 == 1)
        {
            do
            {
                printf("\n");
                bispoMover(bispoCasas);
                bispoInicio++;
            } while (bispoInicio < bispoFinal);
        } else if (escolha2 == 2) {
            do
            {
                printf("\n");
                rainhaMover(rainhaCasas);
                rainhaInicio++;
            } while (rainhaInicio < rainhaFinal);
        } else if (escolha2 == 3) {
            do
            {
                printf("\n");
                cavaloMover(cavaloCasas);
                cavaloInicio++;
            } while (cavaloInicio < cavaloFinal);
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Rainha foi a 1ª peça escolhida
    } else if (rainhaInicio > 0) {
        printf("\nSelecione a 2º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("[2] Torre\n");
        printf("[3] Cavalo\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
        if (escolha2 == 1)
        {
            do
            {
                printf("\n");
                bispoMover(bispoCasas);
                bispoInicio++;
            } while (bispoInicio < bispoFinal);
        } else if (escolha2 == 2) {
            do
            {
                printf("\n");
                torreMover(torreCasas);
                torreInicio++;
            } while (torreInicio < torreFinal);
        } else if (escolha2 == 3) {
            do
            {
                printf("\n");
                cavaloMover(cavaloCasas);
                cavaloInicio++;
            } while (cavaloInicio < cavaloFinal);
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Cavalo foi a 1ª peça escolhida
    } else if (cavaloInicio > 0) {
        printf("\nSelecione a 2º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("[2] Torre\n");
        printf("[3] Rainha\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
        if (escolha2 == 1)
        {
            do
            {
                printf("\n");
                bispoMover(bispoCasas);
                bispoInicio++;
            } while (bispoInicio < bispoFinal);
        } else if (escolha2 == 2) {
            do
            {
                printf("\n");
                torreMover(torreCasas);
                torreInicio++;
            } while (torreInicio < torreFinal);
        } else if (escolha2 == 3) {
            do
            {
                printf("\n");
                rainhaMover(rainhaCasas);
                rainhaInicio++;
            } while (rainhaInicio < rainhaFinal);
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    } else {
        printf("\nOpção invalidada!\n");
        printf("\n");
    }

    // # 3º movimentação
    // Bispo e Torre escolhido
    if ((bispoInicio > 0) && (torreInicio > 0)) {
        printf("\nSelecione a 3º peça que deseja mover:\n");
        printf("[1] Rainha\n");
        printf("[2] Cavalo\n");
        printf("Escolha: ");
        scanf("%d", &escolha3);
        if (escolha3 == 1)
        {
            for (; rainhaInicio < rainhaFinal; rainhaInicio++)
                {
                    printf("\n");
                    rainhaMover(rainhaCasas);
                }
        } else if (escolha3 == 2) {
            for (; cavaloInicio < cavaloFinal; cavaloInicio++)
                {
                    printf("\n");
                    cavaloMover(cavaloCasas);
                }
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Bispo e Rainha escolhido
    } else if ((bispoInicio > 0 ) && (rainhaInicio > 0)) {
        printf("\nSelecione a 3º peça que deseja mover:\n");
        printf("[1] Torre\n");
        printf("[2] Cavalo\n");
        printf("Escolha: ");
        scanf("%d", &escolha3);
        if (escolha3 == 1)
        {
            for (; torreInicio < torreFinal; torreInicio++)
                {
                    printf("\n");
                    torreMover(torreCasas);
                }
        } else if (escolha3 == 2) {
            for (; cavaloInicio < cavaloFinal; cavaloInicio++)
                {
                    printf("\n");
                    cavaloMover(cavaloCasas);
                }
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Bispo e Cavalo escolhido
    } else if ((bispoInicio > 0 ) && (cavaloInicio > 0)) {
        printf("\nSelecione a 3º peça que deseja mover:\n");
        printf("[1] Torre\n");
        printf("[2] Rainha\n");
        printf("Escolha: ");
        scanf("%d", &escolha3);
        if (escolha3 == 1)
        {
            for (; torreInicio < torreFinal; torreInicio++)
                {
                    printf("\n");
                    torreMover(torreCasas);
                }
        } else if (escolha3 == 2) {
            for (; rainhaInicio < rainhaFinal; rainhaInicio++)
                {
                    printf("\n");
                    rainhaMover(rainhaCasas);
                }
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Torre e Rainha escolhido
    } else if ((torreInicio > 0) && (rainhaInicio > 0 )) {
        printf("\nSelecione a 3º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("[2] Cavalo\n");
        printf("Escolha: ");
        scanf("%d", &escolha3);
        if (escolha3 == 1)
        {
            for (; bispoInicio < bispoFinal; bispoInicio++)
                {
                    printf("\n");
                    bispoMover(bispoCasas);
                }
        } else if (escolha3 == 2) {
            for (; cavaloInicio < cavaloFinal; cavaloInicio++)
                {
                    printf("\n");
                    cavaloMover(cavaloCasas);
                }
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Torre e Cavalo escolhido
    } else if ((torreInicio > 0) && (cavaloInicio > 0 )) {
        printf("\nSelecione a 3º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("[2] Rainha\n");
        printf("Escolha: ");
        scanf("%d", &escolha3);
        if (escolha3 == 1)
        {
            for (; bispoInicio < bispoFinal; bispoInicio++)
                {
                    printf("\n");
                    bispoMover(bispoCasas);
                }
        } else if (escolha3 == 2) {
            for (; rainhaInicio < rainhaFinal; rainhaInicio++)
                {
                    printf("\n");
                    rainhaMover(rainhaCasas);
                }
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Rainha e Cavalo escolhido
    } else if ((rainhaInicio > 0 ) && (cavaloInicio > 0)) {
        printf("\nSelecione a 3º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("[2] Torre\n");
        printf("Escolha: ");
        scanf("%d", &escolha3);
        if (escolha3 == 1)
        {
            for (; bispoInicio < bispoFinal; bispoInicio++)
                {
                    printf("\n");
                    bispoMover(bispoCasas);
                }
        } else if (escolha3 == 2) {
            for (; torreInicio < torreFinal; torreInicio++)
                {
                    printf("\n");
                    torreMover(torreCasas);
                }
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    }
    // # 4º Movimentação - com "Recursividade"
    // Sobrou Bispo
    if (bispoInicio == 0)
    {
        printf("\nSelecione a 4º peça que deseja mover:\n");
        printf("[1] Bispo\n");
        printf("Escolha: ");
        scanf("%d", &escolha4);
        if (escolha4 == 1)
        {
            printf("\n");
            bispoMover(bispoCasas);
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Sobrou Torre 
    } else if (torreInicio == 0) {
        printf("\nSelecione a 4º peça que deseja mover:\n");
        printf("[1] Torre\n");
        printf("Escolha: ");
        scanf("%d", &escolha4);
        if (escolha4 == 1)
        {
            printf("\n");
            torreMover(torreCasas);
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Sobrou Rainha
    } else if (rainhaInicio == 0) {
        printf("\nSelecione a 4º peça que deseja mover:\n");
        printf("[1] Rainha\n");
        printf("Escolha: ");
        scanf("%d", &escolha4);
        if (escolha4 == 1)
        {
            printf("\n");
            rainhaMover(rainhaCasas);
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    // Sobrou Cavalo
    } else if (cavaloInicio == 0) {
        printf("\nSelecione a 4º peça que deseja mover:\n");
        printf("[1] Cavalo\n");
        printf("Escolha: ");
        scanf("%d", &escolha4);
        if (escolha4 == 1)
        {
            printf("\n");
            cavaloMover(cavaloCasas);        
        } else {
            printf("\nOpção invalidada!\n");
            printf("\n");
        }
    } else {
        printf("\nOpção invalidada!\n");
        printf("\n");
    }
    printf("\n");

    return 0;
}