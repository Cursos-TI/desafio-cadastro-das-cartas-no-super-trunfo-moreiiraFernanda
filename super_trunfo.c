#include <stdio.h>
int main () {

    char cidadeCarta1[50] = "Fortaleza";
    char estadoCarta1[10] = "A";
    char codigoCarta1[10] = "A01";
    unsigned long int populacaoCarta1 = 6895350;
    int pontosCarta1 = 19;
    float areaCarta1 = 35.6;
    float pibCarta1 = 376.54;
    float densidadepopulacional1 = (float) populacaoCarta1 / areaCarta1;
    float pibpercapita1 = (float) populacaoCarta1/ pibCarta1;

    char cidadeCarta2[50] = "Florianopolis";
    char estadoCarta2[10] = "B";
    char codigoCarta2[10] = "B01";
    unsigned long int populacaoCarta2 = 5998980;
    int pontosCarta2 = 13;
    float areaCarta2 = 15.7;
    float pibCarta2 = 570.456;
    float densidadepopulacional2 = (float) populacaoCarta2 / areaCarta2;
    float pibpercapita2 = (float) populacaoCarta2/ pibCarta2;
    
    printf("Informacoes para a carta 1: \n");
    printf("Estado: %s \n",estadoCarta1);
    printf("Cidade: %s \n", cidadeCarta1);
    printf("Codigo da carta: %s \n", codigoCarta1);
    printf("Populacao: %d \n", populacaoCarta1);
    printf("Pontos Turisticos: %d \n", pontosCarta1);
    printf("Area: .%2f km²\n", areaCarta1);
    printf("PIB: %.2f bilhoes de reais\n", pibCarta1);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadepopulacional1);
    printf("Pib per capita: %.3f reais\n\n", pibpercapita1);
    soma = populacaoCarta1 + areaCarta1 + pibCarta1 + pontosCarta1 + pibCarta1 + 

    printf("Informacoes para a carta 2: \n");
    printf("Estado: %s \n", estadoCarta2);
    printf("Cidade: %s \n", cidadeCarta2);
    printf("Codigo da carta: %s \n", codigoCarta2);
    printf("Populacao: %d \n", populacaoCarta2);
    printf("Pontos Turisticos: %d \n", pontosCarta2);
    printf("Area: .%2f km²\n", areaCarta2);
    printf("PIB: %.2f bilhoes de reais\n", pibCarta2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidadepopulacional2);
    printf("Pib per capita: %.3f reais\n", pibpercapita2);
   
   
return 0;
}
