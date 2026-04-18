#include <stdio.h>

int main(void) {
    int dia, mes;
    int dias_passados;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);

    dias_passados = (mes - 1) * 30 + dia;

    printf("Dias desde o inicio do ano: %d\n", dias_passados);
    return 0;
}
