/*
Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê la:
Em seguida exiba a separando os elementos da mesma linha por “ “-” (traço) e separando as
linhas por nova linha.
*/

#include <stdio.h>

int main() {

    int matriz[3][4], i, j;

    //pedir ao usuario que preencha a matriz e ler os valores
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("Digite o numero da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    //imprimir a matriz
    for(i = 0; i < 3; i++) {
        //valores com o "-" os separando (usei o "%.3d" para a matriz ficar organizada quando o usuario usar numeros de ate 3 digitos)
        for(j = 0; j < 3; j++) {
            printf("%.3d - ", matriz[i][j]);
        }
        //ultimo valor sem o "-"
        for(; j < 4; j++) {
            printf("%.3d", matriz[i][j]);
        }
    printf("\n");
    }

    return 0;
}
