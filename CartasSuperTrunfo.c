

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


  #include <stdio.h>

    // Área para definição das variáveis para armazenar as propriedades das cidades
int main() {
  printf("DESAFIO SUPER TRUNFO \n");


    char brasil[] = "Brasil", EUA[] = "Estados Unidos";
    char ceara[] = "Ceará", saoPaulo[] = "São Paulo", minasGerais[] = "Minas Gerais", bahia[] = "Bahia", para[] = "Pará", amazonas[] = "Amazonas", rioDeJaneiro[] = "Rio de Janeiro", rioGrandeDoSul[] = "Rio Grande do Sul";
    char C1[50], C2[50], C3[50], C4[50];
    float populacao;
    float area;
    float pib;
    int pontosturisticos;
   
  // Área para entrada de dados

printf("Vamos começar agora a inserir os dados. \n");

printf("O pais será o %s . \n", brasil);
    
printf("O primeiro estado é o %s . \n", ceara);
    
    
printf("Digite as 4 cidades do estado %s .\n ", ceara);

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
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s ?\n", C2);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%f", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s \n", C3);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%f", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %s \n", C4);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%f", &pontosturisticos);

    printf("Segundo estado é %s .\n", saoPaulo);
    
    printf("Digite as 4 cidades do estado %s .\n", saoPaulo);
    printf("Cidade 1: ");
    scanf(" %49[^\n]", C1);

    printf("Cidade 2: ");
    scanf(" %49[^\n]", C2);

    printf("Cidade 3: ");
    scanf(" %49[^\n]", C3);

    printf("Cidade 4: ");
    scanf(" %49[^\n]", C4);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C1);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C2);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C3);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C4);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Terceiro estado é %c . \n", minasGerais);
   
    printf("Digite as 4 cidades do estado %s .\n", minasGerais);
    printf("Cidade 1: ");
    scanf(" %49[^\n]", C1);

    printf("Cidade 2: ");
    scanf(" %49[^\n]", C2);

    printf("Cidade 3: ");
    scanf(" %49[^\n]", C3);

    printf("Cidade 4: ");
    scanf(" %49[^\n]", C4);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C1);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C2);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C3);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C4);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Quarto estado é %s .\n", bahia);
    printf("Digite as 4 cidades do estado %c\n", bahia);
    printf("Cidade 1: ");
    scanf(" %49[^\n]", C1);

    printf("Cidade 2: ");
    scanf(" %49[^\n]", C2);

    printf("Cidade 3: ");
    scanf(" %49[^\n]", C3);

    printf("Cidade 4: ");
    scanf(" %49[^\n]", C4);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C1);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C2);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C3);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C4);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Quinto estado é %s .\n", para);
    printf("Digite as 4 cidades do estado %c\n", para);
    printf("Cidade 1: ");
    scanf(" %49[^\n]", C1);

    printf("Cidade 2: ");
    scanf(" %49[^\n]", C2);

    printf("Cidade 3: ");
    scanf(" %49[^\n]", C3);

    printf("Cidade 4: ");
    scanf(" %49[^\n]", C4);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C1);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C2);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C3);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C4);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Sexto estado é %s .\n", amazonas);
    printf("Digite as 4 cidades do estado %c\n", amazonas);
    printf("Cidade 1: ");
    scanf(" %49[^\n]", C1);

    printf("Cidade 2: ");
    scanf(" %49[^\n]", C2);

    printf("Cidade 3: ");
    scanf(" %49[^\n]", C3);

    printf("Cidade 4: ");
    scanf(" %49[^\n]", C4);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C1);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C2);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C3);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C4);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Setimo estado é %s .\n", rioDeJaneiro);
    printf("Digite as 4 cidades do estado %c\n", rioDeJaneiro);
    printf("Cidade 1: ");
    scanf(" %49[^\n]", C1);

    printf("Cidade 2: ");
    scanf(" %49[^\n]", C2);

    printf("Cidade 3: ");
    scanf(" %49[^\n]", C3);

    printf("Cidade 4: ");
    scanf(" %49[^\n]", C4);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c\n ", C1);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C2);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C3);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C4);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Oitavo estado é %s .\n",rioGrandeDoSul);
    printf("Digite as 4 cidades do estado %c\n", rioGrandeDoSul);
    printf("Cidade 1: ");
    scanf(" %49[^\n]", C1);

    printf("Cidade 2: ");
    scanf(" %49[^\n]", C2);

    printf("Cidade 3: ");
    scanf(" %49[^\n]", C3);

    printf("Cidade 4: ");
    scanf(" %49[^\n]", C4);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C1);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C2);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C3);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    printf("Qual a população, área, PIB e número de pontos turisticos da cidade %c \n", C4);
    printf("População:  \n");
    scanf("%f", &populacao);
    printf("Área: \n");
    scanf("%f", &area);
    printf("PIB: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);



  // Área para exibição dos dados da cidade

return 0;
} 
