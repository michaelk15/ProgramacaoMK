#include <stdio.h>
#include <string.h>

struct Carta {
    char nome[50];
    unsigned long int populacao; // agora é unsigned long int
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
};

// Função para calcular os atributos derivados
void calcularAtributos(struct Carta *carta) {
    carta->densidade = (float)carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;

    // Super poder = soma de todos os atributos (com o inverso da densidade)
    carta->superPoder = (float)carta->populacao +
                        carta->area +
                        carta->pib +
                        carta->pontosTuristicos +
                        carta->pibPerCapita +
                        (1.0f / carta->densidade);
}

// Função para imprimir resultado da comparação
void comparar(const char *atributo, float valor1, float valor2, int regraMenorVence) {
    int resultado;
    if (regraMenorVence) {
        resultado = (valor1 < valor2) ? 1 : 0;
    } else {
        resultado = (valor1 > valor2) ? 1 : 0;
    }
    printf("%s: Carta %d venceu (%d)\n", atributo, resultado == 1 ? 1 : 2, resultado);
}

int main() {
    struct Carta carta1, carta2;

    // Leitura dos dados da carta 1
    printf("Digite o nome do pais (Carta 1): ");
    scanf(" %[^\n]", carta1.nome);
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Leitura dos dados da carta 2
    printf("\nDigite o nome do pais (Carta 2): ");
    scanf(" %[^\n]", carta2.nome);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Calcular atributos derivados
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    // Exibir resultados das comparações
    printf("\n=== Comparacao de Cartas ===\n\n");

    comparar("Populacao", (float)carta1.populacao, (float)carta2.populacao, 0);
    comparar("Area", carta1.area, carta2.area, 0);
    comparar("PIB", carta1.pib, carta2.pib, 0);
    comparar("Pontos Turisticos", (float)carta1.pontosTuristicos, (float)carta2.pontosTuristicos, 0);
    comparar("Densidade Populacional", carta1.densidade, carta2.densidade, 1);
    comparar("PIB per Capita", carta1.pibPerCapita, carta2.pibPerCapita, 0);
    comparar("Super Poder", carta1.superPoder, carta2.superPoder, 0);

    return 0;
}