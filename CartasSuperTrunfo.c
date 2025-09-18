// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


  #include <stdio.h>

    // Área para definição das variáveis para armazenar as propriedades das cidades
int main() {

  printf("DESAFIO SUPER TRUNFO \n");

    // NOMES DOS ESTADOS
    char A[50], B[50], C[50], D[50], E[50], F[50], G[50], H[50];
    // CODIGOS DAS CARTAS
    char A01[50] = "A01", A02[50] = "A02", A03[50] = "A03", A04[50] = "A04",
         B01[50] = "B01", B02[50] = "B02", B03[50] = "B03", B04[50] = "B04";
    // NOMES DAS CIDADES
    char C1[50], C2[50], C3[50], C4[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapita;
   
  // Área para entrada de dados do primeiro estado

printf("Vamos começar agora a inserir os dados. \n");

   
printf("Digite o primeiro estado.\n");
scanf(" %49[^\n]", A);    
    
printf("Digite as 4 cidades do estado %s.\n ", A);
  
    printf("Cidade 1: ");
    scanf(" %49[^\n]", C1);

    printf("Cidade 2: ");
    scanf(" %49[^\n]", C2);

    printf("Cidade 3: ");
    scanf(" %49[^\n]", C3);

    printf("Cidade 4: ");
    scanf(" %49[^\n]", C4);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s ?\n", C1);
    printf("População:  \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);
    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s ?\n", C2);
    printf("População:  \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);
    densidadepopulacional = (float) populacao / area;
    pibpercapita = (float)pib / populacao;

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s \n", C3);
    printf("População:  \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);
    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s \n", C4);
    printf("População:  \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);
    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;

// Área para exibição dos dados de cada carta criada no primeiro estado

    printf("Carta 1:\n");
printf("Estado: %s \n", A);
printf("Código: %s \n", A01);
printf("Nome da Cidade: %s \n", C1);
printf("População: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB: %f \n", pib);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("Densidade Populacional: %f \n", densidadepopulacional);
printf("PIB per capita: %f \n", pibpercapita);

printf("Carta 2:\n");
printf("Estado: %s \n", A);
printf("Código: %s \n", A02);
printf("Nome da Cidade: %s \n", C2);
printf("População: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB: %f \n", pib);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("Densidade Populacional: %f \n", densidadepopulacional);
printf("PIB per capita: %f \n", pibpercapita);

printf("Carta 3:\n");
printf("Estado: %s \n", A);
printf("Código: %s \n", A03);
printf("Nome da Cidade: %s \n", C3);
printf("População: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB: %f \n", pib);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("Densidade Populacional: %f \n", densidadepopulacional);
printf("PIB per capita: %f \n", pibpercapita); 

printf("Carta 4:\n");
printf("Estado: %s \n", A);
printf("Código: %s \n", A04);
printf("Nome da Cidade: %s \n", C4);
printf("População: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB: %f \n", pib);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("Densidade Populacional: %f \n", densidadepopulacional);
printf("PIB per capita: %f \n", pibpercapita);


// Área para entrada de dados do segundo estado    

printf("Digite o segundo estado.\n");
scanf(" %49s", B);    
    
printf("Digite as 4 cidades do estado %s.\n ", B);
  
    printf("Cidade 1: ");
    scanf(" %49[^\n]", C1);

    printf("Cidade 2: ");
    scanf(" %49[^\n]", C2);

    printf("Cidade 3: ");
    scanf(" %49[^\n]", C3);

    printf("Cidade 4: ");
    scanf(" %49[^\n]", C4);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s ?\n", C1);
    printf("População:  \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);
    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s ?\n", C2);
    printf("População:  \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);
    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s \n", C3);
    printf("População:  \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);
    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s \n", C4);
    printf("População:  \n");
    scanf("%d", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);
    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;    
  
  printf("Cartas cadastradas com sucesso!\n");  

  // Área para exibição dos dados de cada carta criada no segundo estado

printf("Carta 5:\n");
printf("Estado: %s \n", B);
printf("Código: %s \n", B01);
printf("Nome da Cidade: %s \n", C1);
printf("População: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB: %f \n", pib);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("Densidade Populacional: %f \n", densidadepopulacional);
printf("PIB per capita: %f \n", pibpercapita);

printf("Carta 6:\n");
printf("Estado: %s \n", B);
printf("Código: %s \n", B02);
printf("Nome da Cidade: %s \n", C2);
printf("População: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB: %f \n", pib);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("Densidade Populacional: %f \n", densidadepopulacional);
printf("PIB per capita: %f \n", pibpercapita);

printf("Carta 7:\n");
printf("Estado: %s \n", B);
printf("Código: %s \n", B03);
printf("Nome da Cidade: %s \n", C3);
printf("População: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB: %f \n", pib);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("Densidade Populacional: %f \n", densidadepopulacional);
printf("PIB per capita: %f \n", pibpercapita);

printf("Carta 8:\n");
printf("Estado: %s \n", B);
printf("Código: %s \n", B04);
printf("Nome da Cidade: %s \n", C4);
printf("População: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB: %f \n", pib);
printf("Número de pontos turísticos: %d \n", pontosturisticos);
printf("Densidade Populacional: %f \n", densidadepopulacional);
printf("PIB per capita: %f \n", pibpercapita);


printf("Estas são as cartas cadastradas.");


return 0;
} 