#include <stdio.h>

int main(){
    // Primeira carta
    char estado1 = 'A';
    char codigo1[10] = "A01";
    char cidade1[50] = "Recife";
    int populacao1 = 123456;
    float area1 = 218.8;
    float pib1 = 54.970;
    int turistico1 = 15;

    printf("\n=== CARTA 1 ===\n");     
    
    printf("Digite seu estado:\n");
    scanf(" %c", &estado1);  // Adicionei espaço aqui também

    printf("Digite seu código:\n");
    scanf("%s", codigo1);  // Corrigi: sem & para array

    printf("Digite sua cidade:\n");
    scanf("%s", cidade1);

    printf("Digite sua população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turistico1);

    // Segunda carta
    char estado2 = 'L';
    char codigo2[10] = "L01";
    char cidade2[50] = "Olinda";
    int populacao2 = 1234567;
    float area2 = 43.3;
    float pib2 = 52.720;
    int turistico2 = 14;

    printf("\n=== CARTA 2 ===\n");
        
    printf("Digite seu estado:\n");
    scanf(" %c", &estado2);

    printf("Digite seu código:\n");
    scanf("%s", codigo2);

    printf("Digite sua cidade:\n");
    scanf("%s", cidade2);

    printf("Digite sua população:\n");
    scanf("%d", &populacao2);

    printf("Digite sua área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turistico2);
    
    return 0;
}
