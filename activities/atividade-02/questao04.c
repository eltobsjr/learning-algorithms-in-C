#include <stdio.h>

int main(void) {
    double f1, c1;
    int f2, c2;

    printf("Digite Fahrenheit (double): ");
    scanf("%lf", &f1);

    c1 = (f1 - 32.0) * (5.0 / 9.0);
    printf("Celsius: %.2f\n", c1);

    printf("Digite Fahrenheit (int): ");
    scanf("%d", &f2);

    c2 = (f2 - 32) * 5 / 9;
    printf("Celsius: %d\n", c2);

    return 0;
}
