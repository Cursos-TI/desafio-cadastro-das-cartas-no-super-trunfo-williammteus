#include <stdio.h>

int main() {
    printf("bem vindo(a) ao super trunfo de páíses!\n insira os dados das cidades e estados para começar a jogar!\n");

    char nomeEstado[25];
    char nomeCidade[30];
    float populacao;
    float area;
    float PIB;
    float numPonTuris;

    printf("insira o nome do estado\n");
    scanf("%s", &nomeEstado);
    printf("insira o nome da cidade\n");
    scanf(" %s", &nomeCidade);
    printf("insira a população da cidade\n");
    scanf("%f", &populacao);
    printf("insira a area da cidade\n");
    scanf("%f", &area);
    printf("insira o PIB da cidade\n");
    scanf("%f", &PIB);
    printf("insira o numero de pontos turisticos da cidade da cidade\n");
    scanf("%f", &numPonTuris);

    printf("a carta A01, do estado %s", nomeEstado);
    printf(" e de nome %s", nomeCidade);
    printf(" possui: ");
        printf("\npopulação: %f", populacao);
        printf("\narea: %f", area);
        printf("\nPIB: %f", PIB);
        printf("\nnumero de pontos turisticos: %f", numPonTuris);
}
