//Que peça ao usuário para digitar um caractere, e em seguida exiba esse caractere na tela.
//a) exiba como caractere (%c).
//b)exiba como inteiro (%d).
//c)exiba como hexadecimal (%x).


#include <stdio.h>

int main() {

    char caractere;

    //solicitar caractere ao usuario e ler caractere
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    //exibir caractere digitado em diferentes formatos
    printf("A exibicao do caractere digitado como caractere eh: %c\n", caractere);
    printf("A exibicao do caractere digitado como numero eh: %d\n", caractere);
    printf("A exibicao do caractere digitado como hexadecimal eh: %x", caractere);

    return 0;
}
