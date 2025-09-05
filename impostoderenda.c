#include <stdio.h>

int main() {
    float salario, impostos;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if (salario <= 2000) {
        impostos = 0;
        printf("O salario de %.2f esta isento de impostos.\n", salario);
    } 
    else if (salario > 2000 && salario <= 5000) {
    
        impostos = salario * 0.15;
        printf("O salario de %.2f pagara %.2f de impostos (15%%).\n", salario, impostos);
    } 
    else {
        impostos = salario * 0.27;
        printf("O salario de %.2f pagara %.2f de impostos (27%%).\n", salario, impostos);
    }

    return 0;
}
