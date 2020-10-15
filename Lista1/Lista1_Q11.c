/*
Fa�a algoritmo que funcione como uma calculadora entre dois n�meros, e que possua as
4 opera��es b�sicas: soma, subtra��o, divis�o e multiplica��o. O programa deve perguntar
ao usu�rio qual opera��o ele quer realizar, a resposta do usu�rio dever� ser um caractere,
'+' se soma, '-' se subtra��o, '*' se multiplica��o, e '/' se divis�o. Em seguida o programa
deve pedir para o usu�rio digitar o primeiro n�mero e depois o segundo. Como sa�da o
programa deve exibir o resultado da opera��o realizada.
a) fa�a utilizando if/else.
b) fa�a utilizando switch/case.
*/

#include <stdio.h>

int main() {

    float n1, n2;
    char simb;

    //solicitar operacao desejada e ler
    puts("CALCULADORA \nQual operacao deseja realizar? \n[+] Soma \n[--] Subtracao \n[*] Multiplicacao \n[/] Divisao");
    simb = getchar();

//SOLU��O COM IF/ELSE
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
//SOLU��O COM SWITCH/CASE
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

