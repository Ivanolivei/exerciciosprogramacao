#include <stdio.h>
typedef struct{
    int regime, hrs, vlr ;
    char nome[10];
}Tprofessor;

int main (){
    Tprofessor professor;
    int vlrf;
    printf("Qual nome do professor ?");
    fgets(professor.nome,10,stdin);
    printf("1 - Horista\n2 - PJ\n3 - CLT\nDigite o numero respectivo ao regime que o professor esta enquandrado:  ");
    scanf("%d",&professor.regime);
    switch (professor.regime)
    {
        case 1:
        printf("Quantas horas trabalhadas no mes ?");
        scanf("%d", &professor.hrs);
        printf("Qual o valor das horas ?");
        scanf("%d", &professor.vlr);
        vlrf=(professor.hrs*professor.vlr);
        printf("O professor %s recebe R$%d,00",professor.nome,vlrf);
        break;
        case 2:
            printf("Qual valor do seu contrato ? \n");
            scanf("%d", &professor.vlr);
            printf("O professor %s recebe R$%d,00.\n", professor.nome, professor.vlr);
        break;
        case 3:
                printf("Qual valor do seu salario ? \n");
                scanf("%d", &professor.vlr);
                printf("O professor %s recebe R$%d,00.\n", professor.nome, professor.vlr);
        break;

        default:
            printf("Digite uma opção valida.");
    }
return 0;
}
