/*Número Positivo, Negativo ou Zero
Leia um número e informe se ele é:
Positivo
Negativo
Zero*/





#include <stdio.h>

int main() {
    float numero;

    
    printf("Digite um número: ");
    scanf("%f", &numero);

    
    if (numero > 0) {
        printf("O número é: Positivo\n");
    } 
    else if (numero < 0) {
        printf("O número é: Negativo\n");
    } 
    else {
        printf("O número é: Zero\n");
    }

    return 0;
}