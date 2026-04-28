#include <stdio.h>

int main() {
    int matriz[2][2];
    int soma = 0;

    // Leitura da matriz
    printf("Digite os elementos da matriz 2x2:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    // Exibição da soma
    printf("A soma de todos os elementos é: %d\n", soma);

    return 0;
}