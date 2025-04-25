#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");

    // Vari�veis Carta 1
    char estado1[50];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    getchar(); 
    
    printf("C�digo da Carta: ");
    scanf("%s", codigo1);
    getchar(); 

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);

    printf("Popula�?o: ");
    scanf("%d", &populacao1);

    printf("�rea: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("N�mero de Pontos Tur�sticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar(); 

    // Vari�veis Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    getchar(); 
    
    printf("C�digo da Carta: ");
    scanf("%s", codigo2);
    getchar(); 

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);

    printf("Popula�?o: ");
    scanf("%d", &populacao2);

    printf("�rea: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("N�mero de Pontos Tur�sticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar(); 

    // Apresenta�?o das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("C�digo: %s\n", codigo1);
    printf("Nome da Cidade: %s", nomeCidade1); 
    printf("Popula�?o: %d\n", populacao1);
    printf("�rea: %.2f km?\n", area1);
    printf("PIB: %.2f bilh?es de reais\n", pib1);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("C�digo: %s\n", codigo2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("Popula�?o: %d\n", populacao2);
    printf("�rea: %.2f km?\n", area2);
    printf("PIB: %.2f bilh?es de reais\n", pib2);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos2);

    return 0;

        }