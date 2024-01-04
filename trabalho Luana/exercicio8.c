#include <stdio.h>

void armazena(int *vetor1, int *vetor2, int *vetor3, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (i % 2 == 0) {
            *(vetor3 + i) = *(vetor1 + i);
        } else {
            *(vetor3 + i) = *(vetor2 + i);
        }
    }
}

int main() {
    int vetor1[10];
    int vetor2[10];
    int vetor3[10];

    printf("Digite 10 valores para o primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 10 valores para o segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    armazena(vetor1, vetor2, vetor3, 10);

    printf("Terceiro vetor (posições pares do vetor1 e posições ímpares do vetor2):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
