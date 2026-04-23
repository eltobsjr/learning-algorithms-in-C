#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    printf("Hexa: %X\n", numero);
    printf("Octal: %o\n", numero);

    return 0;
}
