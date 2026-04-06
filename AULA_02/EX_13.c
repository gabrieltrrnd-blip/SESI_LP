/*Operação Matemática
Leia dois números e uma operação (+, -, *, /).
Realize a operação e exiba o resultado.
*/
#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;

    // Leitura dos números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Leitura da operação
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao); // note o espaço antes de %c para consumir \n do buffer

    // Verificação e cálculo
    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if(num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
    }

    return 0;
}