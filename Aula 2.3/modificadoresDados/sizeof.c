#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    printf("MODIFICADORES UNSIGNED: \n");
    printf("O tamanho de bytes de INT é: %u bytes\n", sizeof(int));
    printf("O tamanho de bytes de UNSIGNED INT é: %u bytes\n", sizeof(unsigned int));
    printf("O tamanho de bytes de CHAR é %u bytes\n", sizeof(char));
    printf("O tamanho de bytes de UNSIGNED CHAR é %u bytes\n\n", sizeof(unsigned char));

    printf("MODIFICADORES LONG: \n");
    printf("O tamanho de bytes de INT é: %u bytes\n", sizeof(int));
    printf("O tamanho de bytes de LONG INT é: %u bytes\n", sizeof(long int));
    printf("O tamanho de bytes de LONG LONG INT é: %u bytes\n", sizeof(long long int));
    printf("O tamanho de bytes de DOUBLE é: %u bytes\n", sizeof(double));
    printf("O tamanho de bytes de LONG DOUBLE é: %u bytes\n", sizeof(long double));
    // printf("O tamanho de bytes de LONG LONG DOUBLE é: %u bytes\n", sizeof(long long double));


    return 0;

}