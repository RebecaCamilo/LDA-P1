/*
Desenhe na tela uma forma geom�trica utilizando caracteres, utilize um espa�o entre os caracteres. Sugest�o de caracteres: X, 0, O.
a) Desenhe um quadrado de tamanho 5x5. Exemplo:
X X X X X
X X X X X
X X X X X
X X X X X
X X X X X
b) Pergunte ao usu�rio qual o tamanho do quadrado que ele quer que seja desenhado, e o desenhe.
*/

#include <stdio.h>

int main() {

    int i, j, tam;

//SOLU��O LETRA A

    //imprimir matriz de tamanho 5x5
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("X ");
        }
    printf("\n");
    }
    puts("\n");

//SOLU��O LETRA B
    puts("Qual tamanho do quadrado que voce quer que seja desenhado? (50 tam max.)");
    scanf("%d", &tam);
    puts("\n");
    for(i = 0; i < tam; i++) {
        for(j = 0; j < tam; j++) {
            printf("X ");
        }
    printf("\n");
    }
    puts("\n");

    return 0;
}
