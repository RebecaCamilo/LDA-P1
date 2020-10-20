/*
Leia o nome completo de uma pessoa (nome / nome do meio / sobrenome) de uma vez
só. Em seguida, exiba cada uma das palavras do nome em linhas diferentes.
Ex.: João da Silva Cavalcanti
João
da
Silva
Cavalcanti
*/

#include <stdio.h>

int main() {

    char nome_completo[200];
    int i;

    //Pedir nome completo e ler ele
    printf("Digite seu nome completo: ");
    scanf("%[ -~]", nome_completo);

    //verificar caractere por canactere
    for(i = 0; nome_completo[i] != '\0'; i++) {
        //verificar se o caractere é diferente de " " (32 na tabela ascii), se for, imprimir, se não, printar "\n".
        if(nome_completo[i] != 32){
            printf("%c", nome_completo[i]);
        } else {
            printf("\n");
        }
    }
    puts("\n");

    return 0;
}
