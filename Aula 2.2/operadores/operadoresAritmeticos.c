#include <stdio.h>

int main(){
printf("\033[2J\033[H");

    // Soma(+)
    // Subtração(-)
    // Multiplicação(*)
    // Divisão(/)

    int num1, num2;
    int soma, subtracao, multiplicacao;
    float divisao;


    printf("Digite o número 1: ");
    scanf("%d", &num1);
    printf("O número 1 é: %d\n", num1);

    printf("Digite o número 2: ");
    scanf("%d", &num2);
    printf("O número 2 é: %d\n", num2);

    printf("Aperte ENTER para ver as operações matemáticas desses números\n");

    getchar();
    getchar();
    printf("\033[2J\033[H");


    // operação soma
    soma = num1 + num2; 

    // operação subtração
    subtracao = num1 -  num2;

    // operação multiplicação
    multiplicacao = num1 * num2;

    // operação divisão
    divisao = num1 / num2;

    printf("AS OPERAÇÕES MATEMÁTICAS DESSES NÚMEROS SÃO:\n");
    printf("A Soma desses número é: %d\n", soma);
    printf("A Subtração desses número é: %d\n", subtracao);
    printf("A Multiplicação desses número é: %d\n", multiplicacao);
    printf("A Divisão desses número é: %.2f\n", divisao);

    getchar();
    getchar();

}