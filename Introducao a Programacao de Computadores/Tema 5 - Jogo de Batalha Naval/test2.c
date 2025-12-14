#include <stdio.h>

#define COLUNA 10
#define LINHA 10

int main() {

    // Nas matrizes ,'navio' e 'ataque', utiliza se os valores '[3]' e '[2]', qual o seu nome tecnico e onde eles vão ser importante, ou utilizado, isoladamente e em conjunto com a matriz que o acompanha?
    int navio[3][2], ataque[3][2], i, j, k; // Tabela [A]

    // Tabela de Navegação ou Exploração? (modo geral)
    printf("   ");
    for (j = 1; j <= COLUNA; j++)
    {
        printf("%2d ", j);
    }
    printf("\n");

    for (i = 0; i < LINHA; i++)
    {
        printf("%2d ", i + 1);
        for (j = 0; j < COLUNA; j++)
        {
            printf(" ~ ");
        }
        printf("\n");
    }
    printf("\n");

    // Navio - Jogador 1
    // Porque tem que ser a variavel 'i' nesse loop para se criar uma 'localização' do navio?
    // A constante '3' tem alguma coisa a ver com o valor da matriz do navio?
    // Como que funciona as informações e as posições declarada dessa matriz?
    for (i = 0; i < 3; i++)
    {
        printf("%dª Posição do Navio (linha): ", i + 1);
        scanf("%d", &navio[i][0]);
        printf("%dª Posição do Navio (coluna): ", i + 1);
        scanf("%d", &navio[i][1]);
    }
    printf("\n");

    // Ataque - Jogador 2
    // Porque tem que ser a variavel 'i' nesse loop para se criar uma 'localização' do ataque?
    // A constante '3' tem alguma coisa a ver com o valor da matriz de ataque?
    // Como que funciona as informações e as posições declarada dessa matriz?
    for (i = 0; i < 3; i++)
    {
        printf("%dª Ataque ao Navio (linha): ", i + 1);
        scanf("%d", &ataque[i][0]);
        printf("%dª Ataque ao Navio (coluna): ", i + 1);
        scanf("%d", &ataque[i][1]);
    }
    printf("\n");

    // === Validação e resultado ===
    printf("\n === RESULTADO DO TABULEIRO === \n\n");

    // Tabela
    printf("   ");
    for (j = 1; j <= COLUNA; j++)
    {
        printf("%2d ", j);
    }
    printf("\n");

    for (i = 1; i <= LINHA; i++)
    {
        printf("%2d ", i + 1);
        for (j = 1; j <= COLUNA; j++)
        {
            int marcado = 0; // 'falso = 0' e 'verdadeiro = 1'
            // Por que teria que criar uma variavel 'k' para esse laço 'for' não daria para utilizar a variavel 'j' ja que ele percorre por todo a tabuleiro e so substituir com me convem?
            for (k = 0; k < 3; k++)
            {
                // Diferença do uso '=' e '==' nesse caso
                // Explica essa condição criada de matriz e onde cada '[k]' e '[0]' ou '[1]' é aplicado na tabela
                if (i == ataque[k][0] && j == ataque[k][1])
                {
                    printf(" X ");
                    marcado = 1;
                    break;
                }
            }
            // Explica essa condição (!marcado) e a sua relação de 'verdadeiro' e 'falso'
            if (!marcado)
            {
                for (k = 0; k < 3; k++)
                {
                    if (i == navio[k][0] && j == navio[k][1])
                    {
                        printf(" O ");
                        marcado = 1;
                        break;
                    }
                }
            }
            // Explica essa condição (!marcado) e a sua relação de 'verdadeiro' e 'falso', e a relação que essa condição tem com as anteriores
            if (!marcado)
            {
                printf(" ~ ");
            }
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}