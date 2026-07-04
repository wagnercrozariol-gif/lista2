#include <stdio.h>

int main() {
    char sexo;

    do {
        printf("Digite o sexo (F/M): ");
        scanf(" %c", &sexo);
        if (sexo != 'F' && sexo != 'M') {
            printf("Erro! Digite apenas F ou M.\n");
        }
    } while (sexo != 'F' && sexo != 'M');

    printf("Sexo cadastrado: %c\n", sexo);
    return 0;
}
