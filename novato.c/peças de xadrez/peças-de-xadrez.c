#include <stdio.h>

int main() {

    // Movimento da torre (FOR)
   
    // A Torre se move 5 casas para a direita
    printf("Movimento da TORRE (5 casas para a Direita):\n");

    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do bispo (WHILE)
 
    // O Bispo se move 5 casas na diagonal para cima e direita
    printf("\nMovimento do BISPO (5 casas na Diagonal Cima Direita):\n");

    int passoBispo = 1;
    while (passoBispo <= 5) {
        printf("Cima Direita\n");
        passoBispo++;
    }

  
    // Movimento da rainha (DO-WHILE)
  
    // A Rainha se move 8 casas para a esquerda
    printf("\nMovimento da RAINHA (8 casas para a Esquerda):\n");

    int passoRainha = 1;
    do {
        printf("Esquerda\n");
        passoRainha++;
    } while (passoRainha <= 8);

    return 0;
}