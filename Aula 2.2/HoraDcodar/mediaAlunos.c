#include <stdio.h>

int main(){

    printf("\033[2J\033[H");

    float nota1, nota2, nota3, nota4;

    printf("ATENÇÃO, notas quebradas como 7,2 digite como 7.2 ponha '.' ao invés de ','.\n");

    printf("Digite a sua nota do 1° Bimestre: ");
    scanf("%f", &nota1);
    
    printf("Digite a sua nota do 2° Bimestre: ");
    scanf("%f", &nota2);

    printf("Digite a sua nota do 3° Bimestre: ");
    scanf("%f", &nota3);

    printf("Digite a sua nota do 4° Bimestre: ");
    scanf("%f", &nota4);

    printf("Suas notas são\n 1° Bimestre - %.2f\n 2° Bimestre - %.2f\n 3° Bimestre - %.2f\n 4° Bimestre - %.2f\n", nota1, nota2, nota3, nota4);

    float media;
    media = (nota1 + nota2 + nota3 + nota4);
    media = media / 4;

    printf("aperte ENTER para ver a média de suas notas");
    getchar();
    getchar();

    printf("A média das suas notas são: %.2f\n", media);
    if (media >= 7 && media < 10){
        printf("Parabéns você está na média");
    } else if (media < 7){
        printf("Que pena! Você está abaixo da média");
    } else if (media >= 10){
        printf("Parabéns você possui uma média 10!");
    };


    return 0;
}