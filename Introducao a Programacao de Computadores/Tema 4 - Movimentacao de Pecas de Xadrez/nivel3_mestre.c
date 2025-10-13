#include <stdio.h>

/*
    Programa: Movimentação das Peças de Xadrez
    Nível: Aventureiro

    Descrição:
    - O programa que você criará irá simular o movimento de três peças: Torre, Bispo e Rainha;
    - As três estruturas de repetição aprendidas (while, do-while e for) deverão ser utilizadas;
    - O programa deverá permitir que o usuário escolha, uma por vez, as peças de xadrez Bispo, Torre e Rainha para realizar suas movimentações.
    - Cada peça deverá se mover um número fixo de casas:
        - Bispo: 5 casas;
        - Torre: 5 casas;
        - Rainha: 8 casas.
    - Os movimentos de cada peça:
            - Bispo: deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita;
            - Torre: deverá simular o movimento da Torre cinco casas para a direita;
            - Rainha: deverá simular o movimento da Rainha oito casas para a esquerda.
    - O programa deverá solicitar ao usuário que escolha qual peça deseja mover primeiro, depois a segunda e por último a terceira.
    
    Instruções para implementação:
    1. Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    2. Solicite ao usuário que escolha qual peça deseja mover primeiro:
        - [1] Bispo;
        - [2] Torre;
        - [3] Rainha.
    3. Implemente:
        - Ao escolher uma peça, o programa deverá imprimir o movimento da peça escolhida, utilizando a estrutura de repetição adequada (while, do-while ou for).
    4. Após o primeiro movimento, ofereça novas opções para que o usuário escolha as demais peças restantes, até que todas tenham se movimentado.
    5. Utilize as estruturas:
        - while;
        - do-while;
        - for.

    Observação:
    - Seria possível utilizar as estruturas de repetição também na primeira escolha para manter o programa ativo até que usuário digitasse uma opção válida. No entanto, neste caso, as estruturas - de repetição - foram reservadas para simular apenas o movimento de cada peça, eliminando a repetição da peça já escolhida.
*/

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