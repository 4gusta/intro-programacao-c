#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    int a = 10;
    float b = 3;
    float quociente = (float) a / b; // 'a' é convertida explicitamente para float

    printf("Resultado: %.2f", quociente);

    return 0;
}