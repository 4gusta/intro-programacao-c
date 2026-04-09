#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertida implicitamente para float

    printf("Resultado: %.2f", resultado);

    return 0;
}