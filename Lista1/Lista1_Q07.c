//Para ler um n �mero inteiro e dizer se ele � impar ou par.

#include <stdio.h>

int main() {

    int num;

    //solicitar um numero e o ler
    printf("Digite um numero inteiro: ");
    scanf("%f", &num);

    //verificar se o numero � par ou impar
    if(num % 2 == 0) {
        printf("O numero digitado eh PAR.");
    } else {
        printf("O numero digitado eh IMPAR.");
    }

    return 0;
}
