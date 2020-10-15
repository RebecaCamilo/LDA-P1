/*
Desenhe na tela uma forma geométrica utilizando caracteres, utilize um espaço entre os caracteres. Sugestão de caracteres: X, 0, O.
a) Desenhe um quadrado de tamanho 5x5. Exemplo:
X X X X X
X X X X X
X X X X X
X X X X X
X X X X X
b) Pergunte ao usuário qual o tamanho do quadrado que ele quer que seja desenhado, e o desenhe.
*/

#include <stdio.h>

int main() {

    int i, j, tam;

//SOLUÇÃO LETRA A

    //imprimir matriz de tamanho 5x5
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("X ");
        }
    printf("\n");
    }
    puts("\n");

//SOLUÇÃO LETRA B
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
