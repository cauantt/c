#include <stdio.h>

void imprima(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[50];

    for (int i = 0; i < 50; i++) {
        vetor[i] = (i + 5 * i) % (i + 1);
    }

    imprima(vetor, 50);

    return 0;
}
