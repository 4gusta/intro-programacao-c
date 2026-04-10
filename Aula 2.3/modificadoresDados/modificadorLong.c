#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int normal = 2147483647; // Tamanho máximo de int 2,147,483,648
    long int modificado = 2147483647;
    long long int modificado2 = 2147483647; 

    printf(" Tamanho do INT normal(int) = %d\n Tamanho do LONG INT(long int) = %ld\n", normal, modificado);

    // %d: Imprime um inteiro no formato decimal.
    // %ld: Imprimi um inteiro longo (long int) no formato decimal.

    modificado ++; // Ultrapassa valor máximo de long int
    printf(" Tamanho do LONG INT = %ld\n", modificado);

    modificado2 ++;
    printf(" Tamanho do LONG LONG INT = %lld\n", modificado2);

    return 0;
}