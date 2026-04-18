#include <stdio.h>
#include <math.h>

int main(void) {
    float x1, y1, x2, y2;
    float dx, dy, distancia;

    printf("Digite x1 e y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Digite x2 e y2: ");
    scanf("%f %f", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;
    distancia = sqrtf(dx * dx + dy * dy);

    printf("Distancia: %.2f\n", distancia);
    return 0;
}
