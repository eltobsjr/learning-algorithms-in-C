#include <stdio.h>

int main(void) {
    float a, b, c;

    printf("Digite os tres comprimentos dos segmentos: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Triangulo equilatero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Os segmentos nao formam um triangulo.\n");
    }

    return 0;
}
