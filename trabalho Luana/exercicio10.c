#include <stdio.h>

void busca(float (*dados)[3], int *num_atleta, int tamanho) {
    int mais_baixo = 0;
    int mais_alto = 0;
    int mais_leve = 0;
    int mais_pesado = 0;

    for (int i = 1; i < tamanho; i++) {
        if (dados[i][1] < dados[mais_baixo][1]) {
            mais_baixo = i;
        }
        if (dados[i][1] > dados[mais_alto][1]) {
            mais_alto = i;
        }
        if (dados[i][2] < dados[mais_leve][2]) {
            mais_leve = i;
        }
        if (dados[i][2] > dados[mais_pesado][2]) {
            mais_pesado = i;
        }
    }

    *num_atleta = mais_baixo + 1;
    *(num_atleta + 1) = mais_alto + 1;
    *(num_atleta + 2) = mais_leve + 1;
    *(num_atleta + 3) = mais_pesado + 1;
}

int main() {
    float dados[10][3];
    int num_atleta[4];

    printf("Digite os dados dos 10 atletas (número de inscrição, altura, peso):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f %f %f", &dados[i][0], &dados[i][1], &dados[i][2]);
    }

    busca(dados, num_atleta, 10);

    printf("Atleta mais baixo (número %d): %.2f metros\n", num_atleta[0], dados[num_atleta[0] - 1][1]);
    printf("Atleta mais alto (número %d): %.2f metros\n", num_atleta[1], dados[num_atleta[1] - 1][1]);
    printf("Atleta mais leve (número %d): %.2f kg\n", num_atleta[2], dados[num_atleta[2] - 1][2]);
    printf("Atleta mais pesado (número %d): %.2f kg\n", num_atleta[3], dados[num_atleta[3] - 1][2]);

    return 0;
}
