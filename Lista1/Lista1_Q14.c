/*
Leia dois valores, e exiba sua soma. Em seguida pergunte ao usuário: “Novo Cálculo
(S/N)?”. Deve se ler a resposta e se a resposta for ‘S’ (sim), deve se repetir todos os
comandos (instruções) novamente, mas se for qualquer outra resposta, o algoritmo deve
ser finalizado escrevendo a mensagem “Fim dos Cálculos”.
*/

#include <stdio.h>

int main() {

    int n1, n2, soma;
    char novo_calculo = 'S';

    while(novo_calculo == 'S') {
    //pedir ao usuario e ler 2 int
        puts("Digite 2 numeros inteiros:");
        scanf("%d %d", &n1, &n2);
        getchar();
    //somar e mostrar os int
        soma = n1 + n2;
        printf("%d + %d = %d\n", n1, n2, soma);
    //perguntar ao usuario se quer refazer o calculo
        puts("Novo Calculo? (S/N)");
        scanf("%c", &novo_calculo);
    //se S, refazer, se nao, terminar com a frase “Fim dos Cálculos”.
        if(novo_calculo != 'S') {
            puts("\nFim dos Calculos");
        }
        puts("\n");
    }

    puts("\n");

    return 0;
}

