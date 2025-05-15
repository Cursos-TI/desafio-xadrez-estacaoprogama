#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); // Chamada recursiva com uma casa a menos
    }
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1); // Chamada recursiva com uma casa a menos
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // Chamada recursiva com uma casa a menos
    }
}

int main() {
    // Movimento da Torre usando recursividade
    printf("Movimento da Torre:\n\n");
    int casas_torre = 5;
    moverTorre(casas_torre);
    printf("\n");

    // Movimento do Bispo usando recursividade e loops aninhados for)
    printf("Movimento do Bispo:\n\n");
    int casas_bispo_vertical = 5;
    int casas_bispo_horizontal = 5;

    // Loop externo para o movimento vertical
    for (int i = 0; i < casas_bispo_vertical; i++) {
        // Loop interno para o movimento horizontal
        for (int j = 0; j < casas_bispo_horizontal; j++) {
            printf("Cima,Direita\n");
        }
        break;
    }
    printf("\n");

    // Movimento da Rainha usando recurividade
    printf("Movimento da Rainha:\n\n");
    int casas_rainha = 8;
    moverRainha(casas_rainha);
    printf("\n");

    // Movimento do Cavalo usando loops aninhados com continue e break
    printf("Movimento do Cavalo:\n");
    int movimento_cavalo = 0;
    int total_movimentos_cavalo = 3; // Simular alguns movimentos em "L"

    for (int cima = 0; cima < total_movimentos_cavalo; cima++) {
        for (int direita = 0; direita < 2; direita++) { // Controla o movimento para cima de no máximo 2
            printf("Cima\n");
            if (direita == 1) { // Após duas casas para cima, move para a direita
                for (int lado = 0; lado < 1; lado ++) { // Controla o movimento, sempre 1 para a direita 
                    printf("Direita\n");
                    movimento_cavalo++;
                    if (movimento_cavalo == total_movimentos_cavalo) {
                        break; // Interrompe os loops externos quando atingir o número desejado de movimentos
                    }
                }
            }
        }
        if (movimento_cavalo == total_movimentos_cavalo) {
            break; // Interrompe o loop externo se o número desejado de movimentos foi atingido
        }
    }
    printf("\n");

    return 0;
}


