#include <stdio.h>
#include <strings.h>

int main(){
   
    // CARTAS
    char estado, estado2;;
    char carta [4], carta2 [4];;
    char cidade [25],cidade2 [25];
    int pontos_turisticos, pontos_turisticos2, numeroDeAtributo;
    float PIB, area,densidade_populacional, PIB_per_capita, superpoder;
    float PIB2, area2, densidade_populacional2, PIB_per_capita2, superpoder2;
    unsigned long int populacao,  populacao2;


   // Carta 1:
//  Estado: A
//  Código: A01
//  Nome da Cidade: São Paulo
//  População: 12325000
//  Área: 1521.11 km²
//  PIB: 699.28 bilhões de reais
//  Número de Pontos Turísticos: 50
//  Densidade Populacional: 8102.47 hab/km²
//  PIB per Capita: 56724.32 reais

    // Carta 2:
//  Estado: B
//  Código: B02
//  Nome da Cidade: Rio de Janeiro
//  População: 6748000
//  Área: 1200.25 km²
//  PIB: 300.50 bilhões de reais
//  Número de Pontos Turísticos: 30
//  Densidade Populacional: 5622.24 hab/km²
//  PIB per Capita: 44532.91 reais

    printf("Digite o Estado:\n");
    scanf("%s", &estado);

    printf("Digite o Código da Carta: \n");
    scanf ("%s", carta);

    printf("Digite a Cidade:\n");
    getchar(); // consome o '\n' remanescente
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0';

    printf("Digite a População:\n");
    scanf("%lu", &populacao);

    printf("Digite a Área em km²:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = populacao / area;
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional );
    
    PIB_per_capita = PIB * 1e9 / populacao;
    printf("Pib Per Capita: R$ %.2f Reais\n", PIB_per_capita );

    superpoder = (float) populacao + area + PIB + pontos_turisticos + PIB_per_capita + (1/densidade_populacional);
    printf("Super Poder é: %.2f\n", superpoder);


    // CARTA 2

    printf ("Digite o Estado: \n");
    scanf (" %s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf ("%s", carta2);

    printf("Digite a Cidade:\n");
    getchar(); // consome o '\n' remanescente
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a População:\n");
    scanf("%lu", &populacao2);

    printf("Digite a Área em km²:\n");
    scanf("%f", &area2);

     printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    
    densidade_populacional2 = populacao2 / area2;
    printf("Densidade populacional: %.2f Hab/km²\n", densidade_populacional2 );
    
    PIB_per_capita2 = PIB2 * 1e9 / populacao2;
    printf("Pib Per Capita: R$ %.2f Reais\n", PIB_per_capita2  );

    superpoder2 = (float) populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2 + (1/densidade_populacional2);
    printf("Super Poder é: %.2f\n", superpoder2);

    /////////////////////////////////////////////////////////////

    printf("\n\n---INFORMAÇÕES DOS DADOS--- \n");
	printf("CARTA 1\n");
	printf("Estado: %c\n", estado);  
    printf("Codigo: %s\n", carta );
    printf("Cidade: %s\n", cidade );
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", PIB);
    printf("Pontos Turisticos: %d\n", pontos_turisticos );
    printf("Densidade Populacional:%.2f\n", densidade_populacional);
    printf("PIB Per Capital: %.2f \n", PIB_per_capita);
    
   
    ///////////////////////////////////////////////////////////////

 printf("\n\n---INFORMAÇÕES DOS DADOS--- \n");
	printf("CARTA 2\n");
	printf("Estado: %c\n", estado2);  
    printf("Codigo: %s\n", carta2 );
    printf("Cidade: %s\n", cidade2 );
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2 );
    printf("Densidade Populacional:%.2f\n", densidade_populacional2);
    printf("PIB Per Capital: %.2f \n", PIB_per_capita2);
   

// MENU PARA ESCOLHAS DOS ATRIBUTOS

printf("\n");
printf("==== ESCOLHA O ATRIBUTO PARA COMPARAÇÃO ====\n");
printf("1. População \n");
printf("2. Área \n");
printf("3. PIB\n");
printf("4. Números de Pontos Turisticos \n");
printf("5. Densidade Populacional \n");
printf("Escolha sua Opção: \n");
scanf("%d", &numeroDeAtributo);
printf("\n");

// APRESENTAÇÃO DAS CARTAS

switch (numeroDeAtributo)
{
case 1:
    printf("Carta 1 - %s\n", cidade);
    printf("Carta 2 - %s\n", cidade2);
    printf("Atributo - População \n");
    printf("Carta 1 - População: %d \n", populacao);
    printf("Carta 2 - População: %d \n", populacao2);
    if (populacao > populacao2){
        printf("CARTA 1 VENCEU!!! \n");
    } else if (populacao2 > populacao){
        printf("CARTA 2 VENCEU!!! \n");
    }else{
        printf("EMPATE!!! \n");
    }
    break;
    case 2:
    printf("Carta 1 - %s\n", cidade);
    printf("Carta 2 - %s\n", cidade2);
    printf("Atributo - Área \n");
    printf("Carta 1 - Área: %.2f \n", area);
    printf("Carta 2 - Área: %.2f \n", area2);
    if (area > area2){
        printf("CARTA 1 VENCEU!!! \n");
    } else if (area2 > area){
        printf("CARTA 2 VENCEU!!! \n");
    }else{
        printf("EMPATE!!! \n");
    }
    break;
    case 3:
    printf("Carta 1 - %s\n", cidade);
    printf("Carta 2 - %s\n", cidade2);
    printf("Atributo - PIB \n");
    printf("Carta 1 - PIB: %.2f \n", PIB);
    printf("Carta 2 - PIB: %.2f \n", PIB2);
    if (PIB > PIB2){
        printf("CARTA 1 VENCEU!!! \n");
    } else if (PIB2 > PIB){
        printf("CARTA 2 VENCEU!!! \n");
    }else{
        printf("EMPATE!!! \n");
    }
    break;
case 4:
    printf("Carta 1 - %s\n", cidade);
    printf("Carta 2 - %s\n", cidade2);
    printf("Atributo - Pontos Turísticos \n");
    printf("Carta 1 - Pontos Turísticos: %d \n", pontos_turisticos);
    printf("Carta 2 - Pontos Turísticos: %d \n", pontos_turisticos2);
    if (pontos_turisticos > pontos_turisticos2){
        printf("CARTA 1 VENCEU!!! \n");
    } else if (pontos_turisticos2 > pontos_turisticos){
        printf("CARTA 2 VENCEU!!! \n");
    }else{
        printf("EMPATE!!! \n");
    }
    break;
    case 5:
    printf("Carta 1 - %s\n", cidade);
    printf("Carta 2 - %s\n", cidade2);
    printf("Atributo - Densidade Populacional \n");
    printf("Carta 1 - Densidade Populacional: %d \n", densidade_populacional);
    printf("Carta 2 - Densidade Populacional: %d \n", densidade_populacional2);
    if (densidade_populacional > densidade_populacional2){
        printf("CARTA 1 VENCEU!!! \n");
    } else if (densidade_populacional2 > densidade_populacional){
        printf("CARTA 2 VENCEU!!! \n");
    }else{
        printf("EMPATE!!! \n");
    }
    break;
default:
    printf("Opção Inválida!!!");
    break;
}

return 0;

}