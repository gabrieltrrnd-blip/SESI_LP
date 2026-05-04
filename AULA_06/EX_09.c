#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;

    printf("Digite os elementos da matriz 5x5:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(matriz[i][j] < 0) {
                matriz[i][j] = 0;
            }
        }
    }

    printf("\nMatriz após substituição:\n");
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}