//Ler duas notas e exibir a média aritmética.

#include <stdio.h>

int main() {

    float n1, n2, media;

    //solicitar duas notas ao usuario e ler notas
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    //fazer calculo da media
    media = (n1 + n2) / 2;

    //exibir media
    printf("A media eh: %.2f", media);

    return 0;
}
