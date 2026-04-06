/*Cálculo de Frete
Leia o peso de uma encomenda:
Até 5kg → R$10
5 a 20kg → R$20
Acima de 20kg → R$50*/


#include <stdio.h>

int main() {
    float peso;
    float frete;

    // Solicita o peso da encomenda
    printf("Digite o peso da encomenda em kg: ");
    scanf("%f", &peso);

    // Calcula o frete com base no peso
    if (peso <= 5) {
        frete = 10.0;
    } else if (peso <= 20) {
        frete = 20.0;
    } else {
        frete = 50.0;
    }

    // Exibe o valor do frete
    printf("O valor do frete é: R$ %.2f\n", frete);

    return 0;
}