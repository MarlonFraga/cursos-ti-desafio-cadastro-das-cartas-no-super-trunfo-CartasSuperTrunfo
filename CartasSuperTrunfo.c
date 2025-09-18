#include <stdio.h>


int main() {


    

        //Cadastro de variaveis      
        char estado1 [20], estado2 [20];
        char codigocarta1 [5], codigocarta2 [5];
        char nomecidade1 [50], nomecidade2 [50];
        unsigned long int  populacao1, populacao2;
        float areaKM1, areaKM2;
        float pib1, pib2;
        int pontosturisticos1, pontosturisticos2;

        //Abaixo as 2 novas variaveis
        float densidadepopulacional_1;
        float densidadepopulacional_2;
        float pibpercapita_1; 
        float pibpercapita_2;
        
        // Cadastro variavel SUPER PODER
        float superpoder1;
        float superpoder2;
              
    

         //Cadastro CARTA 1 (ENTRADA DE DADOS)

         printf("INFORME CARTA 1\n");

         printf("Digite o Estado: ");
         scanf("%s", &estado1);

         printf("Digite Codigo da Carta: ");
         scanf("%s", &codigocarta1);

         printf("Digite nome da cidade: ");
         scanf("%s", &nomecidade1);

         printf("Digite a populacao: ");
         scanf("%lu", &populacao1);

         printf("Digite a area (KM): ");
         scanf("%f", &areaKM1);

         printf("Digite o PIB: ");
         scanf("%f", &pib1);

         printf("Digite os pontos turisticos: ");
         scanf("%d", &pontosturisticos1);  

          //Calculo das 2 novas informações
         densidadepopulacional_1 = ((float)populacao1 / areaKM1);
         pibpercapita_1 = (pib1 / populacao1);
         
         //Calculo do SUPER PODER CARTA 1
         superpoder1 = (populacao1 + areaKM1 + pib1 + pontosturisticos1 + (1.0f / densidadepopulacional_1) + pibpercapita_1);
                        

                
         printf("\n"); //impressão apenas para pular linha e ficar organizado o cadastro da visualizacao.
             
         //Impressão CARTA 1 (SAIDA DE DADOS)
         printf("CARTA 1\n");       
         printf("Nome Estado: %s\n", estado1);
         printf("Codigo Carta: %s\n", codigocarta1);
         printf("Cidade: %s\n", nomecidade1);
         printf("Populacao: %lu habitantes\n", populacao1);
         printf("Area km²: %.2fkm²\n", areaKM1);
         printf("PIB: %.2f\n", pib1);
         printf("Pontos Turisticos: %d\n", pontosturisticos1);
         printf("Densidade Populacional é: %.2f hab/km²\n", densidadepopulacional_1);
         printf("PIB per Capita é: %.2f reais\n", pibpercapita_1);
         printf("SUPER PODER: %.2f\n", superpoder1);
         
         printf("\n"); //impressão apenas para pular linha e ficar organizado a digitação com a impressão.         

         //Cadastro CARTA 2 (ENTRADA DE DADOS)

         printf("INFORME CARTA 2\n");

         printf("Digite o Estado: ");
         scanf("%s", &estado2);

         printf("Digite Codigo da Carta: ");
         scanf("%s", &codigocarta2);

         printf("Digite nome da cidade: ");
         scanf("%s", &nomecidade2);

         printf("Digite a populacao: ");
         scanf("%lu", &populacao2);

         printf("Digite a area (KM): ");
         scanf("%f", &areaKM2);

         printf("Digite o PIB: ");
         scanf("%f", &pib2);

         printf("Digite os pontos turisticos: ");
         scanf("%d", &pontosturisticos2);

          //Calculo das 2 novas informações
         densidadepopulacional_2 = ((float)populacao2 / areaKM2);
         pibpercapita_2 = (pib2 / populacao2);  

         //Cadlculo SUPER PODER CARTA 2
         superpoder2 = (populacao2 + areaKM2 + pib2 + pontosturisticos2 + (1.0f / densidadepopulacional_2) + pibpercapita_2);

         printf("\n"); //impressão apenas para pular linha e ficar organizado a digitação com a impressão.

         //Impressão CARTA 2 (SAIDA DE DADOS)
         printf("CARTA 2\n");
         printf("Nome Estado: %s\n", estado2);
         printf("Codigo Carta: %s\n", codigocarta2);
         printf("Cidade: %s\n", nomecidade2);
         printf("Populacao: %lu habitantes\n", populacao2);
         printf("Area km²: %.2fkm²\n", areaKM2);
         printf("PIB: %.2f\n", pib2);
         printf("Pontos Turisticos: %d\n", pontosturisticos2);
         printf("Densidade Populacional é: %.2f hab/km²\n", densidadepopulacional_2);
         printf("PIB per Capita é: %.2f reais\n", pibpercapita_2);
         printf("SUPER PODER: %.2f\n", superpoder2);
         
         printf("\n");
         printf("*********************************************************************************************************\n");
         printf("\n");

         //****Comparação das CARTA 1 e CARTA 2****

         printf("Contabilizando CARTA 1 versus CARTA 2\n");         
         printf("Legenda Resultados: 0 = Negativo / 1 = Positvo\n");
         printf("\n");

         
         printf("População: %s\n", populacao1 > populacao2 ? "CARTA 1 venceu" : "CARTA 2 venceu");
         printf("Area KM²: %S\n", areaKM1 > areaKM2 ? "CARTA 1 venceu" : "CARTA 2 venceu");
         printf("PIB: %s\n", pib1 > pib2 ? "CARTA 1 venceu" : "CARTA 2 venceu");
         printf("Pontos Turisticos: %s\n", pontosturisticos1 > pontosturisticos2 ? "CARTA 1 venceu" : "CARTA 2 venceu");        
         printf("Densidade Populacional: %s\n", densidadepopulacional_1 > densidadepopulacional_2 ? "CARTA 1 venceu" : "CARTA 2 venceu");
         printf("PIB per Capita: %s\n", pibpercapita_1 > pibpercapita_2 ? "CARTA 1 venceu" : "CARTA 2 venceu");          
         printf("SUPER PODER: %s\n", superpoder1 > superpoder2 ? "CARTA 1 venceu" : "CARTA 2 venceu");



        



          
    
   

    return 0;
}
