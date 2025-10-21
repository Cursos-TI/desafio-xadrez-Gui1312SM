#include <stdio.h>

// Funções recursivas para movimentação das peças
void moveTorre(int movimentos) {
    if (movimentos <= 0) return;
    printf("Direita\n");
    moveTorre(movimentos - 1);
}

void moveRainha(int movimentos) {
    if (movimentos <= 0) return;
    printf("Esquerda\n");
    moveRainha(movimentos - 1);
}

void moveBispoRecursivo(int movimentos) {
    if (movimentos <= 0) return;
    printf("Cima, Direita\n");
    moveBispoRecursivo(movimentos - 1);
}

int main() {
    const int TORRE_MOVIMENTOS = 5;   // Movimento da torre
    const int BISPO_MOVIMENTOS = 5;   // Movimento do bispo
    const int RAINHA_MOVIMENTOS = 8;  // Movimento da rainha
    const int CAVALO_VERTICAL = 2;    // Movimento vertical do cavalo
    const int CAVALO_HORIZONTAL = 1;  // Movimento horizontal do cavalo

    // Movimento da Torre (recursivo)
    printf("\n=== Movimento da Torre (5 casas para direita) ===\n");
    moveTorre(TORRE_MOVIMENTOS);

    // Movimento do Bispo (loops aninhados)
    printf("\n=== Movimento do Bispo (5 casas diagonal) ===\n");
    for (int vertical = 0; vertical < BISPO_MOVIMENTOS; vertical++) {
        for (int horizontal = 0; horizontal <= 0; horizontal++) {
            printf("Cima, Direita\n");
        }
    }

    // Movimento do Bispo (recursivo)
    printf("\n=== Movimento do Bispo (recursivo) ===\n");
    moveBispoRecursivo(BISPO_MOVIMENTOS);

    // Movimento da Rainha (recursivo)
    printf("\n=== Movimento da Rainha (8 casas esquerda) ===\n");
    moveRainha(RAINHA_MOVIMENTOS);

    // Movimento do Cavalo com loops complexos
    printf("\n=== Movimento do Cavalo (em L: 2 cima, 1 direita) ===\n");
    for (int movimento = 0; movimento < CAVALO_VERTICAL + CAVALO_HORIZONTAL; movimento++) {
        if (movimento < CAVALO_VERTICAL) {
            printf("Cima\n");
            continue;
        }
        if (movimento == CAVALO_VERTICAL) {
            printf("Direita\n");
        }
    }

    return 0;
}
