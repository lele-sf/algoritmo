#include <stdio.h>
int main()
{
    int ano,nasc,idade;
    printf("-------------------------\n DEPARTAMENTO DE TRANSITO\n-------------------------\n");
    printf("Ano Atual (yyyy): ");
    scanf("%d",&ano);
    printf("Ano de Nascimento (yyyy): ");
    scanf("%d",&nasc);
    printf("\n--------- STATUS ---------\n");
    idade = ano - nasc;
    printf(" IDADE: %d ANOS\n",idade);
    if (idade >= 21) {
        printf(" APTO A TIRAR CARTEIRA\n---------------------------");
    } else {
       printf(" INAPTO A TIRAR A CARTEIRA\n---------------------------"); }
    return 0;
}
