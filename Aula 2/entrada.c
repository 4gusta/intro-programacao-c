#include <stdio.h>

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[20];

    // sintaxe scanf
    // scanf("formato1" "formato2, &variavel1, variavel2 ...");
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade é:  %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f metros\n", altura);

    printf("Olá %s, sua idade e altura são respectivamente %d anos e %.2f metros", nome, idade, altura);

    return 0;

}