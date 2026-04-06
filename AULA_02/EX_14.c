/*Classificação de Nota com Conceito
Leia uma nota de 0 a 10 e classifique:
A (>= 9)
B (7 – 8.9)
C (5 – 6.9)
D (< 5)*/

#include <stdio.h>

int main() {
    float nota;

    // Leitura da nota
    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);

    // Validação da nota
    if (nota < 0 || nota > 10) {
        printf("Nota inválida!\n");
    } else {
        // Classificação
        if (nota >= 9) {
            printf("Conceito: A\n");
        } else if (nota >= 7) {
            printf("Conceito: B\n");
        } else if (nota >= 5) {
            printf("Conceito: C\n");
        } else {
            printf("Conceito: D\n");
        }
    }

    return 0;
}