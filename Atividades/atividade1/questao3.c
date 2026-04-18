#include <stdio.h>

int main(void) {
    int paes, broas;
    float total, poupanca;

    printf("Digite a quantidade de paes: ");
    scanf("%d", &paes);
    printf("Digite a quantidade de broas: ");
    scanf("%d", &broas);

    total = paes * 0.12f + broas * 1.50f;
    poupanca = total * 0.10f;

    printf("Total arrecadado: R$ %.2f\n", total);
    printf("Guardar na poupanca: R$ %.2f\n", poupanca);
    return 0;
}
