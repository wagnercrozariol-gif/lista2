#include <stdio.h>

int main() {
    char repetir;

    do {
        int n;

        do {
            printf("Digite um valor para calcular o fatorial (nao negativo): ");
            scanf("%d", &n);
            if (n < 0) {
                printf("Erro! O valor nao pode ser negativo.\n");
            }
        } while (n < 0);

        long long fatorial = 1;
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("%d! = %lld\n", n, fatorial);

        do {
            printf("\nDeseja fazer um novo calculo? (S/N): ");
            scanf(" %c", &repetir);
            if (repetir != 'S' && repetir != 'N') {
                printf("Erro! Digite apenas S ou N.\n");
            }
        } while (repetir != 'S' && repetir != 'N');

    } while (repetir == 'S');

    return 0;
}
