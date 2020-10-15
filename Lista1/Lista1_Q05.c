//Ler a altura e a base de um triângulo e calcular sua área. A fórmula de área de um triângulo
//é A = (base*altura)/2.

#include <stdio.h>

int main() {

    float base, altura, area;

    //solicitar a base e altura do triangulo e ler os valores
    printf("Digite a medida da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a medida da altura do triangulo: ");
    scanf("%f", &altura);

    //fazer calculo da area do triangulo e guardar na variavel area
    area = (base * altura) / 2;

    //exibir a area do triangulo
    printf("A area do triangulo eh: %.2f", area);

    return 0;
}
