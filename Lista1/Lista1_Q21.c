/*
Converter um texto para mai�sculo, de depois para min�sculo. Utilize as fun��es toupper, e tolower.
*/

#include <stdio.h>
#include <ctype.h>

int main() {

    char texto[150], c;
    int i = 0;

    printf("Digite um texto:\n");
    scanf("%[ -~]", texto);
    printf("\n");

    while(texto[i]) {
    c = texto[i];
    putchar(toupper(c));
    i++;
    }
    printf("\n\n");

    i = 0;
    while(texto[i]) {
    c = texto[i];
    putchar(tolower(c));
    i++;
    }
    puts("\n");

    return 0;
}
