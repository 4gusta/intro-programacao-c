#include <stdio.h>
#include <stdlib.h>

int main(){
    // \033[2J → limpa a tela \033[H → move o cursor pro topo (posição 0,0) Ou seja: simula o cls, mas sem depender do sistema.
    printf("\033[2J\033[H");

    int a, b;
    int soma, diferenca, produto;
    int quociente; // Divisão de inteiros resulta em números inteiros

    printf("Digite o número A: ");
    scanf("%d", &a);

    printf("Digite o número B: ");
    scanf("%d", &b);

    printf("Os números são\n A = %d e B = %d\n", a, b);

    soma = a + b;
    diferenca = a - b;
    produto = a * b;
    quociente = a / b;


    printf("Aperte ENTER para prosseguir");
    getchar();
    getchar();
    printf("\033[2J\033[H");

    printf("A soma destes números são: %d\n", soma);
    printf("A diferença destes números é: %d\n", diferenca);
    printf("O produto destes números é: %d\n", produto);
    printf("O quociente destes números é: %d\n", quociente);

    return 0;

}