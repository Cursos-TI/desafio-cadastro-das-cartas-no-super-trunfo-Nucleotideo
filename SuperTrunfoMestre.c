#include <stdio.h>

int main()
{
    char estado_1[15], cidade_1[30], codigo_carta_1[10], estado_2[15], cidade_2[30], codigo_carta_2[10]; //VARIAVEIS DAS CARTAS 1 E 2
    int pontos_turisticos_1, pontos_turisticos_2;
    float area_1, PIB_1,densi_populacional1, PIB_percapita1, area_2, PIB_2, densi_populacional2,PIB_percapita2;
    unsigned long int populacao_1, populacao_2; // Usando unsigned long int para evitar problemas com grandes populações
    float super_poder1, super_poder2; // Variáveis para armazenar o super poder de cada carta
    float inverso_densi1, inverso_densi2; // Variáveis para armazenar o inverso da densidade populacional
    int resultado_area, resultado_populacao, resultado_PIB, resultado_pontosTuristicos, 
        resultado_densiPopulacional, resultado_PIB_percapita, resultado_superPoder;  // Variáveis para armazenar os resultados das comparações



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
    scanf(" %li", &populacao_1);

    printf("Digite o tamanho da area: ");
    scanf(" %f", &area_1);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB_1);

    printf("Digite o numero de pontos turisticos: ");
    scanf (" %d", &pontos_turisticos_1);

    densi_populacional1 = populacao_1 / area_1; // CALCULA A DENSIDADE POPULACIONAL DA CARTA 1
    PIB_percapita1 = PIB_1 / populacao_1; // CALCULA O PIB PER CAPTA DA CARTA 1

    printf("\n");
    printf("\n======== Cartas Super Trunfo: =========\n"); //IMPRIME NA TELA OS DADOS DA CARTA 1 CADASTRADA
    printf("********** Carta 1: ********** \n");
    printf("Estado: %.1s \n", estado_1);
    printf("Codigo da carta: %s \n", codigo_carta_1);
    printf("Nome da cidade: %s \n", cidade_1);
    printf("Populacao: %ld habitantes \n",populacao_1);
    printf("Area: %.2f Km2 \n", area_1);
    printf("PIB: %.2f bilhoes de reais \n", PIB_1);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km2 \n", densi_populacional1);
    printf("PIB Per Capta: %.2f reais \n", PIB_percapita1);
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
    scanf("%ld", &populacao_2);

    printf("Digite o tamanho da area: ");
    scanf("%f", &area_2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB_2);

    printf("Digite o numero de pontos turisticos:");
    scanf ("%d", &pontos_turisticos_2);

    densi_populacional2 = populacao_2 / area_2; // CALCULA A DENSIDADE POPULACIONAL DA CARTA 2
    PIB_percapita2 = PIB_2 / populacao_2; // CALCULA O PIB PER CAPTA DA CARTA 2

    printf("\n======== Cartas Super Trunfo: =========\n"); //IMPRIME NA TELA OS DADOS DA CARTA 2 CADASTRADA
    printf("********** Carta 2: ********** \n");
    printf("Estado: %.1s \n", estado_2);
    printf("Codigo da carta: %s \n", codigo_carta_2);
    printf("Nome da cidade: %s \n", cidade_2);
    printf("Populacao: %ld habitantes \n",populacao_2);
    printf("Area: %.2f Km2 \n", area_2);
    printf("PIB: %.2f bilhoes de reais \n", PIB_2);
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km2 \n", densi_populacional2);
    printf("PIB Per Capta: %.2f reais\n", PIB_percapita2);
    printf("****************************** \n");



    inverso_densi1 = 1 / densi_populacional1; // CALCULA O INVERSO DA DENSIDADE POPULACIONAL DA CARTA 1
    inverso_densi2 = 1 / densi_populacional2; // CALCULA O INVERSO DA DENSIDADE POPULACIONAL DA CARTA 2

    super_poder1 = populacao_1 + area_1 + PIB_1 + pontos_turisticos_1 + inverso_densi1 + PIB_percapita1; // CALCULA O SUPER PODER DA CARTA 1
    super_poder2 = populacao_2 + area_2 + PIB_2 + pontos_turisticos_2 + inverso_densi2+ PIB_percapita2; // CALCULA O SUPER PODER DA CARTA 2


    // ARMAZENA O RESULTADO DAS COMPARACOES ENTRE AS CARTAS
    resultado_area = area_1 > area_2; // COMPARA A AREA DAS CARTAS
    resultado_populacao = populacao_1 > populacao_2; // COMPARA A POPULACAO DAS CARTAS
    resultado_PIB = PIB_1 > PIB_2; // COMPARA O PIB DAS CARTAS
    resultado_pontosTuristicos = pontos_turisticos_1 > pontos_turisticos_2; // COMPARA OS PONTOS TURISTICOS DAS CARTAS
    resultado_densiPopulacional = densi_populacional1 < densi_populacional2; // COMPARA A DENSIDADE POPULACIONAL DAS CARTAS
    resultado_PIB_percapita = PIB_percapita1 > PIB_percapita2; // COMPARA O PIB PER CAPITA DAS CARTAS
    resultado_superPoder = super_poder1 > super_poder2; // COMPARA O SUPER PODER DAS CARTAS

    

    //printf("O Super poder da carta da carta 1 é: %f", super_poder1); // IMPRIME O SUPER PODER DA CARTA 1
    //printf("O Super poder da carta da carta 2 é: %f", super_poder2); // IMPRIME O SUPER PODER DA CARTA 1

    printf("Comparacao de Cartas: \n");
    printf("Populacao: Carta 1 venceu              [%d] \n", resultado_populacao); 
    printf("Area: Carta 1 venceu                   [%d] \n", resultado_area); 
    printf("PIB: Carta 1 venceu                    [%d] \n", resultado_PIB); 
    printf("Pontos Turisticos: Carta 1 venceu      [%d] \n", resultado_pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu [%d] \n", resultado_densiPopulacional);
    printf("PIB per Capita: Carta 1 venceu         [%d] \n", resultado_PIB_percapita); 
    printf("Super Poder: Carta 1 venceu            [%d] \n", resultado_superPoder); 


    return 0;
}