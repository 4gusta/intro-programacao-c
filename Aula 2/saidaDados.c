#include <stdio.h>
#include <stdlib.h>

int main(){
system("chcp 65001");
    int idade = 25;
    float altura = 1.75;
    char opcao;
    char nome[20]; 

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("A idade é: %d anos\n", idade);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("A altura é: %.2f metros\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("O nome é: %s\n", nome);

    printf("Escolha uma opção: ");
    scanf(" %c", &opcao);

    printf("A opção é:%c\n", opcao);
    
    getchar();
    getchar();

    return 0;

}
