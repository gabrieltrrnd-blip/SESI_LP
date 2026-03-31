/*Cálculo de IMC
Leia peso e altura e calcule o IMC.
Classifique:
Abaixo do peso (< 18.5)
Normal (18.5–24.9)
Sobrepeso (25–29.9)
Obesidade (≥ 30)*/


#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("--- Calculadora de IMC ---\n");

    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (ex: 1.75): ");
    scanf("%f", &altura);


    imc = peso / (altura * altura);

    printf("\nSeu IMC e: %.2f\n", imc);


    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } 
    else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificacao: Peso Normal\n");
    } 
    else if (imc >= 25 && imc <= 29.9) {
        printf("Classificacao: Sobrepeso\n");
    } 
    else {
        printf("Classificacao: Obesidade\n");
    }

    return 0;
}