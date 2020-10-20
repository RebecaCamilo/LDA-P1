/*
Fazer uma programa que codifica um string pelo m�todo ZENIT POLAR
Z E N I T
P O L A R
Ou seja, onde aparece um 'Z' no string de entrada, aparecer� um 'P' na sa�da; e,
semelhantemente, onde aparece um 'P' n o string de entrada, aparecer� um 'Z' na sa�da. Isto
deve ocorrer para todos os pares em ZENIT POLAR, mai�sculas e min�sculas. As outras
letras n�o s�o alteradas.
Por exemplo, o string "Parabens a voce" � codificado para "Zitibols i veco". Ao se
aplicar duas vezes a transforma��o, obt�m se o mesmo string, ou seja, a codifica��o de
"Zitibols i veco" � "Parabens a voce".
*/

#include <stdio.h>

int main() {

    char string[200];
    int i;

    //pedir ao usuario e ler a frase a ser codificada
    printf("Digite uma frase a ser codificada: ");
    scanf("%[ -~]", string);

    //Percorrer cada caractere da string
    for(i = 0; string[i] != '\0'; i++) {
        //Substituir o caractere que ocupa aquele espa�o na string pelo correspondente (seja maiusculo ou minusculo)
        if(string[i] == 'Z') {
            string[i] = 'P';
        } else if(string[i] == 'z') {
            string[i] = 'p';
        } else if(string[i] == 'P') {
            string[i] = 'Z';
        } else if(string[i] == 'p') {
            string[i] = 'z';
        } else if(string[i] == 'E') {
            string[i] = 'O';
        } else if(string[i] == 'e') {
            string[i] = 'o';
        } else if(string[i] == 'O') {
            string[i] = 'E';
        } else if(string[i] == 'o') {
            string[i] = 'e';
        } else if(string[i] == 'N') {
            string[i] = 'L';
        } else if(string[i] == 'n') {
            string[i] = 'l';
        } else if(string[i] == 'L') {
            string[i] = 'N';
        } else if(string[i] == 'l') {
            string[i] = 'n';
        } else if(string[i] == 'I') {
            string[i] = 'A';
        } else if(string[i] == 'i') {
            string[i] = 'a';
        } else if(string[i] == 'A') {
            string[i] = 'I';
        } else if(string[i] == 'a') {
            string[i] = 'i';
        } else if(string[i] == 'T') {
            string[i] = 'R';
        } else if(string[i] == 't') {
            string[i] = 'r';
        } else if(string[i] == 'R') {
            string[i] = 'T';
        } else if(string[i] == 'r') {
            string[i] = 't';
        }
    }
    puts(string);

    return 0;
}
