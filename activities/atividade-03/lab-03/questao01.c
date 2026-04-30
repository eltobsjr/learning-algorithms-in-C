#include <stdio.h>

int main(void) {
    char letra;

    printf("Digite uma letra minuscula: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' ||
        letra == 'o' || letra == 'u') {
        printf("%c e uma vogal.\n", letra);
    } else {
        printf("%c nao e uma vogal.\n", letra);
    }

    return 0;
}
