#include <stdio.h>

void imprimir(int *vetor, int tamanho) {
    int maior = *vetor;
    int menor = *vetor;
    int posicao_maior = 0;
    int posicao_menor = 0;

    for (int i = 1; i < tamanho; i++) {
        if (*(vetor + i) > maior) {
            maior = *(vetor + i);
            posicao_maior = i;
        }
        if (*(vetor + i) < menor) {
            menor = *(vetor + i);
            posicao_menor = i;
        }
    }

    printf("Maior elemento: %d (posição %d)\n", maior, posicao_maior);
    printf("Menor elemento: %d (posição %d)\n", menor, posicao_menor);
}

int main() {
    int vetor[10];

    printf("Digite 10 valores para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    imprimir(vetor, 10);

    return 0;
}
