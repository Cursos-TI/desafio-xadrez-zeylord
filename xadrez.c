#include <stdio.h>
#include <string.h>

//Função Recursiva para a Torre 
void moverTorre(int casas, char direcao[], int passo) {
    if (passo > casas) return;
    printf("%s\n", direcao);
    moverTorre(casas, direcao, passo + 1);
}

//Função Recursiva para a Rainha
void moverRainha(int casas, char direcao[], int passo) {
    if (passo > casas) return;
    printf("%s\n", direcao);
    moverRainha(casas, direcao, passo + 1);
}

//Função Recursiva e Loops Aninhados para o Bispo
void moverBispoRecursivo(int casas, char direcao[], int passo) {
    if (passo > casas) return;
    printf("%s\n", direcao);
    moverBispoRecursivo(casas, direcao, passo + 1);
}

void moverBispoLoopsAninhados(int casas) {
    printf("Movimento do Bispo (com loops aninhados):\n");
    for (int v = 1; v <= casas; v++) {          // Movimento vertical
        for (int h = 1; h <= 1; h++) {          // Movimento horizontal (1 passo por vertical)
            printf("Cima Direita\n");
        }
    }
}

//Função para o Cavalo com Loops Aninhados
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo (em 'L'):\n");
    for (int i = 1; i <= movimentos; i++) {
        for (int j = 1; j <= 1; j++) { // apenas uma direção: 2 cima + 1 direita
            if (i % 2 == 0) continue;  // apenas movimentos ímpares simulando um padrão
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n\n");
        }
    }
}

int main() {
    //Torre
    int casasTorre = 3;
    char dirTorre[] = "Direita";
    printf("Torre:\n");
    moverTorre(casasTorre, dirTorre, 1);
    printf("\n");

    //Bispo
    int casasBispo = 3;
    char dirBispo[] = "Cima Direita";
    printf("Bispo (com recursividade):\n");
    moverBispoRecursivo(casasBispo, dirBispo, 1);
    printf("\n");
    moverBispoLoopsAninhados(casasBispo);
    printf("\n");

    //Rainha
    int casasRainha = 4;
    char dirRainha[] = "Esquerda";
    printf("Rainha:\n");
    moverRainha(casasRainha, dirRainha, 1);
    printf("\n");

    //Cavalo
    int movimentosCavalo = 2;
    moverCavalo(movimentosCavalo);

    return 0;
}
