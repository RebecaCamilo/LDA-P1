//Ler um n�mero e diga se eles est� contido no intervalo entre 10 e 15, onde 10 e 15 tamb�m
//pertencem ao intervalo.

#include <stdio.h>

int main() {

    float num;

    //solicitar numero ao usuario e ler numero
    printf("Digite um numero: ");
    scanf("%f", &num);

    //verificar se num esta no intervalo num >= 10 && num <=15
    if(num >= 10 && num <=15) {
        printf("Numero esta contido no intervalo entre 10 e 15\n");
    } else {
        printf("Numero N�O esta contido no intervalo entre 10 e 15\n");
    }

    return 0;
}
