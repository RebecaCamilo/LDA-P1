/*
Faça algoritmo que funcione como uma calculadora entre dois números, e que possua as
4 operações básicas: soma, subtração, divisão e multiplicação. O programa deve perguntar
ao usuário qual operação ele quer realizar, a resposta do usuário deverá ser um caractere,
'+' se soma, '-' se subtração, '*' se multiplicação, e '/' se divisão. Em seguida o programa
deve pedir para o usuário digitar o primeiro número e depois o segundo. Como saída o
programa deve exibir o resultado da operação realizada.
a) faça utilizando if/else.
b) faça utilizando switch/case.
*/

#include <stdio.h>

int main() {

    float n1, n2;
    char simb;

    //solicitar operacao desejada e ler
    puts("CALCULADORA \nQual operacao deseja realizar? \n[+] Soma \n[--] Subtracao \n[*] Multiplicacao \n[/] Divisao");
    simb = getchar();

//SOLUÇÃO COM IF/ELSE
 /*
    if(simb == '+') {
        puts("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);
        n1 += n2;
        printf("O resultado da operaca eh %.2f", n1);
    } else if(simb == '-') {
        puts("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);
        n1 -= n2;
        printf("O resultado da operaca eh %.2f", n1);
    } else if(simb == '*') {
        puts("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);
        n1 *= n2;
        printf("O resultado da operaca eh %.2f", n1);
    } else if(simb == '/') {
        puts("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);
        n1 /= n2;
        printf("O resultado da operaca eh %.2f", n1);
    } else {
        printf("Operacao invalida.");
    }
*/
//SOLUÇÃO COM SWITCH/CASE
    switch(simb) {
        case '+':
            puts("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
            n1 += n2;
            printf("O resultado da operaca eh %.2f", n1);
            break;
        case '-':
            puts("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
            n1 -= n2;
            printf("O resultado da operaca eh %.2f", n1);
            break;
        case '*':
            puts("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
            n1 *= n2;
            printf("O resultado da operaca eh %.2f", n1);
            break;
        case '/':
            puts("Digite dois numeros: ");
            scanf("%f %f", &n1, &n2);
            n1 /= n2;
            printf("O resultado da operaca eh %.2f", n1);
            break;
        default:
            printf("Operacao invalida.");
    }

    puts("\n");

    return 0;
}

