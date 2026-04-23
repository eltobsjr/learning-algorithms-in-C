#include <math.h>
#include <stdio.h>

int main(void) {
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("a) Soma: %.2f\n", n1 + n2);
    printf("b) Produto do primeiro pelo quadrado do segundo: %.2f\n", n1 * (n2 * n2));
    printf("c) Quadrado do primeiro: %.2f\n", n1 * n1);
    printf("d) Raiz quadrada da soma dos quadrados: %.2f\n", sqrt((n1 * n1) + (n2 * n2)));
    printf("e) Seno da diferenca do primeiro pelo segundo: %.6f\n", sin(n1 - n2));
    printf("f) Modulo do primeiro numero: %.2f\n", fabs(n1));

    return 0;
}
