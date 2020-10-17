/*
Ler 10 números a serem digitados pelo usuário e armazená-los em um vetor.
a) Exibir a quantidade de vezes que o número 3 está presente no vetor.
b) Pergunte ao usuário qual número ele quer pesquisar (no lugar do número 3), e
diga quantas vezes este número está presente no vetor.
*/

#include <stdio.h>

int main() {

    int n[10], i, cont = 0, num = 3;

//SOLUÇÃO LETRA A

    //pedir ao usuario 10 numeros e lê-los
    printf("Digite 10 numeros inteiros aleatorios:\n");

    //preencher cada espaço do array com um numero e adcionar ++ ao contador toda vez que o numero num (3) for contado
    for(i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
        if(n[i] == num) {
            cont++;
        }
    }
    printf("A quantidade de vezes que o numero 3 esta presente no vetor eh: %d\n\n", cont);

//SOLUÇÃO LETRA B

    printf("Qual numero voce gostaria de pesquisar neste vetor?\n");
    scanf("%d", &num);
    //preencher cada espaço do array com um numero e adcionar ++ ao contador toda vez que o numero num for contado
    for(i = 0, cont = 0; i < 10; i++) {
        if(n[i] == num) {
            cont++;
        }
    }
    printf("A quantidade de vezes que o numero %d esta presente no vetor eh: %d\n", num, cont);

    puts("\n");

    return 0;
}
