#include <stdio.h>

int main() {
    int i;

    printf("Numeros pares de 1 a 20:\n");

    for (i = 1; i <= 20; i++) {
       
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}