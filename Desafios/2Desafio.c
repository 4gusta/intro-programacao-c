// #include serve para importar "bibliotecas" do C
// Aqui importo a biblioteca padrão stdio.h que permite funções como printf e scanf
// E importo stdlib.h para que eu possa usar comandos de terminal

#include <stdio.h>
// #include <stdlib.h>

// Todo arquivo C começa com o int main
int main(){

// Uso o system() pois ele importa funções do terminal do meu S.O (Windows 11),
// Aqui importo o chcp 65001 para o terminal aceitar acentuações e ç, como o Encoding UTF-8

// system("chcp 65001");
    printf("\033[2J\033[H");


    char  estado[5], cidade[50], 
          estado2[5], cidade2[50];

    int   codigo, pontosTuristicos, 
          codigo2, pontosTuristicos2;

    float populacao, area, pib, pibcapta, densidade,
          populacao2, area2, pib2, pibcapta2, densidade2;

    // Com o PRIMEIRO printf(), informo ao usuário o número da carta que ele está cadastrando
    // Com o SEGUNDO printf(), mostro uma mensagem para que o usuário escreva a informação que está sendo pedida
    // Com o scanf(), é a variável aonde guardo a informação na qual o usuário escreveu
    // Com o TERCEIRO printf(), mostro uma confirmação visual da informação que usuário escreveu no item anterior

    printf("CADASTRO DA CARTA 1\n");

        printf("Informe a SIGLA da UF: ");
        scanf("%s", estado);
        printf("A SIGLA da UF é: %s\n", estado);

        printf("Informe o CÓDIGO da UF: ");
        scanf("%d", &codigo);
        printf("o CÓDIGO da UF é: %d\n", codigo);

        printf("Informe o nome da CIDADE do UF - %s: ", estado);
        scanf("%s", cidade);
        printf("O nome da CIDADE é: %s - %s\n", cidade, estado);

        printf("Informe a população de %s - %s: ", cidade, estado);
        scanf("%f", &populacao);
        printf("A população da CIDADE é: %.2f\n", populacao);

        printf("Informe a ÁREA(Km) de %s: ", cidade);
        scanf("%f", &area);
        printf("A ÁREA de %s é: %f\n", cidade, area);

        printf("Informe o PIB de %s - %s: ", cidade, estado);
        scanf("%f", &pib);
        printf("O PIB de %s - %s é: %f\n", cidade, estado, pib);

        printf("Informe a quantidade de PONTOS TURÍSTICOS de %s - %s: ", cidade, estado);
        scanf("%d", &pontosTuristicos);
        printf("A quantidade de PONTOS TURÍSTICOS de %s - %s é %d:\n", cidade, estado, pontosTuristicos);

        // Densidade é o número de habitantes por km² POPULACAO / AREA
        densidade = (populacao / area);

        // Pib per Capta é o valor da riqueza média por pessoa da cidade PIB / POPULACAO
        pibcapta = (pib / populacao);

        printf("A Carta 1 é:\n UF - %s\n Código - %d\n Cidade - %s\n População - %f\n ÁREA - %f\n DENSIDADE POPULACIONAL - %f POR KM²\n PIB - %f\n PIB PER CAPTA - %f\n Pontos Turísticos - %d\n", estado, codigo, cidade, populacao, area, densidade, pib, pibcapta, pontosTuristicos);

        printf("Aperte ENTER para prosseguir");
        getchar();
        getchar();
        printf("\033[2J\033[H");


    printf("CADASTRO DA CARTA 2\n");
    
        printf("Informe as SIGLA da UF: ");
        scanf("%s", estado2);
        printf("A SIGLA da UF é: %s\n", estado2);

        printf("Informe o CÓDIGO da UF: ");
        scanf("%d", &codigo2);
        printf("o CÓDIGO da UF é: %d\n", codigo2);

        printf("Informe o nome da CIDADE do UF - %s: ", estado2);
        scanf("%s", cidade2);
        printf("O nome da CIDADE é: %s - %s\n", cidade2, estado2);

        printf("Informe a população de %s - %s: ", cidade2, estado2);
        scanf("%f", &populacao2);
        printf("A população da CIDADE é: %.2f\n", populacao2);

        printf("Informe a ÁREA de %s: ", cidade2);
        scanf("%f", &area2);
        printf("A ÁREA de %s é: %f\n", cidade2, area2);

        printf("Informe o PIB de %s - %s: ", cidade2, estado2);
        scanf("%f", &pib2);
        printf("O PIB de %s - %s é: %f\n", cidade2, estado2, pib2);

        printf("Informe a quantidade de PONTOS TURÍSTICOS de %s - %s: ", cidade2, estado2);
        scanf("%d", &pontosTuristicos2);
        printf("A quantidade de PONTOS TURÍSTICOS de %s - %s é %d:\n", cidade2, estado2, pontosTuristicos2);

        // Densidade é a populacao dividido sobre a área que o usuário informou;
        densidade2 = (populacao2 / area2);

        // Pib per Capta é o valor da riqueza média por pessoa da cidade PIB / POPULACAO
        pibcapta2 = (pib2 / populacao2);



        printf("A Carta 2 é:\n UF - %s\n Código - %d\n Cidade - %s\n População - %f\n ÁREA - %f\n DENSIDADE POPULACIONAL - %f POR KM²\n PIB - %f\n Pontos Turísticos - %d\n", estado2, codigo2, cidade2, populacao2, area2, densidade2, pib2, pibcapta2, pontosTuristicos2);
        
        printf("Pressione ENTER para visualizar ambas as cartas\n");

    // Uso o getchar para identificar quando o usuário clica em alguma tecla enquanto roda o programa, por exemplo ENTER
    // Apenas após ele clicar em uma tecla 2 vezes que ele irá para o comando seguinte.
    getchar();
    getchar();

    printf("\033[2J\033[H");

    printf("AS INFORMAÇÕES DAS CARTAS FICARAM:\n");
        printf("A Carta 1 é:\n UF - %s\n Código - %d\n Cidade - %s\n População - %f\n ÁREA - %f\n DENSIDADE POPULACIONAL - %f POR KM²\n PIB - %f\n Pontos Turísticos - %d\n", estado, codigo, cidade, populacao, area, densidade, pib, pibcapta,  pontosTuristicos);
        printf("A Carta 2 é:\n UF - %s\n Código - %d\n Cidade - %s\n População - %f\n ÁREA - %f\n DENSIDADE POPULACIONAL - %f POR KM²\n PIB - %f\n Pontos Turísticos - %d\n", estado2, codigo2, cidade2, populacao2, area2, densidade2, pib2, pibcapta2, pontosTuristicos2);

// Aqui so fecha o terminal caso o usuário pressine a tecla 2 vezes.
getchar();
getchar();

// return 0 que dizer que o int main() está retornando 0, ou seja ume "exit;" Finalizando o programa
return 0;

}