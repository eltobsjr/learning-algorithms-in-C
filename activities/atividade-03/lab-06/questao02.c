#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2) {
    return sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void) {
    float x1, y1, x2, y2;

    printf("Digite o primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite o segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("A distancia entre os pontos e: %.2f\n", distancia(x1, y1, x2, y2));

    return 0;
}
