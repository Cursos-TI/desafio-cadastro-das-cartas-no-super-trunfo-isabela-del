#include <stdio.h>


// Estrutura da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para exibir uma carta
void exibirCarta(Carta c) {
    printf("Estado: %c\n", c.estado);
    printf("Código da carta: %s\n", c.codigo);
    printf("Nome da cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f bilhões\n", c.pib);
    printf("Número de pontos turísticos: %d\n\n", c.pontosTuristicos);
}

int main() {
    // Criando duas cartas
    Carta carta1 = {'A', "A01", "São Paulo", 12300000, 1521.11, 799.5, 35};
    Carta carta2 = {'B', "B03", "Rio de Janeiro", 6718903, 1182.30, 411.2, 40};

    // Exibindo as cartas
    printf("Carta 1:\n");
    exibirCarta(carta1);

    printf("Carta 2:\n");
    exibirCarta(carta2);

    return 0;
}