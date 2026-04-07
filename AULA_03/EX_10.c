#include <stdio.h>

int main() {
    int num1, num2, inicio, fim;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 < num2) {
        inicio = num1;
        fim = num2;
    } else {
        inicio = num2;
        fim = num1;
    }

    if (fim - inicio <= 1) {
        printf("Não há números entre %d e %d.\n", inicio, fim);
    } else {
        printf("Números entre %d e %d:\n", inicio, fim);
        for (int i = inicio + 1; i < fim; i++) {
            printf("%d\n", i);
        }
    }

    return 0;
}