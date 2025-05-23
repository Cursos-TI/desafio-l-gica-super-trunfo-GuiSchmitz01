#include <stdio.h>
#include <string.h>

// Função para ler os dados de uma cidade
void lerDadosCidade(char nome[], char codigo[], char *estado, int *populacao,
                    float *area, float *pib, int *pontosTuristicos) {
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", estado);
    printf("Código da Carta (exemplo P01): ");
    scanf("%3s", codigo);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nome);
    printf("População: ");
    scanf("%d", populacao);
    printf("Área (em km²): ");
    scanf("%f", area);
    printf("PIB (bilhões de reais): ");
    scanf("%f", pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", pontosTuristicos);
}

int main() {
    // Variáveis para a carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Leitura dos dados das cidades
      printf("\n=== Dados da Carta 1 ===\n");
      lerDadosCidade(nomeCidade1, codigo1, &estado1, &populacao1, &area1, &pib1, &pontosTuristicos1);

      printf("\n=== Dados da Carta 2 ===\n");
      lerDadosCidade(nomeCidade2, codigo2, &estado2, &populacao2, &area2, &pib2, &pontosTuristicos2);

      // Cálculo de densidade populacional e PIB per capita
      float densidadePopulacional1 = populacao1 / area1;
      float densidadePopulacional2 = populacao2 / area2;

      float pibPerCapita1 = pib1 / populacao1;
      float pibPerCapita2 = pib2 / populacao2;

      // Solicitar ao usuário qual atributo deseja comparar
      char atributo[20];
      printf("\nEscolha o atributo para comparar:\n");
      printf("'populacao', 'area', 'pib', 'densidade', 'pib_per_capita'\n");
      printf("Digite o atributo desejado: ");
      scanf("%19s", atributo);

      // Comparação baseada no atributo escolhido
    if (strcmp(atributo,"populacao")==0) {
        printf("\n--- Comparando População ---\n");
        printf("%s (%s): %d habitantes\n", nomeCidade1,codigo1,populacao1);
        printf("%s (%s): %d habitantes\n", nomeCidade2,codigo2,populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }
    else if (strcmp(atributo,"area")==0) {
        printf("\n--- Comparando Área ---\n");
        printf("%s (%s): %.2f km²\n", nomeCidade1,codigo1,area1);
        printf("%s (%s): %.2f km²\n", nomeCidade2,codigo2,area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (area2 > area1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }
    else if (strcmp(atributo,"pib")==0) {
        printf("\n--- Comparando PIB ---\n");
        printf("%s (%s): %.2f bilhões\n", nomeCidade1,codigo1,pib1);
        printf("%s (%s): %.2f bilhões\n", nomeCidade2,codigo2,pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Empate!\n");
    }
    else if (strcmp(atributo,"densidade")==0) {
        printf("\n--- Comparando Densidade Populacional ---\n");
        printf("%s (%s): %.4f habitantes/km²\n", nomeCidade1,codigo1,densidadePopulacional1);
        printf("%s (%s): %.4f habitantes/km²\n", nomeCidade2,codigo2,densidadePopulacional2);

        // Menor densidade vence neste caso
        if(densidadePopulacional_01 < densidadePopulacional_02){
            printf("\nResultado: Carta 01 venceu!\n");
        }else if(densidadePopulacional_02 < densidadePopulacional_01){
            printf("\nResultado: Carta 02 venceu!\n");
        }else{
            printf("\nEmpate!\n");
        }
    }
    else if (strcmp(atributo,"pib_per_capita")==0) {
        printf("\n--- Comparando PIB per Capita ---\n");
        printf("%s (%s): %.4f\n",nomeCidade_01,codigo_01,pibPerCapita_01);
        printf("%s (%s): %.4f\n",nomeCidade_02,codigo_02,pibPerCapita_02);

        if(pibPerCapita_01>pibPerCapita_02)
            printf("\nResultado: Carta 01 venceu!\n");
        else if(pibPerCapita_02>pibPerCapita_01)
            printf("\nResultado: Carta 02 venceu!\n");
        else
            printf("\nEmpate!\n");  
    }

    return 0;
}