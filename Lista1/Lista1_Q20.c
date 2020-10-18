/*
Criar uma aplica��o para ler um nome. Em seguida exiba o nome de tr�s formas diferentes.
a) texto normal, utilizando a m�scara de formata��o string (%s).
b) caractere a caractere em ordem crescente dos �ndices (do come�o para o fim).
c) caractere a caractere em ordem decrescente dos �ndices (do fim para o come�o).
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char nome[30];
    int i, tam;

    printf("Digite um nome: ");
    scanf("%[ -~]", nome);
    printf("\n");

    //SOLU��O LETRA A
    printf("O nome digitado foi: ");
    printf("%s\n", nome);

    printf("\n");
    tam = strlen(nome);

    //SOLU��O LETRA B
    printf("Nome digitado caractere por caractere em ordem direta:\n");
    for(i = 0; i < tam; i++) {
        printf("%c\n", nome[i]);
    }
    printf("\n");

    //SOLU��O LETRA C
    printf("Nome digitado caractere por caractere em ordem inversa:\n");
    tam --;
    while(tam >= 0) {

        printf("%c\n", nome[tam--]);
    }

    puts("\n");

    return 0;
}
