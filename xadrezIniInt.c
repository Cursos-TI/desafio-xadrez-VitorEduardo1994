#include <stdio.h> //Codigicação intermediaria e  iniciante. 
 
int main() {
 //======================== Movimentação TORRE =======================================
    int torre, bispo = 1, rainha = 1, cavalo = 1;
    printf("Aqui temos a movimentação da torre!\n");

    for (torre = 1; torre <= 5; torre++) {
        printf("A torre moveu-se para a direita!\n");
    }
  

    //======================== Movimentação BISPO =======================================

    printf("Movimentação do bispo!\n");

    while (bispo <= 5) {
        printf("Cima, Direita!\n");
        bispo++;
    }

    
    //======================== Movimentação RAINHA =======================================
    
    printf("Movimentação da rainha!\n");

    do {
        printf("Esquerda\n");
        rainha++;

    } while (rainha <= 8);

    //======================== Movimentação CAVALO =======================================
    printf("Movimentação do cavalo!\n");

    while (cavalo--) { // Cavalo já está valendo 1 globalmente, mas será decrementado para que faça apenas um único movimento lateral
        for (int movimento = 0; movimento < 2; movimento++) { // O loop para executar 2 vezes, das casas movimentadas
            printf("Baixo\n"); // Imprime "Baixo"
        }
        printf("Esquerda\n"); // Imprime "Esquerda"
    }

    return 0;
}
