/*
Leia dois n�meros inteiros, o primeiro representar� a base e o segundo o expoente. Calcule
o valor da base elevado ao expoente. Exemplo: 3 4 = 3*3*3*3 = 81; 5 3 = 5*5*5 = 125. Em
C n�o existe nenhum operador matem�tico que calcule o expoente. Desenvolva o seu
pr�prio algoritmo para realizar o c�lculo, utilizando um la�o de repeti��o para realizar
sucessivas multiplica��es.
*/

#include <stdio.h>

int main() {

    int base, expoente, resultado = 1, i;

    //solicitar ao usuario 2 numeros e os ler
    puts("Digite 2 numeros inteiros relativos a base e expoente de uma exponencia��o, respectivamente: ");
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
