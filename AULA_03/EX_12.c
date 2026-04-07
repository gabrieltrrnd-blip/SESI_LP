#include <stdio.h>

int main() {
    int i;
    int count = 0;

    for (i = 1; i <= 50; i++) {
        if (i % 2 == 0) { 
            count++;
        }
    }

    printf("Existem %d numeros pares entre 1 e 50.\n", count);

    return 0;
}