#include <stdio.h>

int main() {
    int i;
    printf("Mostre todos os números ímpares de 1 até 20 \n" );
    for (i = 1; i <= 20; i++) {
       
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    printf("\n"); 
    return 0;
}