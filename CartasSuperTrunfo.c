#include <stdio.h>

int main(){
    char estado01[3];
    char carta01[20];
    char cidade01[50];
    int populacao01;
    float area01;
    float pib01;
    int turistico01;

    char estado02[3];
    char carta02[20];
    char cidade02[50];
    int populacao02;
    float area02;
    float pib02;
    int turistico02;
    
    // ***********CARTA 01*****************
    printf("CARTA 1:\n");
    
    printf("Digite seu Estado:\n");
    scanf("%s", &estado01);
    
    printf("Digite o Codigo da Carta:\n");
    scanf("%s", &carta01);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", &cidade01);
    
    printf("Digite a Quantidade Populacional:\n");
    scanf("%d", &populacao01);
    
    printf("Digite a Área em km²:\n");
    scanf("%f", &area01);

    printf("Digite o PIB:\n");
    scanf("%f", &pib01);

    printf("Digite a Quantidade de Pontos Turísticos:\n");
    scanf("%d", &turistico01);
    printf("\n");
    // ********CARTA 02********
    printf("CARTA 2:\n");
    
    printf("Digite seu Estado:\n");
    scanf("%s", &estado02);
    
    printf("Digite o Codigo da Carta:\n");
    scanf("%s", &carta02);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", &cidade02);
    
    printf("Digite a Quantidade Populacional:\n");
    scanf("%d", &populacao02);
 
    printf("Digite a Área em km²:\n");
    scanf("%f", &area02);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib02);
    
    printf("Digite a Quantidade de Pontos Turísticos:\n");
    scanf("%d", &turistico02);

    //**********DADOS CARTA 01*************
    printf("Carta 1:\n");
    printf("Estado: %s \n", estado01);
    printf("Codigo: %s \n", carta01);
    printf("Nome da Cidade: %s \n", cidade01);
    printf("População: %d \n", populacao01);
    printf("Área: %.2f Km² \n", area01);
    printf("PIB: %.2f bilhoes de reais \n", pib01);
    printf("Número de Pontos Turísticos: %d \n", turistico01);
        
    printf("\n");

    // ********DADOS CARTA 02********
  
    printf("Carta 2:\n");
    printf("Estado: %s \n", estado02);
    printf("Codigo: %s \n", carta02);
    printf("Nome da Cidade: %s \n", cidade02);
    printf("População: %d \n", populacao02);
    printf("Área: %.2f Km² \n", area02);
    printf("PIB: %.2f bilhoes de reais \n", pib02);
    printf("Número de Pontos Turísticos: %d \n", turistico02);


    
    return 0;
}
