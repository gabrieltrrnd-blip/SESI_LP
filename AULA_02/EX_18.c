/*Verificação de Ano de Eleição
Leia um ano e informe se é ano de eleição (múltiplo de 4).
*/


#include <stdio.h>

int main() {
    int ano;

    // Solicita o ano ao usuário
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verifica se é múltiplo de 4
    if (ano % 4 == 0) {
        printf("O ano %d é ano de eleição.\n", ano);
    } else {
        printf("O ano %d não é ano de eleição.\n", ano);
    }

    return 0;
}