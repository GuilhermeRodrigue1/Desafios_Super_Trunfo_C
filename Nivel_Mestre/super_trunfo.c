#include <stdio.h>

int main() {
    char Estado1, Estado2;
    char NomeCidade1[20], NomeCidade2[20], CodigoCarta1[3], CodigoCarta2[3];
    int PopulacaoEstado1, PopulacaoEstado2, PontosTuristicosCidade1, PontosTuristicosCidade2;
    float AreaCidade1, AreaCidade2, PIBCidade1, PIBCidade2;

    // Input de dados do digito do estado
    printf("Digite uma letra que representa o digito do seu primeiro estado:\n");
    scanf("%c", &Estado1);

    // Input de dados do digito do estado
    printf("Digite uma letra que representa o digito do seu segundo estado:\n");
    scanf(" %c", &Estado2);

    // Input de dados do codigo da carta
    printf("Digite numero que representa o codigo de sua primeira carta de em ate 2 digitos:\n");
    scanf("%s", CodigoCarta1);

    // Input de dados do codigo da carta
    printf("Digite numero que representa o codigo de sua primeira carta de em ate 2 digitos:\n");
    scanf("%s", CodigoCarta2);

    // Input de dados do nome da cidade
    printf("Digite o nome da primeira cidade:\n");
    scanf("%s", NomeCidade1);

    // Input de dados do nome da cidade
    printf("Digite o nome da segunda cidade:\n");
    scanf("%s", NomeCidade2);

    // Input de dados do populacao da carta
    printf("Digite a quantidade da populacao do primeiro estado:\n");
    scanf("%i", &PopulacaoEstado1);

    // Input de dados do populacao da carta
    printf("Digite a quantidade da populacao do segundo estado:\n");
    scanf("%i", &PopulacaoEstado2);

    // Input de dados da area da cidade
    printf("Digite a area em 'Km quadrado' da sua primeira cidade:\n");
    scanf("%f", &AreaCidade1);

    // Input de dados da area da cidade
    printf("Digite a area em 'Km quadrado' da sua segunda cidade:\n");
    scanf("%f", &AreaCidade2);

    // Input de dados do pib da cidade
    printf("Digite o 'PIB' de sua primeira cidade considerando a partir de bilhoes de reais:\n");
    printf("Exemplo: (1 = 1 bilhao...)\n");
    scanf("%f", &PIBCidade1);

    // Input de dados do pib da cidade
    printf("Digite o 'PIB' de sua segunda cidade considerando a partir de bilhoes de reais:\n");
    printf("Exemplo: (1 = 1 bilhao...)\n");
    scanf("%f", &PIBCidade2);

    // Input de dados da quantidade de pontos turisticos da cidade
    printf("Digite o numeros de pontos turisticos da primeira cidade:\n");
    scanf("%i", &PontosTuristicosCidade1);

    // Input de dados da quantidade de pontos turisticos da cidade
    printf("Digite o numeros de pontos turisticos da segunda cidade:\n");
    scanf("%i", &PontosTuristicosCidade2);

    // Declarando e calculando variaveis da Densidade Populacional
    double DensidadePopulacao1 = (double)PopulacaoEstado1 / (double)AreaCidade1;
    double DensidadePopulacao2 = (double)PopulacaoEstado2 / (double)AreaCidade2;

    // Declarando e calculculando variaives de PIB per Capita
    double PIBperCapita1 = ((double)PIBCidade1 * 1000000000.0) / (double)PopulacaoEstado1;
    double PIBperCapita2 = ((double)PIBCidade2 * 1000000000.0) / (double)PopulacaoEstado2;

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %c%s\n", Estado1, CodigoCarta1);
    printf("Nome da cidade: %s\n", NomeCidade1);
    printf("Populacao: %i\n", PopulacaoEstado1);
    printf("Area: %.2f Km\n", AreaCidade1);
    printf("PIB: %.2f Bilhoes de reais\n", PIBCidade1);
    printf("Numeros de ponto turisticos: %i\n", PontosTuristicosCidade1);
    printf("Densidade Populacional: %.2lf hab/km\n", DensidadePopulacao1);
    printf("PIB per Capita: %.2lf Reais\n\n", PIBperCapita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %c%s\n", Estado2, CodigoCarta2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("Populacao: %i\n", PopulacaoEstado2);
    printf("Area: %.2f Km\n", AreaCidade2);
    printf("PIB: %.2f Bilhoes de reais\n", PIBCidade2);
    printf("Numeros de ponto turisticos: %i\n", PontosTuristicosCidade2);
    printf("Densidade Populacional: %.2lf hab/km\n", DensidadePopulacao2);
    printf("PIB per Capita: %.2lf Reais\n\n", PIBperCapita2);

    // Declarando e calculando Variavel de Super Poder
    float superPoder1 = PopulacaoEstado1 + AreaCidade1 + (PIBCidade1 * 1000000000.0) + PontosTuristicosCidade1 + PIBperCapita1 + (1.0 / DensidadePopulacao1);
    float superPoder2 = PopulacaoEstado2 + AreaCidade2 + (PIBCidade2 * 1000000000.0) + PontosTuristicosCidade2 + PIBperCapita2 + (1.0 / DensidadePopulacao2);

    // Resultado de comparações dos operadores relacionais
    short int resultadoPopulacao = PopulacaoEstado1 > PopulacaoEstado2;
    short int resultadoArea = AreaCidade1 > AreaCidade2;
    short int resultadoPIB = PIBCidade1 > PIBCidade2;
    short int resultadoPontosTuristicos = PontosTuristicosCidade1 > PontosTuristicosCidade2;
    short int resultadoPIBperCapita = PIBperCapita1 > PIBperCapita2;
    short int resultadoDensidade = DensidadePopulacao1 > DensidadePopulacao2;
    short int resultadoSuperPoder = superPoder1 > superPoder2;

    // Exibição de resultado das comparações de cartas
    printf("Comparacao de cartas:\n");
    printf("Populacao cidade 1 maior que a 2? (%d)\n", resultadoPopulacao);  // 1 ou 0
    printf("Area cidade 1 maior que a 2? (%d)\n", resultadoArea);  // 1 ou 0
    printf("PIB cidade 1 maior que a 2? (%d)\n", resultadoPIB);  // 1 ou 0
    printf("Pontos turisticos cidade 1 maior que a 2? (%d)\n", resultadoPontosTuristicos);  // 1 ou 0
    printf("Densidade populacional cidade 1 maior que a 2? (%d)\n", resultadoDensidade);  // 1 ou 0
    printf("PIB per capita cidade 1 maior que a 2? (%d)\n", resultadoPIBperCapita);  // 1 ou 0
    printf("Super Poder cidade 1 maior que a 2? (%d)\n", resultadoSuperPoder); // 1 ou 0

    return 0;
}