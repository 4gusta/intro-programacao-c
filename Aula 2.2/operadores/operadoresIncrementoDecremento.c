#include <stdio.h>
#include <stdlib.h>

int main(){
    system("chcp 65001");
    system("cls");
    
    // Incremento(++)
    // Pré-Incremento ++a
    // Pós-Incremento a++
    // Decremento(--)
    // Pré-Decremento --a
    // Pós-Decremento a--
    
    int num, resultado;

    printf("Digite o número: ");
    scanf("%d", &num);
    printf("O número é: %d\n", num);

    printf("Antes incremento: %d\n", num);
    
    // num++;
    // Ou num +=1;
    // printf("Após incremento: %d\n", num);

    // Pós incremento:
    // resultado = num;
    // num++;

    resultado = num++;
    // Resultado aparece como o num, e Número aparece com num+1, pois eu declarei
    // Que resultado é igual a num++, esse ++ quer dizer que somente o num vai receber + 1
    // E resultado permanecerá o valor de num declarado. 

    // Aqui eu apenas Incremento.
    printf("Após Pós-incremento: - Número: %d - Resultado: %d\n", num, resultado);

    resultado = ++num;
    // Aqui eu atribuo e Incremento.
    printf("Após Pré-incremento: - Número: %d - Resultado: %d\n", num, resultado);


    // num--;
    // Ou num -=1;
    // printf("Após decremento: %d\n", num);

    resultado = num--;
    // Aqui eu apenas Decremento.
    printf("Após Pós-Decremento: - Número: %d - Resultado: %d\n", num, resultado);

    resultado = --num;
    // Aqui eu atribuo e Decremento
    printf("Após Pré-Decremento: - Número: %d - Resultado: %d\n", num, resultado);


    // Resumo da Ópera:
    // resultado = num++; --> Usa o valor atual, depois soma

    // resultado = ++num --> Soma o +1 primeiro, depois usa o valor

    getchar();
    getchar();

}