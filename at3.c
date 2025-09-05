#include <stdio.h>
#include <math.h>

int main() {
    float A, B, C, delta, x1, x2;

    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    if (A == 0 || B == 0 || C == 0) {
        printf("Nao é equacao completa de segundo grau.\n");
    } else {
        delta = (B * B) - (4 * A * C);

        if (delta < 0) {
            printf("Nao existem raizes reais.\n");
        } else if (delta == 0) {
            x1 = -B / (2 * A);
            printf("Existe apenas uma raiz real: %.2f\n", x1);
        } else {
            x1 = (-B + sqrt(delta)) / (2 * A);
            x2 = (-B - sqrt(delta)) / (2 * A);
            printf("Duas raizes reais: %.2f e %.2f\n", x1, x2);
        }
    }

    return 0;