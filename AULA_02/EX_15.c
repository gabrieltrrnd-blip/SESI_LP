/*Verificação de Maioridade para Votação
Leia a idade e informe:
Não pode votar (< 16)
Voto opcional (16–17 ou > 70)
Voto obrigatório (18–70)*/

#include <stdio.h>

int main() {
    int idade;

    // Solicita a idade do usuário
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Verifica a categoria de votação
    if (idade < 16) {
        printf("Nao pode votar.\n");
    } else if ((idade >= 16 && idade < 18) || (idade > 70)) {
        printf("Voto opcional.\n");
    } else if (idade >= 18 && idade <= 70) {
        printf("Voto obrigatorio.\n");
    } else {
        printf("Idade invalida.\n"); // Para casos negativos ou muito extremos
    }

    return 0;
}