/*Verificação de Múltiplos
Leia dois números e verifique se o primeiro é múltiplo do segundo.*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Leitura dos dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Verificação se num1 é múltiplo de num2
    if (num2 == 0) {
        printf("Não é possível dividir por zero.\n");
    } else if (num1 % num2 == 0) {
        printf("%d é múltiplo de %d.\n", num1, num2);
    } else {
        printf("%d não é múltiplo de %d.\n", num1, num2);
    }

    return 0;
}