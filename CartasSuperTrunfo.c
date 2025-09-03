#include <stdio.h>


int main() {


    

        //Cadastro de variaveis

        char CARTA1; //variavel apenas para identificar a carta 01
        char CARTA2; // variavel apenas para identificar a carta 02
        char estado [20];
        char codigocarta [5];
        char nomecidade [50];
        int populacao;
        float areaKM;
        float pib;
        int pontosturisticos;
          
    

         //Cadastro CARTA 1

         printf("CARTA 1\n");

         printf("Digite o Estado: ");
         scanf("%s", &estado);

         printf("Digite Codigo da Carta: ");
         scanf("%s", &codigocarta);

         printf("Digite nome da cidade: ");
         scanf("%s", &nomecidade);

         printf("Digite a populacao: ");
         scanf("%d", &populacao);

         printf("Digite a area (KM): ");
         scanf("%f", &areaKM);

         printf("Digite o PIB: ");
         scanf("%f", &pib);

         printf("Digite os pontos turisticos: ");
         scanf("%d", &pontosturisticos);          
       
         printf("\n"); //impressão apenas para pular linha e ficar organizado o cadastro da visualizacao.
             
         //Impressão CARTA 1
         printf("CARTA 1\n", CARTA1);
         printf("Nome Estado: %s\n", estado);
         printf("Codigo Carta: %s\n", codigocarta);
         printf("Cidade: %s\n", nomecidade);
         printf("Populacao: %d habitantes\n", populacao);
         printf("Area km²: %.2fkm²\n", areaKM);
         printf("PIB: %.2f\n", pib);
         printf("Pontos Turisticos: %d\n", pontosturisticos);
         
         printf("\n"); //impressão apenas para pular linha e ficar organizado a digitação com a impressão.         

         //Cadastro CARTA 2

         printf("CARTA 2\n");

         printf("Digite o Estado: ");
         scanf("%s", &estado);

         printf("Digite Codigo da Carta: ");
         scanf("%s", &codigocarta);

         printf("Digite nome da cidade: ");
         scanf("%s", &nomecidade);

         printf("Digite a populacao: ");
         scanf("%d", &populacao);

         printf("Digite a area (KM): ");
         scanf("%f", &areaKM);

         printf("Digite o PIB: ");
         scanf("%f", &pib);

         printf("Digite os pontos turisticos: ");
         scanf("%d", &pontosturisticos);

         printf("\n"); //impressão apenas para pular linha e ficar organizado a digitação com a impressão.

         //Impressão CARTA 2
         printf("CARTA 2\n", CARTA2);
         printf("Nome Estado: %s\n", estado);
         printf("Codigo Carta: %s\n", codigocarta);
         printf("Cidade: %s\n", nomecidade);
         printf("Populacao: %d habitantes\n", populacao);
         printf("Area km²: %.2fkm²\n", areaKM);
         printf("PIB: %.2f\n", pib);
         printf("Pontos Turisticos: %d\n", pontosturisticos);   

 
    
   

    return 0;
}
