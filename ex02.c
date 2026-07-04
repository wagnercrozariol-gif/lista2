#include <stdio.h>

int main() {
    int primeiro, segundo;

    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiro);

    printf("Digite o segundo valor (deve ser maior que o primeiro): ");
    scanf("%d", &segundo);

    while (segundo <= primeiro) {
        printf("Erro! O segundo valor deve ser maior que o primeiro.\n");
        printf("Digite novamente o segundo valor: ");
        scanf("%d", &segundo);
    }

    printf("Primeiro valor: %d\n", primeiro);
    printf("Segundo valor: %d\n", segundo);
    return 0;
}
