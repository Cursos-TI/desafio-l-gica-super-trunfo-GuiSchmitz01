#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 1
    char estado1;               // Estado: letra de 'A' a 'H'
    char codigo1[4];            // Código da carta
    char nomeCidade1[50];       // Nome da cidade
    int populacao1;             // População
    float area1;                // Área em km²
    float pib1;                 // PIB em bilhões
    int pontosTuristicos1;       // Pontos turísticos

    // Declaração das variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (exemplo P01): ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (exemplo S01): ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

   printf("Área (em km²): ");
   scanf("%f", &area2);

   printf("PIB (bilhões de reais): ");
   scanf("%f", &pib2);

   printf("Número de Pontos Turísticos: ");
   scanf("%d", &pontosTuristicos2);

   // Cálculo da densidade populacional e PIB per capita para cada carta
   float densidadePopulacional1 = populacao1 / area1;
   float densidadePopulacional2 = populacao2 / area2;

   float pibPerCapita1 = pib1 / populacao1;
   float pibPerCapita2 = pib2 / populacao2;

   // Escolha do atributo para comparação:
   // Você pode alterar essa variável para comparar diferentes atributos.
   // Exemplos possíveis: "populacao", "area", "pib", "densidade" ou "pib_per_capita"

   const char* atributoComparado = "populacao";  // Altere aqui para testar outros atributos

   // Variáveis auxiliares para armazenar os valores dos atributos
   int valorCarta1_int;
   int valorCarta2_int;

   float valorCarta1_float;
   float valorCarta2_float;

   // Comparação baseada no atributo escolhido
   if (strcmp(atributoComparado, "populacao") == 0) {
       valorCarta1_int = populacao1;
       valorCarta2_int = populacao2;
       printf("\nComparação de cartas (Atributo: População)\n");
       printf("Carta 1 - %s (%s): %d\n", nomeCidade1, codigo1, populacao1);
       printf("Carta 2 - %s (%s): %d\n", nomeCidade2, codigo2, populacao2);

       if (populacao1 > populacao2) {
           printf("Resultado: Carta 1 venceu!\n");
       } else if (populacao2 > populacao1) {
           printf("Resultado: Carta 2 venceu!\n");
       } else {
           printf("Empate!\n");
       }

   } else if (strcmp(atributoComparado, "area") == 0) {
       valorCarta1_float = area1;
       valorCarta2_float = area2;
       printf("\nComparação de cartas (Atributo: Área)\n");
       printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, codigo1, area1);
       printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, codigo2, area2);

       if (area1 > area2) {
           printf("Resultado: Carta 1 venceu!\n");
       } else if (area2 > area1) {
           printf("Resultado: Carta 2 venceu!\n");
       } else {
           printf("Empate!\n");
       }

   } else if (strcmp(atributoComparado, "pib") == 0) {
       valorCarta1_float = pib1;
       valorCarta2_float = pib2;
       printf("\nComparação de cartas (Atributo: PIB)\n");
       printf("Carta 1 - %s (%s): %.2f bilhões\n", nomeCidade1, codigo1, pib1);
       printf("Carta 2 - %s (%s): %.2f bilhões\n", nomeCidade2, codigo2, pib2);

       if (pib1 > pib2) {
           printf("Resultado: Carta 1 venceu!\n");
       } else if (pib2 > pib1) {
           printf("Resultado: Carta 2 venceu!\n");
       } else {
           printf("Empate!\n");
       }

   } else if (strcmp(atributoComparado, "densidade") == 0) {
        // Para densidade, menor vence
        printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
        printf(
            "Carta 1 - %s (%s): %.4f habitantes/km²\n",
            nomeCidade1, codigo1, densidadePopulacional1);
        printf(
            "Carta 2 - %s (%s): %.4f habitantes/km²\n",
            nomeCidade2, codigo2, densidadePopulacional2);

        if (densidadePopulacional1 < densidadePopulacional_02) { 
            // Corrigido abaixo!
        }
        if(densidadePopulacional_02 < densidadePopulacional_01){
            ...
        }

        // Correção:
        if(densidadePopulacional_01 < densidadePopulacional_02){
               printf("\nResultado: Carta 1 venceu!\n");
        }else if(densidadePopulacional_02 < densidadePopulacional_01){
            printf("\nResultado: Carta 3 venceu!\n");
        }else{
            printf("\nEmpate!\n");
        }

    } else if(strcmp(atributoComparado,"pib_per_capita")==0){
        // Comparar PIB per capita
        printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
        printf(
            "Carta 01 - %s (%s): %.4f\n",
            nomeCidade01,codigo01,pibPerCapita01);
        printf(
            "Carta 02 - %s (%s): %.4f\n",
            nomeCidade02,codigo02,pibPerCapita02);

        if(pibPerCapita01>pibPerCapita02){
            printf("\nResultado: Carta 01 venceu!\n");
        }else if(pibPerCapita02>pibPerCapita01){
            printf("\nResultado: Carta 02 venceu!\n");
        }else{
            printf("\nEmpate!\n");
        }

    }

    return 0;
}