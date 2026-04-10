#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    short int numeroPequeno = 32767; // Valor máximo de short int
    printf("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno ++;
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);
    // Ele fica negativo por conta do overflow

    printf("\n***- Tamanho das variáveis ***\n");
    printf("Short int: %lu Bytes - int %lu Bytes - long long int: %lu Bytes\n", sizeof(short int), sizeof(int), sizeof(long long int));
    printf("Float: %lu Bytes - Double: %lu Bytes- long double: %lu Bytes\n", sizeof(float), sizeof(double), sizeof(long double));

    return 0;

}