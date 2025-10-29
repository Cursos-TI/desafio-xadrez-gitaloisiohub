#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
        
    int i;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.


     printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.


    printf("\nTorre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


     printf("\nRainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

   printf("Movimento do Cavalo:\n");

   
    const int casasBaixo = 2;
    const int casasEsquerda = 1;


    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

    int k = 0;
    while (k < casasEsquerda) {
        printf("Esquerda\n");
        k++;
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }
    printf("Cima\n");
    moverTorre(casasRestantes - 1);

}

    void moverBispo(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }

    for (int vertical = 0; vertical < 1; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Diagonal superior direita\n");
        }
    }

    void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) {
        return;
    }
    printf("Direita\n");
    moverRainha(casasRestantes - 1);
}

    void moverCavalo() {
    const int casasCima = 2;
    const int casasDireita = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 1, j = 0; i <= casasCima; i++, j++) {
        printf("Cima\n");

        if (i < casasCima) {
            continue;
        }

        int k = 0;
        while (k < casasDireita) {
            printf("Direita\n");
            k++;

            
            if (k == casasDireita) {
                break;
            }
        }
    }
}

    int main() {

    const int casasTorre = 3;
    const int casasBispo = 3;
    const int casasRainha = 3;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);


    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);


    printf("\n");
    moverCavalo();

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
