#include <stdio.h>

int main() {
    int Torre, Bispo, Rainha;

    // Solicita ao usuário o número de casas para a torre
    printf("Digite o número de casas que a Torre deve se mover para a Direita: ");
    scanf("%d", &Torre);

    // Simulação do movimento da Torre usando for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= Torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Solicita ao usuário o número de casas para o bispo
    printf("Digite o número de casas que o Bispo deve se mover na Diagonal Cima Direita: ");
    scanf("%d", &Bispo);

    // Simulação do movimento do Bispo usando while
    int j = 1;
    printf("Movimento do Bispo:\n");
    while (j <= Bispo) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Solicita ao usuário o número de casas para a rainha
    printf("Digite o número de casas que a Rainha deve se mover para a Esquerda: ");
    scanf("%d", &Rainha);

    // Simulação do movimento da rainha usando do-while
    int k = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= Rainha);

    return 0;

}
