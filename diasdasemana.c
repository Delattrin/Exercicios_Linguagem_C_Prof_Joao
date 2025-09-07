#include <stdio.h>

int main() {
    int semana;
    
    printf("digite qual dia da semana de acordo com os numeros (1/7): ");
    scanf("%d", &semana);

    switch (semana) {
        case 1:
            printf("domingo\n");
            break;
        case 2:
            printf("segunda-feira\n");
            break;
        case 3:
            printf("terça-feira\n");
            break;
        case 4:
            printf("quarta-feira\n");
            break;
        case 5:
            printf("quinta-feira\n");
            break;
        case 6:
            printf("sexta-feira\n");
            break;
        case 7:
            printf("sábado\n");
            break;
        default:
            printf("dia inexistente\n");
            break;
    }

    return 0;
}
