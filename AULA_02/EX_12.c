#include <stdio.h>

int main() {
    float salario, salario_final, bonus;

    // Leitura do salário
    printf("Digite o salário: ");
    scanf("%f", &salario);

    // Cálculo do bônus
    if (salario > 3000) {
        bonus = salario * 0.05;  // 5% de bônus
    } else {
        bonus = salario * 0.10;  // 10% de bônus
    }

    // Salário final
    salario_final = salario + bonus;

    // Exibição do resultado
    printf("Salário final com bônus: %.2f\n", salario_final);

    return 0;
}