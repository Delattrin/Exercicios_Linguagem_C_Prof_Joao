#include <stdio.h>
int main() {
    int menu;
    printf("cardapio escolha entre os numeros 1/4 para os seguintes pratos\n");
    scanf("%d",&menu);
    switch (menu){
        case 1:
        printf("Hambúrguer");
        break;
        case 2:
        printf("pizza");
        break;
        case 3:
        printf("refrigerante");
        break;
        case 4:
        printf("sorvete");
        break;
    }
    
  
    return 0;
}