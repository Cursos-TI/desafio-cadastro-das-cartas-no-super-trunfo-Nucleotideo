#include <stdio.h>

int main()
{
    char estado_1[15], cidade_1[30], codigo_carta_1[10], estado_2[15], cidade_2[30], codigo_carta_2[10]; //VARIAVEIS DAS CARTAS 1 E 2
    int pontos_turisticos_1, populacao_1, pontos_turisticos_2, populacao_2;
    float area_1, PIB_1,densi_populacional1, PIB_percapta1, area_2, PIB_2, densi_populacional2,PIB_percapta2;

    printf("############################################################################## \n");
    printf("#                                                                            #\n");
    printf("#  Para comecar a jogar o Super Trunfo, cadastre a seguir a primeira carta:  #\n");
    printf("#                                                                            #\n");
    printf("############################################################################## \n");


    printf("Carta 1: \n");

    printf ("Digite o nome do estado: ");
    scanf("%s", estado_1); //RECEBE OS DADOS DE USUARIO E ARMAZENA NA VARIAVEL

    printf("Digite o nome da cidade: "); // SOMENTE ARMAZENA CIDADES COM NOME UNICO, SE COLOCA COMPOSTO, DA ERRO KKKKKK
    scanf(" %s", cidade_1);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo_carta_1);

    printf("Digite o numero da populacao: ");
    scanf(" %i", &populacao_1);

    printf("Digite o tamanho da area: ");
    scanf(" %f", &area_1);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB_1);

    printf("Digite o numero de pontos turisticos: ");
    scanf (" %d", &pontos_turisticos_1);

    densi_populacional1 = populacao_1 / area_1; // CALCULA A DENSIDADE POPULACIONAL DA CARTA 1
    PIB_percapta1 = PIB_1 / populacao_1; // CALCULA O PIB PER CAPTA DA CARTA 1

    printf("\n");
    printf("\n======== Cartas Super Trunfo: =========\n"); //IMPRIME NA TELA OS DADOS DA CARTA 1 CADASTRADA
    printf("********** Carta 1: ********** \n");
    printf("Estado: %.1s \n", estado_1);
    printf("Codigo da carta: %s \n", codigo_carta_1);
    printf("Nome da cidade: %s \n", cidade_1);
    printf("Populacao: %d habitantes \n",populacao_1);
    printf("Area: %.2f Km2 \n", area_1);
    printf("PIB: %.2f bilhoes de reais \n", PIB_1);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densi_populacional1);
    printf("PIB Per Capta: %.2f reais \n", PIB_percapta1);
    printf("****************************** \n");

    printf("\n");
    printf("Hora de cadastrar a segunda carta: \n"); // INICIA O CADASTRO DA SEGUNDA CARTA
    printf("\n");
    printf("Carta 2: \n");

    printf ("Digite o nome do estado: ");
    scanf(" %s", estado_2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade_2);

    printf("Digite o codigo da carta: ");
    scanf(" %s", codigo_carta_2);

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao_2);

    printf("Digite o tamanho da area: ");
    scanf("%f", &area_2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB_2);

    printf("Digite o numero de pontos turisticos:");
    scanf ("%d", &pontos_turisticos_2);

    densi_populacional2 = populacao_2 / area_2; // CALCULA A DENSIDADE POPULACIONAL DA CARTA 2
    PIB_percapta2 = PIB_2 / populacao_2; // CALCULA O PIB PER CAPTA DA CARTA 2

    printf("\n======== Cartas Super Trunfo: =========\n"); //IMPRIME NA TELA OS DADOS DA CARTA 2 CADASTRADA
    printf("********** Carta 2: ********** \n");
    printf("Estado: %.1s \n", estado_2);
    printf("Codigo da carta: %s \n", codigo_carta_2);
    printf("Nome da cidade: %s \n", cidade_2);
    printf("Populacao: %d habitantes \n",populacao_2);
    printf("Area: %.2f Km2 \n", area_2);
    printf("PIB: %.2f bilhoes de reais \n", PIB_2);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densi_populacional2);
    printf("PIB Per Capta: %.2f reais\n", PIB_percapta2);
    printf("****************************** \n");



    if (PIB_1 > PIB_2) {
        printf("######################################################### \n");
        printf("#                                                       # \n");
        printf("#    A carta vencedora com base no PIB e a Carta 1!!!   # \n");
        printf("#                                                       # \n");
        printf("######################################################### \n");
    }else{
        printf("######################################################### \n");
        printf("#                                                       # \n");
        printf("#    A carta vencedora com base no PIB e a Carta 2!!!   # \n");
        printf("#                                                       # \n");
        printf("######################################################### \n");
        }



    return 0;
}