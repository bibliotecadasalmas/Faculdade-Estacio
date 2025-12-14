#include <stdio.h>

/*
Definindo a Recursividade de cada peça
- Essas estruturas de recursividade faz parte da opção 3 - Nível 3 Mestre;
- Eu até poderia inserir a recursividade dentro da função "switch", na opção 3, mas alguns cpiladores não conseguiria executar. Então optei por deixar no início.
*/
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
int main() {
    int escolha0;

    printf("escolha em qual nivel deseja ver a execução do programa:\n");
    printf("[1] Nível 1 - Novato\n");
    printf("[2] Nível 2 - Aventureiro\n");
    printf("[3] Nível 3 - Mestre\n");
    printf("[4] Informações referente ao Erro\n");
    printf("[5] Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolha0);

    switch (escolha0)
    {
        // Nível 1 - Novato
        case 1: {
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
           
            int escolha, bispo = 0, torre = 0, rainha = 0;
        
            printf("\nMovimentação das peças de xadrez\n");
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
                printf("\nOpção inválida (erro 10).");
            }
        break;
        }
        // Nível 2 - Aventureiro
        case 2: {
            /*
            Programa: Movimentação das Peças de Xadrez
            Nível: Aventureiro

            Descrição:
            - O programa deverá simular a movimentação de quatro peças de xadrez: Bispo, Torre, Rainha e cavalo;
            - Cada peça realizará um movimento fixo, utilizando uma estrutura de repetição diferente:
                - Bispo;
                - Torre;
                - Rainha;
                - Cavalo;
            - Cada peça se moverá um número determinado de casas:
                - Bispo: 5 casas;
                - Torre: 5 casas;
                - Rainha: 8 casas;
                - Cavalo: 3 casas.

            Regras de movimentação:
                - O Bispo deverá simular o movimento de cinco casas na diagonal para cima e à direita;
                - A Torre deverá simular o movimento de cinco casas para a direita;
                - A Rainha deverá simular o movimento de oito casas para a esquerda;
                - O Cavalo deverá simular o movimento de três casas em "L" (duas para baixo e uma para a esquerda).

            Instruções para implementação:
            1. Declare variáveis (ou constantes) para representar o número de casas que cada peça pode se mover;
            2. Solicite ao usuário que escolha qual peça deseja mover:
                - [1] Bispo
                - [2] Torre
                - [3] Rainha
                - [4] Cavalo
            3. Com base na escolha do usuário:
                - Execute o movimento da peça correspondente utilizando a estrutura de repetição indicada;
                - O cavalo é o unico que deve utilizar uma estrutura aninhada (while com for ou do-while com for);
                - Exiba na tela uma mensagem descrevendo o movimento a cada iteração.
            4. Caso o usuário insira uma opção inválida, exiba uma mensagem de erro.

            Observação:
            - Este exercício tem como objetivo reforçar o uso e a diferença entre as estruturas de repetição 
            'while', 'do-while' e 'for', aplicando-as de forma prática e simbólica no contexto do xadrez.
            */

            int escolha, bispo = 0, torre = 0, rainha = 0, cavalo = 0;
        
            printf("\nMovimentação das peças de xadrez\n");
            printf("Selecione uma peça que deseja mover:\n");
            printf("[1] Bispo\n");
            printf("[2] Torre\n");
            printf("[3] Rainha\n");
            printf("[4] Cavalo\n");
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
            case 4:
                //Estrutura aninhada - While com For
                while (cavalo < 1)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        printf("\nO cavalo movimenta-se para baixo.");
                    }
                    printf("\nO cavalo movimenta-se para esquerda.");
                    cavalo++;            
                }
            break;
            default:
                printf("\nOpção inválida (erro 20).");
            }
        }
        // nível 3 - Mestre
        case 3: {
            
            // Área das variáveis para armazenar o movimento das peças
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
            printf("\nMovimentação das peças de xadrez\n");
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
                printf("\nOpção invalidada (erro 3A0).\n");
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
                    printf("\nOpção invalidada (erro 3B1).\n");
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
                    printf("\nOpção invalidada (erro 3B2).\n");
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
                    printf("\nOpção invalidada (erro 3B3).\n");
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
                    printf("\nOpção invalidada (erro 3B4).\n");
                    printf("\n");
                }
            } else {
                printf("\nOpção invalidada (erro 3B0).\n");
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
                    printf("\nOpção invalidada (erro 3C1).\n");
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
                    printf("\nOpção invalidada (erro 3C2).\n");
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
                    printf("\nOpção invalidada (erro 3C3).\n");
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
                    printf("\nOpção invalidada (erro 3C3).\n");
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
                    printf("\nOpção invalidada (erro 3C4).\n");
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
                    printf("\nOpção invalidada (erro 3C5).\n");
                    printf("\n");
                }
            } else {
                printf("\nOpção invalidada (erro 3C0).\n");
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
                    printf("\nOpção invalidada (erro 3D1).\n");
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
                    printf("\nOpção invalidada (erro 3D2).\n");
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
                    printf("\nOpção invalidada (erro 3D3).\n");
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
                    printf("\nOpção invalidada (erro 3D4).\n");
                    printf("\n");
                }
            } else {
                printf("\nOpção invalidada (erro 3D0).\n");
            }
        break;
        }
        case 4: {
            printf("Os erros irá aparecer ao digitar algum número incorreto que se pede.");
            printf("[erro 00] - não foi digitado o valor correto no inicio");
            printf("[erro 10] - não foi digitado o valor correto dentro da opção 1 'Nivel 1 - Novato'");
            printf("[erro 20] - não foi digitado o valor correto dentro da opção 2 'Nivel 2 - Aventureiro'");
            printf("[erro 30] - não foi digitado o valor correto dentro da opção 3 'Nivel 3 - Metre'");
            printf("[erro 3A] - não foi digitado o valor correto na opção 3 'Nivel 3 - Metre' - 1º Movimento");
            printf("[erro 3B0] a [erro 3B4] - não foi digitado o valor correto na opção 3 'Nivel 3 - Metre' - 2º Movimento");
            printf("[erro 3C0] a [erro 3C4] - não foi digitado o valor correto na opção 3 'Nivel 3 - Metre' - 3º Movimento");
            printf("[erro 3D] - não foi digitado o valor correto na opção 3 'Nivel 3 - Metre' - 4º Movimento");
        }
        break;
        case 5: {
            printf("É uma pena, espero vê-lo em breve.");
        break;
        }
        default:
            printf("Opção invalida (erro 00).");
    }

    return 0;
}