#include <stdio.h>
#include <stdlib.h>

int main(){
system("chcp 65001");

    int idade, matricula;
    float altura ;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    printf("Olá aluno %s, da referente matrícula: %d,\n Seus dados de idade e altura são respectivamente: %d anos e %.2f metros", nome, matricula, idade, altura);

getchar();
getchar();

return 0;
}