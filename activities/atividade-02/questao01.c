#include <stdio.h>

int main(void) {
    float metros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    printf("Decimetros: %.2f\n", metros * 10);
    printf("Centimetros: %.2f\n", metros * 100);
    printf("Milimetros: %.2f\n", metros * 1000);

    return 0;
}
