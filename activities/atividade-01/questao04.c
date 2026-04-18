#include <stdio.h>

int main(void) {
    char nome[100];
    int idade;
    int dias;

    printf("Digite o nome: ");
    scanf("%99s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("%s, VOCE JA VIVEU %d DIAS\n", nome, dias);
    return 0;
}
