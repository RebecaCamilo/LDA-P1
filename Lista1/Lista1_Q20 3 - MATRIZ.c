/*
Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê la.
a) Informe qual foi o maior número encontrado na matriz.
b) Informe qual foi o menor número encontrado na matriz.
*/

#include <stdio.h>

int main() {

    int matriz[3][4], lin, col, maior, menor;

    //pedir ao usuario que preencha a matriz e ler os valores
    for(lin = 0; lin < 3; lin++) {
        for(col = 0; col < 4; col++) {
            printf("Digite o numero da linha %d, coluna %d: ", lin + 1, col + 1);
            scanf("%d", &matriz[lin][col]);
            //adciona 1 ao contador toda vez que o numero 5 for digitado
        }
    }
    //atrubuindo valores digitados pelo usiarios nas variaveis maior e menor
    maior = matriz[0][0];
    menor = matriz[0][0];
    //comparando as variaveis maior e menor com todos os valores digitados pelo usuario
    for(lin = 0; lin < 3; lin++) {
        for(col = 0; col < 4; col++) {
            if(matriz[lin][col] > maior) {
                maior = matriz[lin][col];
            }
            if(matriz[lin][col] < menor) {
                menor = matriz[lin][col];
            }
        }
    }
    //SOLUÇÃO LETRA A
    printf("\nO MAIOR numero digitado foi: %d", maior);
    //SOLUÇÃO LETRA B
    printf("\nO MENOR numero digitado foi: %d", menor);

    puts("\n");

    return 0;
}
