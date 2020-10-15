/*
A professora mandou que joãozinho escrevesse 500 vezes no quadro a frase: “Eu não vou mais jogar aviõezinhos de papel na sala de aula”.
a) Faça o que a professora pediu utilizando a estrutura for.
b) Faça o que a professora pediu utilizando a e strutura while.
*/

#include <stdio.h>

int main() {

    unsigned int i = 1;
//SOLUÇÃO USANDO FOR
/*
    for(; i <= 500; i++) {
        printf("%3u. Eu nao vou mais jogar avioezinhos de papel na sala de aula\n", i);
    }
*/

//SOLUÇÃO USANDO WHILE
    while(i <= 500) {
        printf("%3u. Eu nao vou mais jogar avioezinhos de papel na sala de aula\n", i);
        i++;
    }

    puts("\n");

    return 0;
}

