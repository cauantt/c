#include <stdio.h>

void quadrado(float vetor[], float resultado[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor[i] * vetor[i];
    }
}

void imprimir(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%f ", vetor[i]);
    }
    printf("\n");
}

int main() {
    float vetor_original[10];
    float vetor_quadrado[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um número real: ");
        scanf("%f", &vetor_original[i]);
    }

    quadrado(vetor_original, vetor_quadrado, 10);

    printf("Vetor Original: ");
    imprimir(vetor_original, 10);

    printf("Vetor Quadrado: ");
    imprimir(vetor_quadrado, 10);

    return 0;
}
