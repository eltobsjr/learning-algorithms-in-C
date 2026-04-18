#include <stdio.h>

int main(void) {
    int pequenas, medias, grandes;
    int total;

    printf("Digite a quantidade de pequenas: ");
    scanf("%d", &pequenas);
    printf("Digite a quantidade de medias: ");
    scanf("%d", &medias);
    printf("Digite a quantidade de grandes: ");
    scanf("%d", &grandes);

    total = pequenas * 10 + medias * 12 + grandes * 15;

    printf("Valor arrecadado: R$ %d\n", total);
    return 0;
}
