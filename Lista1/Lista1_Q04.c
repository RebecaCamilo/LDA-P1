//Ler uma temperatura em graus Fahrenheit e apresent� la convertida em graus Celsius. A
//f�rmula de convers�o �: C = (F 32)*(5.0/9).

#include <stdio.h>

int main() {

    int fahrenheit, celsius;

    //solicitar a temperatura em Fahrenheit e ler temperatura
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%d", &fahrenheit);

    //fazer calculo de conversao para celsius
    celsius = (fahrenheit - 32) * (5.0 / 9);

    //exibir temperatura em celsius
    printf("A temperatura em graus Celsius eh: %d", celsius);

    return 0;
}
