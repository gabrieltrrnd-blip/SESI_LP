#include <stdio.h>

int main() {
    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++) {
        if (i % 2 != 0) { 
            soma += i;     
        }
    }

    printf("A soma dos números ímpares entre 1 e 100 é: %d\n", soma);

    return 0;
}