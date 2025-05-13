#include <stdio.h>
#include <string.h>

int main() {
    int casas;
    char direcao[20];

    // ----- Torre -----
    printf("Torre:\n");
    printf("Digite a direção (Direita, Esquerda, Cima, Baixo): ");
    scanf(" %[^\n]", direcao); // lê string com espaços
    printf("Digite o número de casas que a Torre deve se mover: ");
    scanf("%d", &casas);

    // Validação e movimento da Torre (com for)
    if (strcmp(direcao, "Direita") == 0 || strcmp(direcao, "Esquerda") == 0 ||
        strcmp(direcao, "Cima") == 0 || strcmp(direcao, "Baixo") == 0) {
        printf("Movimento da Torre:\n");
        for (int i = 1; i <= casas; i++) {
            printf("%s\n", direcao);
        }
    } else {
        printf("Direção inválida para a Torre.\n");
    }

    // ----- Bispo -----
    printf("\nBispo:\n");
    printf("Digite a direção (Cima Direita, Cima Esquerda, Baixo Direita, Baixo Esquerda): ");
    scanf(" %[^\n]", direcao);
    printf("Digite o número de casas que o Bispo deve se mover: ");
    scanf("%d", &casas);

    // Validação e movimento do Bispo (com while)
    if (
        strcmp(direcao, "Cima Direita") == 0 || strcmp(direcao, "Cima Esquerda") == 0 ||
        strcmp(direcao, "Baixo Direita") == 0 || strcmp(direcao, "Baixo Esquerda") == 0
    ) {
        printf("Movimento do Bispo:\n");
        int i = 1;
        while (i <= casas) {
            printf("%s\n", direcao);
            i++;
        }
    } else {
        printf("Direção inválida para o Bispo.\n");
    }

    // ----- Rainha -----
    printf("\nRainha:\n");
    printf("Digite a direção (Direita, Esquerda, Cima, Baixo, Cima Direita, Cima Esquerda, Baixo Direita, Baixo Esquerda): ");
    scanf(" %[^\n]", direcao);
    printf("Digite o número de casas que a Rainha deve se mover: ");
    scanf("%d", &casas);

    // Movimento da Rainha (com do-while)
    printf("Movimento da Rainha:\n");
    int i = 1;
    do {
        printf("%s\n", direcao);
        i++;
    } while (i <= casas);

    return 0;
}
