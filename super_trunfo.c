//
// Created by Guilherme on 01/07/2025.
//

#include <stdio.h>

int main(){

    char Estado1 , Estado2;
    char NomeCidade1[20] , NomeCidade2[20], CodigoCarta1[3] , CodigoCarta2[3];
    int PopulacaoEstado1 , PopulacaoEstado2 , PontosTuristicosCidade1 , PontosTuristicosCidade2;
    float AreaCidade1 , AreaCidade2 , PIBCidade1 , PIBCidade2;

    printf("Digite uma letra que representa o digito seu primeiro estado:\n");
    scanf("%c", &Estado1);
    printf("Digite uma letra que representa o digito do seu segundo estado:\n");
    scanf(" %c", &Estado2);

    printf("Digite numero que representa o codigo de seu primeiro estado de em ate 2 digitos:\n");
    scanf("%s", CodigoCarta1);
    printf("Digite numero que representa o codigo de seu segundo estado de em ate 2 digitos:\n");
    scanf("%s", CodigoCarta2);

    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", NomeCidade1);
    printf("Digite o nome da segunda cidade:\n");
    scanf("%s", NomeCidade2);

    printf("Digite a quantidade da populacao do primeiro estado:\n");
    scanf("%i", &PopulacaoEstado1);
    printf("Digite a quantidade da populacao do segundo estado:\n");
    scanf("%i", &PopulacaoEstado2);

    printf("Digite a area em 'Km quadrado' da sua primeira cidade:\n");
    scanf("%f", &AreaCidade1);
    printf("Digite a area em 'Km quadrado' da sua segunda cidade:\n");
    scanf("%f", &AreaCidade2);

    printf("Digite o 'PIB' de sua primeira cidade em bilhoes de reais:\n");
    scanf("%f", &PIBCidade1);
    printf("Digite o 'PIB' de sua segunda cidade em bilhoes de reais:\n");
    scanf("%f", &PIBCidade2);

    printf("Digite o numeros de pontos turisticos da primeira cidade:\n");
    scanf("%i", &PontosTuristicosCidade1);
    printf("Digite o numeros de pontos turisticos da segunda cidade âo:\n");
    scanf("%i", &PontosTuristicosCidade2);

    printf("\nCarta 1:\nEstado: %c\nCodigo: %c%s\nNome da cidade: %s\nPopulacao: %i\nArea: %.2f\nPIB: %.2f Bilhoes de reais\nNumeros de ponto turisticos: %i\n\n", Estado1, Estado1, CodigoCarta1, NomeCidade1, PopulacaoEstado1, AreaCidade1, PIBCidade1, PontosTuristicosCidade1);
    printf("Carta 2:\nEstado: %c\nCodigo: %c%s\nNome da cidade: %s\nPopulacao: %i\nArea: %.2f\nPIB: %.2f Bilhoes de reais\nNumeros de ponto turisticos: %i\n", Estado2, Estado2, CodigoCarta2, NomeCidade2, PopulacaoEstado2, AreaCidade2, PIBCidade2, PontosTuristicosCidade2);
    return 0;

};