#include <stdio.h>

int main(void) {
    char c;

    printf("Digite um caracter: ");
    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        printf("'%c' e uma letra minuscula.\n", c);
    } else {
        printf("'%c' nao e uma letra minuscula.\n", c);
    }

    return 0;
}
