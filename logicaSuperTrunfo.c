#include <stdio.h>

// Definindo a estrutura para armazenar os dados da cidade
struct Cidade {
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
};

int main() {
    struct Cidade cidade1, cidade2;
    int escolha;

    // Cadastro da primeira cidade
    printf("Cadastro da Cidade 1:\n");
    printf("Nome: ");
    scanf(" %[^\n]", cidade1.nome);
    printf("População: ");
    scanf("%lu", &cidade1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Cadastro da segunda cidade
    printf("\nCadastro da Cidade 2:\n");
    printf("Nome: ");
    scanf(" %[^\n]", cidade2.nome);
    printf("População: ");
    scanf("%lu", &cidade2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &cidade2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Menu de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    printf("\nResultado da comparação:\n");

    switch (escolha) {
        case 1:
            if (cidade1.populacao > cidade2.populacao) {
                printf("Cidade com maior população: %s\n", cidade1.nome);
            } else if (cidade1.populacao < cidade2.populacao) {
                printf("Cidade com maior população: %s\n", cidade2.nome);
            } else {
                printf("As duas cidades têm a mesma população.\n");
            }
            break;
        case 2:
            if (cidade1.area > cidade2.area) {
                printf("Cidade com maior área: %s\n", cidade1.nome);
            } else if (cidade1.area < cidade2.area) {
                printf("Cidade com maior área: %s\n", cidade2.nome);
            } else {
                printf("As duas cidades têm a mesma área.\n");
            }
            break;
        case 3:
            if (cidade1.pib > cidade2.pib) {
                printf("Cidade com maior PIB: %s\n", cidade1.nome);
            } else if (cidade1.pib < cidade2.pib) {
                printf("Cidade com maior PIB: %s\n", cidade2.nome);
            } else {
                printf("As duas cidades têm o mesmo PIB.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
