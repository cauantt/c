#include <stdio.h>

void imprime(float *vetor, int tamanho, int ordem) {
    if (ordem == 1) {
        for (int i = 0; i < tamanho; i++) {
            printf("%f ", vetor[i]);
        }
    } else {
        for (int i = tamanho - 1; i >= 0; i--) {
            printf("%f ", vetor[i]);
        }
    }
    printf("\n");
}

void menu(float *vetor, int tamanho) {
    int codigo;

    printf("Escolha uma opção:\n");
    printf("1 - Imprimir vetor na ordem direta\n");
    printf("2 - Imprimir vetor na ordem inversa\n");
    printf("0 - Finalizar o programa\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            imprime(vetor, tamanho, 1);
            break;
        case 2:
            imprime(vetor, tamanho, 2);
            break;
        default:
            printf("Código inválido.\n");
    }
}

int main() {
    float vetor[10];

    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    menu(vetor, 10);

    return 0;
}
