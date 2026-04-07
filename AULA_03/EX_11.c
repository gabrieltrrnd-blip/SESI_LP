#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("Digite um número: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {

        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %d\n", n, fatorial);
    }

    return 0;
}
