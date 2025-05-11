#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (usando for)
    printf("Movimento da Torre:\n\n");
    int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n\n");
    int casas_bispo = 5;
    int j = 0;
    while (j < casas_bispo) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Simulação do movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n\n");
    int casas_rainha = 8;
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casas_rainha);
    printf("\n");

    return 0;
}