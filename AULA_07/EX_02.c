#include <stdio.h>

int main() {
    float n1, n2;
    int op;

    do {
        printf("\n===== CALCULADORA =====\n");
        printf("1: +\n");
        printf("2: -\n");
        printf("3: *\n");
        printf("4: /\n");
        printf("0: sair\n");
        printf("Escolha a operacao: ");
        scanf("%d", &op);

        if (op == 0) {
            printf("Saindo...\n");
            break;
        }

        printf("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);

        if (op == 1) {
            printf("Resultado: %.2f\n", n1 + n2);
        }
        else if (op == 2) {
            printf("Resultado: %.2f\n", n1 - n2);
        }
        else if (op == 3) {
            printf("Resultado: %.2f\n", n1 * n2);
        }
        else if (op == 4) {
            if (n2 != 0)
                printf("Resultado: %.2f\n", n1 / n2);
            else
                printf("Erro: divisao por zero!\n");
        }
        else {
            printf("Operacao invalida!\n");
        }

    } while (op != 0);

    return 0;
}