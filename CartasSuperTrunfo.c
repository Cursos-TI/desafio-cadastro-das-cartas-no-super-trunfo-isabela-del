include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
} Carta;

void exibirCarta(Carta c, int numero) {
    printf("Carta %d:\n", numero);
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade);
    printf("PIB per Capita: %.2f reais\n\n", c.pibPerCapita);
}

int main() {
    Carta carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50, 0, 0};
    Carta carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30, 0, 0};

    // Cálculo da densidade e PIB per capita para carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;

    // Cálculo da densidade e PIB per capita para carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    // Exibição das cartas no formato da Estácio
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
