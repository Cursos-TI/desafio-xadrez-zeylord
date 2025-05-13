#include <stdio.h>

int main() {
    // Simulação do movimento da Torre: 5 casas para a direita usando o loop FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo: 5 casas na diagonal (Cima e Direita) usando o loop WHILE
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    int i1 = 1;
    while (i1 <= 5) {
        printf("Cima Direita\n");
        i1++;
    }
    printf("\n");

    // Simulação do movimento da Rainha: 8 casas para a esquerda usando o loop DO-WHILE
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int i2 = 1;
    do {
        printf("Esquerda\n");
        i2++;
    } while (i2 <= 8);

    return 0;
}
