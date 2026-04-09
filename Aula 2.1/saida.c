#include <stdio.h>

int main(){

// Sintaxe padrÃ£o do printf
    printf("OlÃ¡ Mundo!");

//printf("texto com formataÃ§Ã£o, variÃ¡vel1, variÃ¡vel2 ...")
//printf("OlÃ¡ Mundo!\n")
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Gustavo";

// %d: Imprimi um inteiro no formato decimal.
    printf("A idade do %s Ã©: %d\n", nome, idade); // o \n serve para pular a linha (Quebrar a linha), serve como um <br> do html.
    printf("A altura Ã©: %.2f\n", altura);
    printf("A opÃ§Ã£o Ã©: %c\n", opcao);

//printf("%formato1 %formato2 %formato3", variÃ¡vel1, variÃ¡vel2, variÃ¡vel3)

// %d: Imprime um inteiro no formato decimal.
// %i: Equivalente a %d.
// %f: Imprime um nÃºmero de ponto flutuante no formato padrÃ£o.
// %e: Imprime um nÃºmero de ponto flutuante na notaÃ§Ã£o cientÃ­fica.
// %c: Imprime um Ãºnico caractere.
// %s: Imprime uma cadeia (String) de caracteres.

    return 0;
}