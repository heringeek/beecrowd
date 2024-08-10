#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int x[3], sorted[3];

    // Leitura dos valores
    scanf("%d %d %d", &x[0], &x[1], &x[2]);

    // Copiar os valores para outro array para manter a ordem original
    for (int i = 0; i < 3; i++) {
        sorted[i] = x[i];
    }

    // Ordenar o array copiado
    qsort(sorted, 3, sizeof(int), compare);

    // Imprimir os valores ordenados
    for (int i = 0; i < 3; i++) {
        printf("%d\n", sorted[i]);
    }
    
    // Linha em branco entre as duas saídas
    printf("\n");

    // Imprimir os valores na ordem original
    for (int i = 0; i < 3; i++) {
        printf("%d\n", x[i]);
    }

    return 0;
}
