#include <stdio.h>
int main14() {
    int matricula, tipoAluno;
    float mensalidade, valorFinal;
    char pagamento;

    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Digite o valor da mensalidade: ");
    scanf("%f", &mensalidade);

    printf("Pagamento em dia? (S/N): ");
    scanf(" %c", &pagamento);

    printf("Aluno eh: 1 - Filho de funcionario | 2 - Aluno comum: ");
    scanf("%d", &tipoAluno);

    valorFinal = mensalidade;

    if (pagamento == 'S' || pagamento == 's') {
        valorFinal = valorFinal - (valorFinal * 0.05);
    }

    switch (tipoAluno) {
        case 1:
            valorFinal = valorFinal - (valorFinal * 0.50);
            break;
        case 2:
            // nada muda
            break;
        default:
            printf("Codigo de aluno invalido\n");
            return 0;
    }

    printf("Matricula: %d | Valor a pagar: %.2f\n", matricula, valorFinal);

    return 0;
}