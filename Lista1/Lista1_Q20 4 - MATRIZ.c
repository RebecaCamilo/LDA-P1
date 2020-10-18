/*
Leia 2 notas de 10 alunos. Não é para ler o Nome. As notas devem ser armazenadas em
uma matriz 2D onde a primeira coluna é a nota1, e a segunda coluna a nota2. Em seguida,
exiba a tabela.
a) Adicione uma terceira coluna a sua matriz, e armazene nela a média das 2 notas. Atenção
a média deve ser calculada automaticamente pelo seu programa, o usuário não irá digitar a
média, apenas as 2 notas.
*/

#include <stdio.h>

int main() {

    float matriz[2][3];
    int i, j, cont = 0, aluno = 1;

    //pedir ao usuario que preencha a matriz, ler seus valores e tirar a media deles
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("Digite a primeira nota do aluno %d: ", aluno);
            scanf("%f", &matriz[i][j]);
            j++;
            printf("Digite a segunda nota do aluno %d: ", aluno++);
            scanf("%f", &matriz[i][j]);
            printf("\n");
        }
    matriz[i][2] = (matriz[i][0] + matriz[i][1]) / 2.0;
    }
    //exibir as notas digitadas (apenas ate a coluna 2 da matriz)
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
    printf("\n");
    }

    printf("\nGerando as medias...\n\n");

    //SOLUÇÃO LETRA A
    //exibir as notas e medias (todas as colunas da matriz)
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
    printf("\n");
    }

    puts("\n");

    return 0;
}
