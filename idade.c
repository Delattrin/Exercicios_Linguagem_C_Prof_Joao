#include <stdio.h>

int main()
{
   int idade;
   char nome[50];
   
   printf("Digite seu nome: ");
    scanf("%s", nome);
   printf("digite sua idade\n");
   scanf("%d", &idade);
   if (idade < 0 || idade> 120){
       printf("idade invalida!\n");
        return 0;
   }
   
   if (idade >= 18) {
        printf("%s, voce e maior de idade.\n", nome);
         printf("Faltam %d anos para voce ser idoso.\n", 60 - idade);
   }
   else {
        printf("%s, voce e menor de idade.\n", nome);
        printf("Faltam %d anos para voce ser maior de idade.\n", 18 - idade);
    }
   if (idade <12){
       printf("voce eh uma crianca\n");
   }
   if (idade >=18){
       printf("voce eh adulto\n");
   }
    if (idade >=60){
       printf("voce eh idoso\n");
   }
   if (idade >=18){
       printf("voce pode tirar sua cnh\n");
   }
   else{
        printf("voce ainda nao tirar sua cnh\n");
   }
    return 0;
}