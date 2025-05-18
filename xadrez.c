#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void bispo(int n) {
    if (n > 0) {
        printf("Cima, Direita");  
        printf(n != 1 ? " -> " : "\n");
        bispo(n - 1);  // Chama a si mesma com n - 1
    }
    
}
void torre(int n) {
    if (n > 0) {
        printf("Direita");  
        printf(n != 1 ? " -> " : "\n");
        torre(n - 1);  // Chama a si mesma com n - 1
    }
    
}
void rainha(int n) {
    if (n > 0) {
        printf("Esquerda");  
        printf(n != 1 ? " -> " : "\n");
        rainha(n - 1);  // Chama a si mesma com n - 1
    }
    
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    const int bi = 5, to = 5, ra = 8, ca = 2;
    int i, j = 1, fim = 1;

    /*
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nBispo cinco casas na diagonal direita para cima:\n");
    for(i=1; i <= bi; i++){
        printf("Cima, Direita");
        printf(i!=bi ? " -> " : "\n");
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nTorre cinco casas a direita:\n");
    for(i=1; i <= to; i++){
        printf("Direita");
        printf(i!=to ? " -> " : "\n");
    }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nRainha oito casas a esquerda:\n");
    for(i=1; i <= ra; i++){
        printf("Esquerda");
        printf(i!=ra ? " -> " : "\n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nCavalo duas casas para baixo e uma a esquerda:\n");
    while (fim--)
    {
        for(i = 1; i <= ca; i++){
            printf("Baixo -> ");
        }
        printf("Esqueda\n");
    }
    */

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    // Implementação de Movimentação do Bispo
    // Com recursividade
    printf("\nBispo cinco casas na diagonal direita para cima:\n");
    printf("Recursividade!\n");
    bispo(bi);
    //Com loops aninhados
    printf("Loops Aninhados!\n");
    for (i = 1; i <= bi; i++)
    {
        printf("Cima, "); 
        while (j--)
        {
            printf("Direita");
        }
        printf(i != 5 ? " -> " : "\n");
        j = 1;
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nTorre cinco casas a direita:\n");
    torre(to);
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nRainha oito casas a esquerda:\n");
    rainha(ra);
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nCavalo duas casas para cima e uma a direita:\n");
    for(i = 1, j = ca-1; i <= ca && j >= 0; i++, j--){
        printf("Cima -> ");
        if (j) continue;
        printf("Direita\n");
    }

    printf("\n");
    return 0;
}