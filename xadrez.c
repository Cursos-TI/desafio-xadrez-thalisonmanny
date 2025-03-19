#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
     printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= 5){
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");

    // Implementação de Movimentação da Torre
  printf("Movimento da Torre:\n");
    for (int j = 1; j <= 5; j++) {
        printf("Casa %d: Direita\n", j);
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
   printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= 8);

    // Nível Aventureiro - Movimentação do Cavalo
     int l, m;
    int x = 4, y = 4; 

    // Movendo duas casas para baixo
    for (l = 0; i < 2; i++) {
        x++;
        printf("Movendo para baixo: Nova posição (%d, %d)\n", x, y);
    }

    // Movendo uma casa para a esquerda
    m = 0;
    while (j < 1) {
        y--;
        printf("Movendo para a esquerda: Nova posição (%d, %d)\n", x, y);
        m++;
    }
  // Nível Mestre - Funções Recursivas e Loops Aninhados
void moverTorre(int x, int y, int destinoX, int destinoY) {
    if (x == destinoX && y == destinoY) return;
    if (x < destinoX) {
        printf("Movendo para (%d, %d)\n", x + 1, y);
        moverTorre(x + 1, y, destinoX, destinoY);
    } else if (x > destinoX) {
        printf("Movendo para (%d, %d)\n", x - 1, y);
        moverTorre(x - 1, y, destinoX, destinoY);
    } else if (y < destinoY) {
        printf("Movendo para (%d, %d)\n", x, y + 1);
        moverTorre(x, y + 1, destinoX, destinoY);
    } else if (y > destinoY) {
        printf("Movendo para (%d, %d)\n", x, y - 1);
        moverTorre(x, y - 1, destinoX, destinoY);
    }
}

void moverBispo(int x, int y, int destinoX, int destinoY, int dx, int dy) {
    if (x == destinoX && y == destinoY) return;
    printf("Movendo para (%d, %d)\n", x + dx, y + dy);
    moverBispo(x + dx, y + dy, destinoX, destinoY, dx, dy);
}

void moverRainha(int x, int y, int destinoX, int destinoY) {
    if (x == destinoX && y == destinoY) return;
    
    if (x < destinoX) x++;
    else if (x > destinoX) x--;
    
    if (y < destinoY) y++;
    else if (y > destinoY) y--;
    
    printf("Movendo para (%d, %d)\n", x, y);
    moverRainha(x, y, destinoX, destinoY);
}

void moverCavalo(int x, int y, int limiteX, int limiteY) {
    for (int i = 0; i < limiteX; i++) {
        for (int j = 0; j < limiteY; j++) {
            if (i % 2 == 0 && j % 2 == 1) {
                printf("Cavalo movendo para (%d, %d)\n", x + 2, y + 1);
                x += 2;
                y += 1;
                if (x >= limiteX || y >= limiteY) break;
            }
        }
        if (x >= limiteX || y >= limiteY) break;
    }
}

int main() {
    printf("Movimentando a Torre:\n");
    moverTorre(0, 0, 3, 3);
    
    printf("\nMovimentando o Bispo:\n");
    moverBispo(0, 0, 3, 3, 1, 1);
    
    printf("\nMovimentando a Rainha:\n");
    moverRainha(0, 0, 3, 3);
    
    printf("\nMovimentando o Cavalo:\n");
    moverCavalo(0, 0, 8, 8);


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
