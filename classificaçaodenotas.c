#include <stdio.h>
int main() {
    char notas;
    
    printf("suas notas");
    scanf("c", &notas);

    switch (notas) {
        case 'A':
            printf("excelente\n");
            break;
        case 'B':
            printf("muito bom\n");
            break;
        case 'C':
            printf("bom\n");
            break;
        case 'D':
            printf("regular\n");
            break;
        case 'E':
            printf("precisa melhorar\n");
            break;
        default:
            printf("nota invalida\n");
            break; // Fim do switch //ainda nao acabei o codigo
    }       