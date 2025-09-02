#include <stdio.h>

int main() {
    float n1, n2, n3, n4, exame, media, novamedia;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 7) {
        printf("Aprovado\n");
        printf("Media: %.2f\n", media);
    } else {
        printf("Digite a nota do exame: ");
        scanf("%f", &exame);
        novamedia = (media + exame) / 2;

        if (novamedia >= 7)
            printf("Aprovado em exame\n");
        else
            printf("Reprovado\n");

        printf("Media final: %.2f\n", novamedia);
    }

    return 0;
}
