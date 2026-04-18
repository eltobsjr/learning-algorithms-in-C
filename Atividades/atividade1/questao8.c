#include <stdio.h>

int main(void) {
    float n1, n2, n3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    media = (n1 * 1.0f + n2 * 2.0f + n3 * 3.0f) / 6.0f;

    printf("Media ponderada: %.2f\n", media);
    return 0;
}
