#include <stdio.h>
int main () {

    char cidadeCarta1[50] = "Fortaleza";
    char estadoCarta1[10] = "A";
    char codigoCarta1[10] = "A01";
    unsigned long int populacaoCarta1 = 68953;
    int pontosCarta1 = 19;
    float areaCarta1 = 35.6;
    float pibCarta1 = 376.54;
    float densidadepopulacional1 = (float) populacaoCarta1 / areaCarta1;
    float pibpercapita1 = (float) populacaoCarta1/ pibCarta1;
    double inverso1 = 1.0 / densidadepopulacional1;
    float superpoder1 = populacaoCarta1 + areaCarta1 + pibCarta1 + pontosCarta1 + pibpercapita1 + inverso1;

    char cidadeCarta2[50] = "Florianopolis";
    char estadoCarta2[10] = "B";
    char codigoCarta2[10] = "B01";
    unsigned long int populacaoCarta2 = 59989;
    int pontosCarta2 = 13;
    float areaCarta2 = 15.7;
    float pibCarta2 = 570.456;
    float densidadepopulacional2 = (float) populacaoCarta2 / areaCarta2;
    float pibpercapita2 = (float) populacaoCarta2/ pibCarta2;
    double inverso2 = 1.0 / densidadepopulacional2;
    float superpoder2 = populacaoCarta2 + areaCarta2 + pibCarta2 + pontosCarta2 + pibpercapita2 + inverso2;

    printf("Informacoes para a carta 1: \n");
    printf("Estado: %s \n",estadoCarta1);
    printf("Cidade: %s \n", cidadeCarta1);
    printf("Codigo da carta: %s \n", codigoCarta1);
    printf("Populacao: %lld \n", populacaoCarta1);
    printf("Pontos Turisticos: %d \n", pontosCarta1);
    printf("Area: %.3f km²\n", areaCarta1);
    printf("PIB: %.3f bilhoes de reais\n", pibCarta1);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadepopulacional1);
    printf("Pib per capita: %.3f reais\n", pibpercapita1);
    printf("O inverso da densidade populacional é: %.10f\n", inverso1);
    printf("Super poder: %.2f\n\n", superpoder1);


   

    printf("Informacoes para a carta 2: \n");
    printf("Estado: %s \n", estadoCarta2);
    printf("Cidade: %s \n", cidadeCarta2);
    printf("Codigo da carta: %s \n", codigoCarta2);
    printf("Populacao: %lld \n", populacaoCarta2);
    printf("Pontos Turisticos: %d \n", pontosCarta2);
    printf("Area: %.3f km²\n", areaCarta2);
    printf("PIB: %.3f bilhoes de reais\n", pibCarta2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadepopulacional2);
    printf("Pib per capita: %.3f reais\n", pibpercapita2);
    printf("O inverso da densidade populacional é: %.10f\n", inverso2);
    printf("Super poder: %.2f\n\n", superpoder2);

    printf("Comparação de Cartas: \n");
    printf("A População da Carta 1 é maior que a População da carta 2? %d\n", populacaoCarta1 > populacaoCarta2);
    printf("A Area da Carta 1 é maior que a Area da carta 2? %d\n", areaCarta1 > areaCarta2);
    printf("O Pib da Carta 1 é maior que o Pib da carta 2? %d\n", pibCarta1 > pibCarta2);
    printf("Os Pontos turisticos da Carta 1 é maior que os Pontos turisticos da carta 2? %d\n", pontosCarta1 > pontosCarta2);
    printf("A Densidade populacional da Carta 1 é menor que a Densidade populacional da carta 2? %d\n", densidadepopulacional1 < densidadepopulacional2);
    printf("O Pib per capita da Carta 1 é maior que o Pib per capita da carta 2? %d\n", pibpercapita1 > pibpercapita2);
    printf("O Super Poder da Carta 1 é maior que o Super poder da carta 2? %d\n\n", superpoder1 > superpoder2);



    return 0;
}
