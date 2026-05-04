#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int maior, menor;

    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = menor = matriz[0][0];

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}