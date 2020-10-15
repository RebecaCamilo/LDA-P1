//1. Ler um número e exibir a frase: “o número digitado foi: ” e logo após esta frase apresentar
//o valor do número lido.

#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("O numero digitado foi: %d", num);

    return 0;
}
