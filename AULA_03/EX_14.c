#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

   
    printf("Contagem regressiva:\n");
    for(int i = numero; i >= 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}