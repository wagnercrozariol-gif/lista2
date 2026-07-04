#include <stdio.h>

int main() {
    int valores[10];
    int soma = 0, maior;

    for (int i = 0; i < 10; i++) {
        do {
            printf("Digite o %dº valor (positivo): ", i + 1);
            scanf("%d", &valores[i]);
            if (valores[i] <= 0) {
                printf("Erro! O valor deve ser positivo.\n");
            }
        } while (valores[i] <= 0);

        soma += valores[i];
    }

    maior = valores[0];
    for (int i = 1; i < 10; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Soma dos valores: %d\n", soma);
    printf("Media aritmetica: %.2f\n", soma / 10.0);

    return 0;
}
