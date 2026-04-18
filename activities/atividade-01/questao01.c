#include <stdio.h>

int main(void) {
    float largura, comprimento, area;

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("Area do terreno: %.2f\n", area);
    return 0;
}
