#include <stdio.h>

int main(void) {
    float peso, valor;

    printf("Digite o peso do prato (kg): ");
    scanf("%f", &peso);

    valor = peso * 12.0f;

    printf("Valor a pagar: R$ %.2f\n", valor);
    return 0;
}
