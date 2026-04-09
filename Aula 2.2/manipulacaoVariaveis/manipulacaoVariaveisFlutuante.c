#include <stdio.h>

int main(){
    // \033[2J → limpa a tela \033[H → move o cursor pro topo (posição 0,0) Ou seja: simula o cls, mas sem depender do sistema.
    printf("\033[2J\033[H");

    float a, b;
    float soma, diferenca, produto;
    float quociente; // Divisão de flutuantes resulta em números flutuantes

    printf("Digite o número A: ");
    scanf("%f", &a);

    printf("Digite o número B: ");
    scanf("%f", &b);

    printf("Os números são\n A = %.2f e B = %.2f\n", a, b);

    soma = a + b;
    diferenca = a - b;
    produto = a * b;
    quociente = a / b;


    printf("Aperte ENTER para prosseguir");
    getchar();
    getchar();
    printf("\033[2J\033[H");

    printf("A soma destes números são: %.2f\n", soma);
    printf("A diferença destes números é: %.2f\n", diferenca);
    printf("O produto destes números é: %.2f\n", produto);
    printf("O quociente destes números é: %.2f\n", quociente);

    return 0;

}