#include <stdio.h>

int main(void) {
    int ano1, mes1, dia1;
    int ano2, mes2, dia2;

    printf("Digite a primeira data (ano mes dia): ");
    scanf("%d %d %d", &ano1, &mes1, &dia1);

    printf("Digite a segunda data (ano mes dia): ");
    scanf("%d %d %d", &ano2, &mes2, &dia2);

    if (ano1 < ano2 ||
        (ano1 == ano2 && mes1 < mes2) ||
        (ano1 == ano2 && mes1 == mes2 && dia1 < dia2)) {
        printf("A primeira data ocorreu antes.\n");
    } else if (ano1 == ano2 && mes1 == mes2 && dia1 == dia2) {
        printf("As datas sao iguais.\n");
    } else {
        printf("A segunda data ocorreu antes.\n");
    }

    return 0;
}
