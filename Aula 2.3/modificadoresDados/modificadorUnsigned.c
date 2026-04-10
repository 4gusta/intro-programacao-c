#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    // int normal = 3000000000; //Esse valor excede o valor do int normal que é 2,147,483,648
    // unsigned int modificador = 3000000000; 

    char c_normal = 128;
    unsigned char c_modificador = 128; 

    // printf(" Número INT Normal(int) = %d\n Número INT Unsigned(unsigned int) = %u\n\n", normal, modificador);

    printf(" Número CHAR Normal(int) = %d\n Número CHAR Unsigned(unsigned int) = %u", c_normal, c_modificador);


    // %d: Imprime um inteiro no formato decimal.

    // %u: Imprimi um inteiro sem sinal (unsigned) no formato decimal.
    return 0;



}