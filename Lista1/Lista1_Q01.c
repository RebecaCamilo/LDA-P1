//1. Ler um n�mero e exibir a frase: �o n�mero digitado foi: � e logo ap�s esta frase apresentar
//o valor do n�mero lido.

#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("O numero digitado foi: %d", num);

    return 0;
}
