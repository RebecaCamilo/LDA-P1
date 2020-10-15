/*
Uma companhia quer verificar se um empregado está qualificado para a aposentadoria.
Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
* Ter no mínimo 65 anos de idade.
* Ter trabalhado, no mínimo 30 anos.
* Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
Ler os dados: o ano de nascimento do empregado e o ano de seu ingresso na
companhia. O programa deverá escrever a idade e o tempo de trabalho do empregado e a
mensagem “Requerer aposentadoria” ou “Não requerer”.
Obs.: Utilize como ano atual o ano de 2011.
*/

#include <stdio.h>

int main() {

    int ano_nasc, ano_ingr, ano_atual = 2011;

    //solicitar o ano de nascimento e o ano de ingresso e os ler
    printf("Digite seu ano de nascimento: \n");
    scanf("%d", &ano_nasc);
    printf("Digite seu ano de ingresso na companhia: \n");
    scanf("%d", &ano_ingr);

    //verificar se  o funcionario se encaixa em alguma das condições para a aposentadoria
    if (ano_atual - ano_nasc >= 65 || ano_atual - ano_ingr >= 30 || (ano_atual - ano_nasc >= 60 && ano_atual - ano_ingr >= 25)) {
        puts("Requerer aposentadoria");
    } else {
        puts("Nao requerer aposentadoria");
    }

  return 0;
}

