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

     // Simulação do movimento do Cavalo (usando for e while e do-while aninhados)
    printf("Movimento do Cavalo:\n");
    int casas_baixo = 2;
    int casas_esquerda = 1;

    for (int i = 0; i < 1; i++) { // Loop externo usando for)
        int baixo = 0;
        int esquerda = 0;
        while (baixo < casas_baixo) { // loop interno do movimento para baixo usando while)
            printf("Baixo\n");
            baixo++;
        }
        do {                          // loop interno do movimento para a esquerda usando do-while)
            printf("Esquerda\n");
            esquerda++;
        } while (esquerda < casas_esquerda);           
                       
    }
    printf("\n");


    return 0;
}