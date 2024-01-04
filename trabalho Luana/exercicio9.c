#include <stdio.h>

void armazena(float *vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite um número real: ");
        scanf("%f", vetor + i);
    }
}

float escalar(float *vetor1, float *vetor2, int tamanho) {
    float resultado = 0.0;
    for (int i = 0; i < tamanho; i++) {
        resultado += (*(vetor1 + i) * *(vetor2 + i));
    }
    return resultado;
}

void imprimir(float *vetor1, float *vetor2, int tamanho, float resultado) {
    printf("Vetor 1: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", *(vetor1 + i));
    }
    printf("\n");

    printf("Vetor 2: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%.2f ", *(vetor2 + i));
    }
    printf("\n");

    printf("Produto escalar: %.2f\n", resultado);
}

int main() {
    float vetor1[15];
    float vetor2[15];

    printf("Digite os valores do primeiro conjunto (15 números reais):\n");
    armazena(vetor1, 15);

    printf("Digite os valores do segundo conjunto (15 números reais):\n");
    armazena(vetor2, 15);

    float resultado = escalar(vetor1, vetor2, 15);

    imprimir(vetor1, vetor2, 15, resultado);

    return 0;
}
