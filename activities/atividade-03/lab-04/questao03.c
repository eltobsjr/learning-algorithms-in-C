#include <stdio.h>

int main(void) {
    int escolha;

    printf("=== MENU ===\n");
    printf("1 - Miojo\n");
    printf("2 - Ensopado\n");
    printf("3 - Arroz com feijao\n");
    printf("4 - Frango grelhado\n");
    printf("5 - Macarronada\n");
    printf("Escolha um prato: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Macarrao instantaneo.\n");
            break;
        case 2:
            printf("Carne cozida com legumes e caldo.\n");
            break;
        case 3:
            printf("Classico brasileiro: arroz branco com feijao temperado.\n");
            break;
        case 4:
            printf("Frango temperado e grelhado na chapa.\n");
            break;
        case 5:
            printf("Macarrao ao molho de tomate com queijo.\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
