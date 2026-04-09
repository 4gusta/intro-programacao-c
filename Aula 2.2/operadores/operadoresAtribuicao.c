#include <stdio.h>
#include <stdlib.h>

int main(){
system("chcp 65001");
system("cls");

    // Atribuição simples (=)
    // Atribuição com soma (+=)
    // Atribuição com subtração(-=)
    // Atribuição com multiplicação(*=)
    // Atribuição com divisão(/=)

    int num1, num2, resultado;

    printf("Digite o número 1: ");
    scanf("%d", &num1);
    printf("O número 1 é: %d\n", num1);

    printf("Digite o número 2: ");
    scanf("%d", &num2);
    printf("O número 2 é: %d\n", num2);

    resultado = num1 + num2;

    printf("Resultado %d\n", resultado);

    resultado += 20;
    printf("Resultado %d\n", resultado);

    resultado -= num1;
    printf("Resultado %d\n", resultado);

    resultado *= 5;
    printf("Resultado %d\n", resultado);

    resultado /= 10;
    printf("Resultado %d\n", resultado);


    getchar();
    getchar();
}