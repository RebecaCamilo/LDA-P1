/*
Ler 10 números a serem digitados pelo usuário e armazená los em um vetor.
a) Diga qual é o maior dos 10 números.
b) Diga qual é o menor dos 10 números.
*/

#include <stdio.h>

int main() {

    int n[10], maior, menor, i;

    //solicitar ao usuario 10 numeros e ler eles em um vetor
    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n[i]);
    }
    //alocar qualquer valor do vetor nas variaveis maior e menor para que elas sejam valores pertencentes ao vetor
    maior = n[0];
    menor = n[0];
    //comparar o numero alocado nas variaveis maior e menor com todos os valores do vetor
    for(i = 0; i < 10; i++) {
        if(n[i] > maior) {
            maior = n[i];
        } else if(n[i] < menor) {
            menor = n[i];
        }
    }
    printf("\n");
    //SOLUÇÃO A
    printf("O maior numero do vetor eh %d\n", maior);
    //SOLUÇÃO B
    printf("O menor numero do vetor eh %d\n", menor);

    return 0;
}
