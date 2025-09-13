#include <stdio.h>


int main() {


    

        //Cadastro de variaveis      
        char estado [20];
        char codigocarta [5];
        char nomecidade [50];
        int  populacao1, populacao2;
        float areaKM1, areaKM2;
        float pib1, pib2;
        int pontosturisticos;

        //Abaixo as 2 novas variaveis
        float densidadepopulacional_1;
        float densidadepopulacional_2;
        float pibpercapita_1; 
        float pibpercapita_2;  

     

         //Calculo das 2 novas informações
         densidadepopulacional_2 = (populacao2 / areaKM2);
         pibpercapita_2 = (pib2 / populacao2);          
    

          
    

         //Cadastro CARTA 1

         printf("INFORME CARTA 1\n");

         printf("Digite o Estado: ");
         scanf("%s", &estado);

         printf("Digite Codigo da Carta: ");
         scanf("%s", &codigocarta);

         printf("Digite nome da cidade: ");
         scanf("%s", &nomecidade);

         printf("Digite a populacao: ");
         scanf("%d", &populacao1);

         printf("Digite a area (KM): ");
         scanf("%f", &areaKM1);

         printf("Digite o PIB: ");
         scanf("%f", &pib1);

         printf("Digite os pontos turisticos: ");
         scanf("%d", &pontosturisticos);  

          //Calculo das 2 novas informações
         densidadepopulacional_1 = (populacao1 / areaKM1);
         pibpercapita_1 = (pib1 / populacao1);                   
         

                
         printf("\n"); //impressão apenas para pular linha e ficar organizado o cadastro da visualizacao.
             
         //Impressão CARTA 1
         printf("CARTA 1\n") ;       
         printf("Nome Estado: %s\n", estado);
         printf("Codigo Carta: %s\n", codigocarta);
         printf("Cidade: %s\n", nomecidade);
         printf("Populacao: %d habitantes\n", populacao2);
         printf("Area km²: %.2fkm²\n", areaKM1);
         printf("PIB: %.2f\n", pib1);
         printf("Pontos Turisticos: %d\n", pontosturisticos);
         printf("Densidade Populacional é: %.2f hab/km²\n", densidadepopulacional_1);
         printf("PIB per Capita é: %.2f reais\n", pibpercapita_1);
         
         printf("\n"); //impressão apenas para pular linha e ficar organizado a digitação com a impressão.         

         //Cadastro CARTA 2

         printf("INFORME CARTA 2\n");

         printf("Digite o Estado: ");
         scanf("%s", &estado);

         printf("Digite Codigo da Carta: ");
         scanf("%s", &codigocarta);

         printf("Digite nome da cidade: ");
         scanf("%s", &nomecidade);

         printf("Digite a populacao: ");
         scanf("%d", &populacao2);

         printf("Digite a area (KM): ");
         scanf("%f", &areaKM2);

         printf("Digite o PIB: ");
         scanf("%f", &pib2);

         printf("Digite os pontos turisticos: ");
         scanf("%d", &pontosturisticos);

          //Calculo das 2 novas informações
         densidadepopulacional_2 = (populacao2 / areaKM2);
         pibpercapita_2 = (pib2 / populacao2);  

         printf("\n"); //impressão apenas para pular linha e ficar organizado a digitação com a impressão.

         //Impressão CARTA 2
         printf("CARTA 2\n");
         printf("Nome Estado: %s\n", estado);
         printf("Codigo Carta: %s\n", codigocarta);
         printf("Cidade: %s\n", nomecidade);
         printf("Populacao: %d habitantes\n", populacao2);
         printf("Area km²: %.2fkm²\n", areaKM2);
         printf("PIB: %.2f\n", pib2);
         printf("Pontos Turisticos: %d\n", pontosturisticos);
         printf("Densidade Populacional é: %.2f hab/km²\n", densidadepopulacional_2);
         printf("PIB per Capita é: %.2f reais\n", pibpercapita_2);   

          
    
   

    return 0;
}
