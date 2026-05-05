#include <stdio.h>

int main() {
    float n1, n2;
    char op;

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    if (op == '+') {
        printf("Resultado: %.2f\n", n1 + n2);
    }
    else if (op == '-') {
        printf("Resultado: %.2f\n", n1 - n2);
    }
    else if (op == '*') {
        printf("Resultado: %.2f\n", n1 * n2);
    }
    else if (op == '/') {
        if (n2 != 0)
            printf("Resultado: %.2f\n", n1 / n2);
        else
            printf("Erro: divisao por zero!\n");
    }
    else {
        printf("Operacao invalida!\n");
    }

    return 0;
}