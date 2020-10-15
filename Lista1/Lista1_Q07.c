//Para ler um n úmero inteiro e dizer se ele é impar ou par.

#include <stdio.h>

int main() {

    int num;

    //solicitar um numero e o ler
    printf("Digite um numero inteiro: ");
    scanf("%f", &num);

    //verificar se o numero é par ou impar
    if(num % 2 == 0) {
        printf("O numero digitado eh PAR.");
    } else {
        printf("O numero digitado eh IMPAR.");
    }

    return 0;
}
