#include <stdio.h>

int procurar(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int vetor[8];
    int X, Y;

    
    printf("Digite os 8 valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    
    printf("Digite o valor de X: ");
    scanf("%d", &X);
    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    int posicaoX = procurar(vetor, 8, X);
    int posicaoY = procurar(vetor, 8, Y);

    if (posicaoX != -1) {
        printf("O valor X (%d) foi encontrado na posição %d do vetor.\n", X, posicaoX);
    } else {
        printf("O valor X (%d) não foi encontrado no vetor.\n", X);
    }

    if (posicaoY != -1) {
        printf("O valor Y (%d) foi encontrado na posição %d do vetor.\n", Y, posicaoY);
    } else {
        printf("O valor Y (%d) não foi encontrado no vetor.\n", Y);
    }

    return 0;
}
