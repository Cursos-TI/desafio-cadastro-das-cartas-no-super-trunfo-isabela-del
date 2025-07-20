#include <stdio.h>

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
    float superPoder;
} Carta;

// Função para exibir os dados da carta
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
    printf("PIB per Capita: %.2f reais\n", c.pibPerCapita);
    printf("Super Poder: %.2f\n\n", c.superPoder);
}

// Função que retorna 1 se valor1 for maior, 0 se valor2 for maior
int compararMaior(float valor1, float valor2) {
    return valor1 > valor2 ? 1 : 0;
}

// Para densidade: menor vence
int compararMenor(float valor1, float valor2) {
    return valor1 < valor2 ? 1 : 0;
}

int main() {
    // Carta 1: São Paulo | Carta 2: Rio de Janeiro
    Carta carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50, 0, 0, 0};
    Carta carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30, 0, 0, 0};

    // Cálculo densidade e PIB per capita
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;

    // Cálculo do Super Poder: soma de todos os atributos numéricos + (1 / densidade)
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.pibPerCapita + (1 / carta1.densidade);
    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.pibPerCapita + (1 / carta2.densidade);

    // Exibe os dados das cartas
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    // Comparação de atributos
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", compararMaior(carta1.populacao, carta2.populacao));
    printf("Área: Carta 1 venceu (%d)\n", compararMaior(carta1.area, carta2.area));
    printf("PIB: Carta 1 venceu (%d)\n", compararMaior(carta1.pib, carta2.pib));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", compararMaior(carta1.pontosTuristicos, carta2.pontosTuristicos));
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", compararMenor(carta1.densidade, carta2.densidade));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", compararMaior(carta1.pibPerCapita, carta2.pibPerCapita));
    printf("Super Poder: Carta 1 venceu (%d)\n", compararMaior(carta1.superPoder, carta2.superPoder));

    return 0;
}
