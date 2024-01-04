#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int carta1;
    srand(time(NULL)); // Inicializa a semente do gerador de números aleatórios

    carta1 = rand() % 10;
    printf("%d\n", carta1);

    return 0;
}
