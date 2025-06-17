#include <stdio.h>
int main(){ 
 // Variaveis para carta1
        int populacao1 =  12325000;
     int pontos_turisticos1 = 50;
   char estado1[50]= "A";
       char codigo1[50]= "A01";
  char cidade1[50] = "SaoPaulo";
   float area1= 1521.11 km²;
   float pib1 =  699.28 bilhões de reais;

       // variaveis para carta2
    
    int populacao2 = 6748000;
    int pontos_turisticos= 30;
    char estado[30] = "B";
    char codigo[20] ="B02";
    char cidade[30] = "Riodejaneiro";
    float area = 1200.25 km²;
    float pib = 300.50 bilhões de reais ;
         
// Exibindo os dados da carta1
 printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
       printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km^2\n", area); 
    printf("PIB: %.2f\n", pib); 
     printf("Pontos Turisticos: %d\n", pontos_turisticos);
    // Pedir e ler os dados da Carta 1
    printf("Digite o Estado (ex: A): ");
    scanf(" %c", &estado1); 
printf("Código: %s\n", codigo1);
    scanf("%s", codigo1); 
printf("Cidade: %s\n", nomeCidade1);
        scanf(" %[^\n]", nomeCidade1); 
printf("Populacao: %d habitantes\n", populacao);
scanf("%d", &populacao1);
printf("Area: %.2f km^2\n", area); 
scanf("%f", &area1);
printf("PIB: %.2f\n", pib); 
scanf("%f", &pib1);
     printf("Pontos Turisticos: %d\n", pontos_turisticos);
scanf("%d", &pontostur1);

// Exibindo os dados da carta2
 printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
       printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km^2\n", area); 
    printf("PIB: %.2f\n", pib); 
     printf("Pontos Turisticos: %d\n", pontos_turisticos);

    // Pedir e ler os dados da Carta 2
    printf("Digite o Estado (ex: B): ");
    scanf(" %c", &estado2); 
printf("Código: %s\n", codigo2);
    scanf("%s", codigo2); 
printf("Cidade: %s\n", nomeCidade2);
        scanf(" %[^\n]", nomeCidade2); 
printf("Populacao: %d habitantes\n", populacao);
scanf("%d", &populacao2);
printf("Area: %.2f km^2\n", area); 
scanf("%f", &area2);
printf("PIB: %.2f\n", pib); 
scanf("%f", &pib2);
     printf("Pontos Turisticos: %d\n", pontos_turisticos);
scanf("%d", &pontostur2);

    
    return 0;

