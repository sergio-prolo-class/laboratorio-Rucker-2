#include <stdio.h>

#define POL_POR_PE 12
#define CM_POR_POL 2.54

int main()
{
    // variáveis
    int pes, pol;
    float metros;

    // início

    printf("Escreva a sua altura em pés + polegadas");
    scanf("%d%d", &pes, &pol);
    pol = pes * POL_POR_PE + pol;
    metros = pol * CM_POR_POL / 100;
    printf("altura em metros: %.2f\n", metros);

    // fim
    return 0;
}