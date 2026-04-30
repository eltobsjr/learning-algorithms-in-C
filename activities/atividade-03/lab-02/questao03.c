#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, delta;

    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        printf("Raiz dupla: x = %.2f\n", -b / (2 * a));
    } else {
        printf("x1 = %.2f\n", (-b + sqrt(delta)) / (2 * a));
        printf("x2 = %.2f\n", (-b - sqrt(delta)) / (2 * a));
    }

    return 0;
}
