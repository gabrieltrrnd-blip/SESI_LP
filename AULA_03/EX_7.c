#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        soma += i;  
    }

    printf("A soma dos numeros de 1 a 10 eh: %d\n", soma);

    return 0;
}