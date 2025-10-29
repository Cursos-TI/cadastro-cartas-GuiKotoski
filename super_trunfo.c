#include <stdio.h>

// Função para limpar o buffer do teclado
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // descarta caracteres até encontrar nova linha
    }
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    // Boas vindas 
    printf("Olá usuário\n");
    printf("Siga corretamente as instrucoes para criar as cartas do super-trunfo\n");

    // Entrada de dados carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    limpar_buffer();

    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1);
    limpar_buffer();

    printf("Nome da cidade: ");
    scanf("%49[^\n]", cidade1);
    limpar_buffer();

    printf("Populacao: ");
    scanf("%d", &populacao1);
    limpar_buffer();

    printf("Area em km²: ");
    scanf("%f", &area1);
    limpar_buffer();

    printf("PIB em bilhoes: ");
    scanf("%f", &pib1);
    limpar_buffer();

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    limpar_buffer();

    // Entrada de dados carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    limpar_buffer();

    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo2);
    limpar_buffer();

    printf("Nome da cidade: ");
    scanf("%49[^\n]", cidade2);
    limpar_buffer();

    printf("Populacao: ");
    scanf("%d", &populacao2);
    limpar_buffer();

    printf("Area em km²: ");
    scanf("%f", &area2);
    limpar_buffer();

    printf("PIB em bilhoes: ");
    scanf("%f", &pib2);
    limpar_buffer();

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);
    limpar_buffer();

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}

