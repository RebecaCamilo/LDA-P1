/*
A professora mandou que jo�ozinho escrevesse 500 vezes no quadro a frase: �Eu n�o vou mais jogar avi�ezinhos de papel na sala de aula�.
a) Fa�a o que a professora pediu utilizando a estrutura for.
b) Fa�a o que a professora pediu utilizando a e strutura while.
*/

#include <stdio.h>

int main() {

    unsigned int i = 1;
//SOLU��O USANDO FOR
/*
    for(; i <= 500; i++) {
        printf("%3u. Eu nao vou mais jogar avioezinhos de papel na sala de aula\n", i);
    }
*/

//SOLU��O USANDO WHILE
    while(i <= 500) {
        printf("%3u. Eu nao vou mais jogar avioezinhos de papel na sala de aula\n", i);
        i++;
    }

    puts("\n");

    return 0;
}

