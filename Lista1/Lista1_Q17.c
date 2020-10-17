/*
Leia dois números inteiros, o primeiro representará a base e o segundo o expoente. Calcule
o valor da base elevado ao expoente. Exemplo: 3 4 = 3*3*3*3 = 81; 5 3 = 5*5*5 = 125. Em
C não existe nenhum operador matemático que calcule o expoente. Desenvolva o seu
próprio algoritmo para realizar o cálculo, utilizando um laço de repetição para realizar
sucessivas multiplicações.
*/

#include <stdio.h>

int main() {

    int base, expoente, resultado = 1, i;

    //solicitar ao usuario 2 numeros e os ler
    puts("Digite 2 numeros inteiros relativos a base e expoente de uma exponenciação, respectivamente: ");
    scanf("%d %d", &base, &expoente);

    //multiplicar a base por ela mesma a quantidade de vezes relativa ao expoente
    for(i = 1; i <= expoente; i++) {
        printf("%d", base);
            if(i <= expoente - 1){
                printf("*");
            } else {
                printf(" = ");
            }
        resultado *= base;
    }
    printf("%d", resultado);

    puts("\n");

    return 0;
}
