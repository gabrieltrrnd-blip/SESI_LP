/*Cálculo de Conta de Energia
Leia o consumo em kWh:
Até 100 → R$0,50/kWh
101 a 200 → R$0,75/kWh
Acima de 200 → R$1,00/kWh
Calcule o valor total.*/

#include <stdio.h>

int main() {
    float consumo, valor;

    // Lê o consumo em kWh
    printf("Digite o consumo em kWh: ");
    scanf("%f", &consumo);

    // Calcula o valor baseado nas faixas
    if (consumo <= 100) {
        valor = consumo * 0.50;
    } else if (consumo <= 200) {
        // Para os primeiros 100 kWh cobra-se R$0,50 e o restante R$0,75
        valor = 100 * 0.50 + (consumo - 100) * 0.75;
    } else {
        // Para os primeiros 100 kWh: R$0,50, próximos 100 kWh: R$0,75, restante: R$1,00
        valor = 100 * 0.50 + 100 * 0.75 + (consumo - 200) * 1.00;
    }

    // Exibe o resultado
    printf("O valor total da conta de energia é: R$%.2f\n", valor);

    return 0;
}