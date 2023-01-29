#include <stdio.h>
int main()
{
    int i,j;
    char time[3][50];
    printf("------------------\n");
    printf("CAMPEONATO FUTEBOL\n");
    printf("------------------\n");
    for(i=0;i<3;i++) {
        printf("Nome do %do. time: ",i+1);
        scanf("%s",time[i]);
    }
    system("cls");
    printf("------------------\n");
    printf("TABELA DE PARTIDAS\n");
    printf("------------------\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if(i != j)
            printf("%s x %s\n", time[i], time[j]);
        }
    }
    return 0;
}
