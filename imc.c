#include <stdio.h>

int main() {
   float peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    imc= peso / (altura * altura);
    if(imc <18.5){
        printf("Abaixo do peso\n");
    }
    else if(imc >= 18.5 &&imc < 25){
        printf("Peso normal\n");
    }
    else if(imc >= 25 &&imc < 30){
        printf("Sobrepeso\n");
    }
    else{
        printf("Obesidade\n");
    }
    printf("Seu IMC eh %.2f\n", imc);
    
    return 0;
}