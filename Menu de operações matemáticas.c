#include <stdio.h>

int main() {
    int opcao;
    float a, b, resultado;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("\nEscolha uma operacao:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
            if (b != 0) {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
