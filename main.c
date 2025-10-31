#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int linInicial, colInicial, linFinal, colFinal;
    int opcao;

    printf("=== MOVIMENTOS DE XADREZ ===\n");
    printf("1 - Peão\n2 - Torre\n3 - Bispo\n4 - Cavalo\n5 - Rainha\n6 - Rei\n");
    printf("Escolha a peça: ");
    scanf("%d", &opcao);

    printf("Digite a linha inicial (1 a 8): ");
    scanf("%d", &linInicial);
    printf("Digite a coluna inicial (1 a 8): ");
    scanf("%d", &colInicial);
    printf("Digite a linha final (1 a 8): ");
    scanf("%d", &linFinal);
    printf("Digite a coluna final (1 a 8): ");
    scanf("%d", &colFinal);

    int dLinha = abs(linFinal - linInicial);
    int dColuna = abs(colFinal - colInicial);

    switch(opcao) {
        case 1: // Peão
            if (dColuna == 0 && dLinha == 1)
                printf("Movimento válido!\n");
            else
                printf("Movimento inválido!\n");
            break;

        case 2: // Torre
            if (linInicial == linFinal || colInicial == colFinal)
                printf("Movimento válido!\n");
            else
                printf("Movimento inválido!\n");
            break;

        case 3: // Bispo
            if (dLinha == dColuna)
                printf("Movimento válido!\n");
            else
                printf("Movimento inválido!\n");
            break;

        case 4: // Cavalo
            if ((dLinha == 2 && dColuna == 1) || (dLinha == 1 && dColuna == 2))
                printf("Movimento válido!\n");
            else
                printf("Movimento inválido!\n");
            break;

        case 5: // Rainha
            if (dLinha == dColuna || linInicial == linFinal || colInicial == colFinal)
                printf("Movimento válido!\n");
            else
                printf("Movimento inválido!\n");
            break;

        case 6: // Rei
            if (dLinha <= 1 && dColuna <= 1)
                printf("Movimento válido!\n");
            else
                printf("Movimento inválido!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}