/*Classificação de Temperatura
Leia uma temperatura:
Frio (< 15°C)
Agradável (15–25°C)
Quente (> 25°C)*/

#include <stdio.h>

int main() {
    float temperatura;

    // Solicita a temperatura ao usuário
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);

    // Classificação da temperatura
    if (temperatura < 15) {
        printf("Frio\n");
    } else if (temperatura <= 25) {
        printf("Agradável\n");
    } else {
        printf("Quente\n");
    }

    return 0;
}