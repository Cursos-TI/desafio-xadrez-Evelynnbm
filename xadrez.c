#include <stdio.h>

// Função recursiva para movimentação da Rainha
void moverRainha(int atual, int total) {
    if (atual >= total) return;
    printf("Cima\n");
    moverRainha(atual + 1, total);
}

// Função recursiva para movimentação da Torre
void moverTorre(int atual, int total) {
    if (atual > total) return;
    printf("Direita\n");
    moverTorre(atual + 1, total);
}

// Função recursiva para movimentação do Bispo
void moverBispo(int total, int direcao) { // 0 = Direita; 1 = Cima; sempre começar com direcao 0
    if (total == 0) return; 
    if(direcao == 0){
        printf("Direita\n");
        moverBispo(total, 1);
    }else{
        printf("Cima\n");
        moverBispo(total-1, 0);
    }
}

int main() {
    int movimentoTotal;
    
    // Movimentação da Rainha
    movimentoTotal = 3;
    printf("Movimentação da rainha\n");
    moverRainha(0, movimentoTotal);

    // Movimentação da Torre
    movimentoTotal = 5;
    printf("Movimentação da torre\n");
    moverTorre(0, movimentoTotal);

    // Movimentação do Bispo
    movimentoTotal = 2;
    printf("Movimentação do bispo\n");
    moverBispo(movimentoTotal, 0);

    // Movimentação do Cavalo
    printf("\nMovimentação do cavalo\n");
    movimentoTotal = 2;
    for (int i = 1; i <= movimentoTotal; i++) {
        int movimentoAtual = 1;
        while (movimentoAtual <= 2) {
            printf("cima ");
            movimentoAtual++;
        }
        printf("direita\n");
    }

    return 0;
}
