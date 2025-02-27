#include <stdio.h>

char estado;
char carta[50];
char cidade[50];
int populacao;
flota area;
float pib;
int turistico;

int main() {

    printf("====CARTA1======="\n);
    
    print("Nome do Estado?\n");
    scanf("%s", &estado);

    prinft("Codigo da Carta?\n");
    scanf("%s", &carta);
    
    printf("Nome da Cidade?\n");
    scanf("%s", &cidade);

    printf("População? \n");
    scanf("%d", &populacao);

    print("Area Da cidade?\n");
    scanf("%f", &area);

    printf("PIB?\n");
    scanf("f", &pib);

    printf("Numero de Pontos Turísticos?\n");
    scanf("%d", &turistico);
    
    
    
    return 0;
}
