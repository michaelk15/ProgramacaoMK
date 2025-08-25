#include <stdio.h>
#include <string.h>

// Estrutura da carta
struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade; // populacao / area
};

int main() {
    struct Carta carta1, carta2;
    int opcao;

    // Preenchendo manualmente as cartas
    strcpy(carta1.nome, "Brasil");
    carta1.populacao = 214000000;
    carta1.area = 8516000.0;
    carta1.pib = 2.0;
    carta1.pontosTuristicos = 10;
    carta1.densidade = carta1.populacao / carta1.area;

    strcpy(carta2.nome, "Japao");
    carta2.populacao = 125000000;
    carta2.area = 377975.0;
    carta2.pib = 5.0;
    carta2.pontosTuristicos = 15;
    carta2.densidade = carta2.populacao / carta2.area;

    // Menu
    printf("=== SUPER TRUNFO - MENU DE ATRIBUTOS ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", carta1.nome, carta2.nome);

    switch (opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d\n", carta1.nome, carta1.populacao);
            printf("%s: %d\n", carta2.nome, carta2.populacao);

            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.populacao < carta2.populacao)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f\n", carta1.nome, carta1.area);
            printf("%s: %.2f\n", carta2.nome, carta2.area);

            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.area < carta2.area)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f\n", carta1.nome, carta1.pib);
            printf("%s: %.2f\n", carta2.nome, carta2.pib);

            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.pib < carta2.pib)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d\n", carta1.nome, carta1.pontosTuristicos);
            printf("%s: %d\n", carta2.nome, carta2.pontosTuristicos);

            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica (menor vence)\n");
            printf("%s: %.2f\n", carta1.nome, carta1.densidade);
            printf("%s: %.2f\n", carta2.nome, carta2.densidade);

            if (carta1.densidade < carta2.densidade)
                printf("Vencedor: %s\n", carta1.nome);
            else if (carta1.densidade > carta2.densidade)
                printf("Vencedor: %s\n", carta2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
