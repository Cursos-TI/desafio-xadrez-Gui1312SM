#include <stdio.h>
int main(){
    const int TORRE_MOVIMENTOS = 5; //constante, valor fixo torre
    const int BISPO_MOVIMENTOS = 5; //constante, valor fixo bispo
    const int RAINHA_MOVIMENTOS = 8; //constante, valor fixo rainha
    
    printf("\n=== Movimento da Torre (5 casas para direita) ===\n");
    // Usando FOR para a Torre
    for (int i = 0; i < TORRE_MOVIMENTOS; i++) {
        printf("Direita\n");
    }

    printf("\n=== Movimento do Bispo (5 casas diagonal) ===\n");
    // Usando WHILE para o Bispo
    int movimentoBispo = 0;
    while (movimentoBispo < BISPO_MOVIMENTOS) {
        printf("Cima, Direita\n");
        movimentoBispo++;
    }

    printf("\n=== Movimento da Rainha (8 casas esquerda) ===\n");
    // Usando DO-WHILE para a Rainha
    int movimentoRainha = 0;
    do {
        printf("Esquerda\n");
        movimentoRainha++;
    } while (movimentoRainha < RAINHA_MOVIMENTOS);

    return 0;
}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
