/*
Exiba todos os números entre 32 e 126. Exiba um número por linha, mas em cada linha
mostre o número em três formatos: inteiro (%d), hexadecimal (%x), e caractere (%c).
Utilize a estrutura de repetição for na resolução do problema. Compare o resultado com a
tabela ascii abaixo.
*/

#include <stdio.h>

int main() {

    int i;

    //Entre 32 e 126 é a partir de 33 ate < 126
    for(i = 33; i < 126; i++) {
        printf("Formato inteiro: %d \t  Formato hexadecimal: %x \tFormato caractere: %c\n", i, i, i);
    }

    puts("\n");

    return 0;
}

