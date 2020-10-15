//Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três.

#include <stdio.h>

int main() {

    int n1, n2, n3, aux;

    //solicitar 3 numeros e os ler
    printf("Digite 3 numeros inteiros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    //forçar que n2 seja maior que n1 para fazer menos comparações
    if (n1 > n2) {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if(n1 >= n3) {
        printf("O menor numero entre os tres eh: %d", n3);
    } else {
        printf("O menor numero entre os tres eh: %d", n1);
    }

  return 0;
}

