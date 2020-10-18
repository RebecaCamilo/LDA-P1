/*
Gere uma matriz 3x4 de inteiros, e peça para o usuário do programa preenchê la.
Informe a quantidade de vezes que o número 5 foi digitado.
*/


int main() {

    int matriz[5][5], i, j, cont = 0;

    //pedir ao usuario que preencha a matriz e ler os valores
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("Digite o numero da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            //adciona 1 ao contador toda vez que o numero 5 for digitado
            if(matriz[i][j] == 5) {
                cont++;
            }
        }
    }
    printf("\nO numero 5 foi digitado %d vez(es)!", cont);
    puts("\n");

    return 0;
}
