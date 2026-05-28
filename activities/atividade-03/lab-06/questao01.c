#include <stdio.h>

int menor(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main(void) {
    int n1, n2;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("O menor numero e: %d\n", menor(n1, n2));

    return 0;
}
