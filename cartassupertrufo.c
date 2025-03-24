#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta

typedef struct {
    char estado;               
    char codigo[5];            
    char cidade[100];          
    int populacao;             
    float area;              
    float pib;                 
    int pontosTuristicos;      
} Carta;


// Função para exibir as informações da carta
void exibirCarta(const Carta* c) {
    printf("\nInformações da Carta:\n");
    printf("Estado: %c\n", c->estado);
    printf("Código da Carta: %s\n", c->codigo);
    printf("Nome da Cidade: %s\n", c->cidade);
    printf("População: %d\n", c->populacao);
    printf("Área: %.2f km²\n", c->area);
    printf("PIB: %.2f bilhões de reais\n", c->pib);
    printf("Número de Pontos Turísticos: %d\n", c->pontosTuristicos);
}
int main() {
    // Dados da primeira carta
    Carta carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    
    // Dados da segunda carta
    Carta carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};
    
    // Exibir informações das cartas
    printf("\nExibindo os dados da primeira carta:\n");
    exibirCarta(&carta1);
    
    printf("\nExibindo os dados da segunda carta:\n");
    exibirCarta(&carta2);
    
    return 0;
}