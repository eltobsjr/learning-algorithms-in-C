#include <stdio.h>

int main(void) {
    char operador;
    float a, b;

    printf("Digite o operador e dois operandos (ex: + 10 2): ");
    scanf("%c %f %f", &operador, &a, &b);

    switch (operador) {
        case '+':
            printf("%.2f\n", a + b);
            break;
        case '-':
            printf("%.2f\n", a - b);
            break;
        case '*':
            printf("%.2f\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                printf("%.2f\n", a / b);
            }
            break;
        default:
            printf("Operador invalido!\n");
    }

    return 0;
}
