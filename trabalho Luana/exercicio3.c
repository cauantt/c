#include <stdio.h>

void leitura(int *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
}

void imprimepar(int *vetor, int tamanho) {
    printf("Valores pares: ");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}

void imprimeimpar(int *vetor, int tamanho) {
    printf("Valores ímpares: ");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}

int main() {
    int vetor[10];
    leitura(vetor, 10);
    imprimepar(vetor, 10);
    imprimeimpar(vetor, 10);

    return 0;
}
