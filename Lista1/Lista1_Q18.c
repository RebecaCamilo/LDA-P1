/*
Ler 10 n�meros a serem digitados pelo usu�rio e armazen�-los em um vetor.
a) Exibir a quantidade de vezes que o n�mero 3 est� presente no vetor.
b) Pergunte ao usu�rio qual n�mero ele quer pesquisar (no lugar do n�mero 3), e
diga quantas vezes este n�mero est� presente no vetor.
*/

#include <stdio.h>

int main() {

    int n[10], i, cont = 0, num = 3;

//SOLU��O LETRA A

    //pedir ao usuario 10 numeros e l�-los
    printf("Digite 10 numeros inteiros aleatorios:\n");

    //preencher cada espa�o do array com um numero e adcionar ++ ao contador toda vez que o numero num (3) for contado
    for(i = 0; i < 10; i++) {
        scanf("%d", &n[i]);
        if(n[i] == num) {
            cont++;
        }
    }
    printf("A quantidade de vezes que o numero 3 esta presente no vetor eh: %d\n\n", cont);

//SOLU��O LETRA B

    printf("Qual numero voce gostaria de pesquisar neste vetor?\n");
    scanf("%d", &num);
    //preencher cada espa�o do array com um numero e adcionar ++ ao contador toda vez que o numero num for contado
    for(i = 0, cont = 0; i < 10; i++) {
        if(n[i] == num) {
            cont++;
        }
    }
    printf("A quantidade de vezes que o numero %d esta presente no vetor eh: %d\n", num, cont);

    puts("\n");

    return 0;
}
