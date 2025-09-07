int main()
{
    int atleta;
    printf("digite sua idade para ver em qual classe vc se encaixa\n");
    scanf("%d",&atleta);
    if (atleta <=12){
        printf("voce tem %d anos faz parte da classe infatil", atleta);
    }
    else if (atleta >=13 && atleta<=17){
        printf("voce tem %d anos faz parte da classe juvenil", atleta);
    }
    else if (atleta >=18 && atleta <=39){
        printf("voce tem %d anos faz parte da classe adulto", atleta);
    }
    else if (atleta >=40){
        printf("voce tem %d anos faz parte da classe master", atleta);
    }
    return 0;
}