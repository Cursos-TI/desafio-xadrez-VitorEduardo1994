#include <stdio.h> // Jogo de Xadrez feito em C

// Recursividade para as peças Torre, Bispo, Rainha. Obs.: Cavalo se mantém sem recursividade.

void MovimentoTorre (int t) { // Torre feita de forma recursiva, se movendo 5 casas para a direita
    if (t > 0) { 
        printf ("Direita!\n");
        MovimentoTorre (t - 1);
    }
}

void MovimentoBispo (int b) { // Bispo feito de forma recursiva, se movendo 5 casas para a direita e cima
    if (b > 0) {
        printf ("Direita, Cima!\n");
        MovimentoBispo (b - 1);
    }
}

void MovimentoRainha (int r) { // Rainha feita de forma recursiva, se movendo 8 casas para a esquerda
    if (r > 0) {
        printf ("Esquerda!\n");
        MovimentoRainha (r - 1);
    }
}

int main() {
    int cavalo = 1;

//============================= Movimento Torre =============================

    printf ("A torre se moveu!\n");
    MovimentoTorre (5);

//============================= Movimento Bispo =============================

    printf ("O bispo se moveu!\n");
    MovimentoBispo (5);

//============================= Movimento Rainha =============================

    printf ("A rainha se moveu!\n");
    MovimentoRainha (8);

//============================= Movimento Cavalo =============================

    printf("O cavalo se moveu!\n");

    while (cavalo--) { 
        for (int movimento = 0; movimento < 2; movimento++) { 
            printf("Cima!\n"); 
        }
        printf("Direita!\n"); 
    }

    return 0;
}
