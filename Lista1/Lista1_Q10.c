/*
Leia o ano de nascimento de um nadador, calcule sua idade, e classifique o em uma das categorias:
* Infantil A de 5 a 7 anos
* Infantil B de 8 a 10 anos
* Juvenil A de 11 a 13 anos
* Juve nil B de 14 a 17 anos
* Sênior maiores de 17 anos
Obs.: Utilize como ano atual o ano de 2011.
O programa deve fornecer uma saída do tipo:
Nadador de idade “idade” é da categoria “categoria”
*/

#include <stdio.h>

int main() {

    unsigned int ano_nasc, idade;

    //solicitar ano de nascimento e  ler
    printf("Digite seu ano de nascimento: \n");
    scanf("%u", &ano_nasc);

    //calcular a idade e guardar na variavel
    idade = 2011 - ano_nasc;

    //Comparar idade para saber qual a categoria em q se encaixa e printar na tela a categoria
    if(idade > 17 && idade < 80) {
        printf("Nadador de idade %u eh da categoria Senior.", idade);
    } else if(idade <= 17 && idade >= 14) {
        printf("Nadador de idade %u eh da categoria Juvenil B.", idade);
    } else if(idade < 14 && idade >= 11) {
        printf("Nadador de idade %u eh da categoria Juvenil A.", idade);
    } else if(idade < 11 && idade >= 8) {
        printf("Nadador de idade %u eh da categoria Infantil B.", idade);
    } else if(idade < 8 && idade >= 5) {
        printf("Nadador de idade %u eh da categoria Infantil A.", idade);
    } else {
        printf("Desculpe, sua idade %u nao se encaixa em nenhuma categoria.", idade);
    }
    puts("\n");

    return 0;
}

