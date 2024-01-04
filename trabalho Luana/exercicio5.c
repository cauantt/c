
#include <stdio.h>

void repetidos(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int repetido = 0;
        for (int j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}

int main() {
    int vetor[20];

    printf("Digite 20 números inteiros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Números sem repetição: ");
    repetidos(vetor, 20);

    return 0;
}
