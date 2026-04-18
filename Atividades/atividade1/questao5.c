#include <stdio.h>

int main(void) {
    float preco_litro, valor_pago, litros;

    printf("Digite o preco do litro: ");
    scanf("%f", &preco_litro);
    printf("Digite o valor do pagamento: ");
    scanf("%f", &valor_pago);

    litros = valor_pago / preco_litro;

    printf("Litros colocados: %.2f\n", litros);
    return 0;
}
