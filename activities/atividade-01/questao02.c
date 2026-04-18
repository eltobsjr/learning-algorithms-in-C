#include <stdio.h>

int main(void) {
    int cavalos, ferraduras;

    printf("Digite a quantidade de cavalos: ");
    scanf("%d", &cavalos);

    ferraduras = cavalos * 4;

    printf("Ferraduras necessarias: %d\n", ferraduras);
    return 0;
}
