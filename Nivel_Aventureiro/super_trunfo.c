//
// Created by Guilherme on 01/07/2025.
//

#include <stdio.h>

int main(){

    char Estado1 , Estado2;
    char NomeCidade1[20] , NomeCidade2[20], CodigoCarta1[3] , CodigoCarta2[3];
    int PopulacaoEstado1 , PopulacaoEstado2 , PontosTuristicosCidade1 , PontosTuristicosCidade2;
    float AreaCidade1 , AreaCidade2 , PIBCidade1 , PIBCidade2;
    double PIBperCapita1 , PIBperCapita2, DensidadePopulacao1, DensidadePopulacao2;
    /*
     *  Declarações de variaveis que vão ser utilizadas no algoritimo.
     */

    printf("Digite uma letra que representa o digito seu primeiro estado:\n");
    scanf("%c", &Estado1); // Entrada de dados para "Cidade1"

    printf("Digite uma letra que representa o digito do seu segundo estado:\n");
    scanf(" %c", &Estado2); // Entrada de dados para "Cidade2"

    printf("Digite numero que representa o codigo de seu primeiro estado de em ate 2 digitos:\n");
    scanf("%s", CodigoCarta1); // Entrada de dados para "CodigoCarta1"

    printf("Digite numero que representa o codigo de seu segundo estado de em ate 2 digitos:\n");
    scanf("%s", CodigoCarta2); // Entrada de dados para "CodigoCarta2"

    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", NomeCidade1); // Entrada de dados para "NomeCidade1"

    printf("Digite o nome da segunda cidade:\n");
    scanf("%s", NomeCidade2); // Entrada de dados para "NomeCidade2"

    printf("Digite a quantidade da populacao do primeiro estado:\n");
    scanf("%i", &PopulacaoEstado1); // Entrada de dados para "PopulaçãoEstado1"

    printf("Digite a quantidade da populacao do segundo estado:\n");
    scanf("%i", &PopulacaoEstado2); // Entrada de dados para "PopulaçãoEstado2"

    printf("Digite a area em 'Km quadrado' da sua primeira cidade:\n");
    scanf("%f", &AreaCidade1); // Entrada de dados para "AreaCidade1"

    printf("Digite a area em 'Km quadrado' da sua segunda cidade:\n");
    scanf("%f", &AreaCidade2); // Entrada de dados para "AreaCidade2"

    printf("Digite o 'PIB' de sua primeira cidade considerando a partir de bilhoes de reais:\n");
    printf("Exemplo: (1 = 1 bilhao...)\n");
    scanf("%f", &PIBCidade1); // Entrada de dados para "PIBCidade1"

    printf("Digite o 'PIB' de sua segunda cidade considerando a partir de bilhoes de reais:\n");
    printf("Exemplo: (1 = 1 bilhao...)\n");
    scanf("%f", &PIBCidade2); // Entrada de dados para "PIBCidade1"

    printf("Digite o numeros de pontos turisticos da primeira cidade:\n");
    scanf("%i", &PontosTuristicosCidade1); // Entrada de dados para "PontosTuristicosCidade1"

    printf("Digite o numeros de pontos turisticos da segunda cidade:\n");
    scanf("%i", &PontosTuristicosCidade2); // Entrada de dados para "PontosTuristicosCidade2"

    DensidadePopulacao1 = (double) PopulacaoEstado1 / (double) AreaCidade1;
    DensidadePopulacao2 = (double) PopulacaoEstado2 / (double) AreaCidade2;

    PIBperCapita1 = ( (double) PIBCidade1 * 1000000000.0 ) / (double) PopulacaoEstado1;
    PIBperCapita2 = ( (double) PIBCidade2 * 1000000000.0 ) / (double) PopulacaoEstado2;

    printf("\nCarta 1:\nEstado: %c\nCodigo: %c%s\nNome da cidade: %s\nPopulacao: %i\nArea: %.2f Km\nPIB: %3.2f Bilhoes de reais\nNumeros de ponto turisticos: %i\nDensidade Populacional: %.2lf hab/km\nPIB per Capita: %.2lf Reais\n\n", Estado1, Estado1, CodigoCarta1, NomeCidade1, PopulacaoEstado1, AreaCidade1, PIBCidade1, PontosTuristicosCidade1, DensidadePopulacao1, PIBperCapita1);
    printf("Carta 2:\nEstado: %c\nCodigo: %c%s\nNome da cidade: %s\nPopulacao: %i\nArea: %.2f Km\nPIB: %.2f Bilhoes de reais\nNumeros de ponto turisticos: %i\nDensidade Populacional: %.2lf hab/km\nPIB per Capita: %.2lf Reais", Estado2, Estado2, CodigoCarta2, NomeCidade2, PopulacaoEstado2, AreaCidade2, PIBCidade2, PontosTuristicosCidade2, DensidadePopulacao2, PIBperCapita2);

    /*
     * Exibindo no teerminal as informações coletadas atraves do "scanf()"
     */

    return 0;

};